#include "text_utils.h"
#include "const.h"


namespace wv{

str strip(const str& txt) {
    if(txt.empty()) return "";

    auto txtlen = txt.size();

    int first_nonws = 0;
    int last_nonws = txt.size() - 1;
    for(; first_nonws < txtlen && isspace(txt[first_nonws]); ++first_nonws);
    for(; 0 <= last_nonws      && isspace(txt[last_nonws]);  --last_nonws);

    return txt.substr(first_nonws, last_nonws - first_nonws + 1);
}


str filter_stopwords(const str& txt) {

}


sentence split_str(const str& s, const char_set& c) {
    sentence res;
    size_t start = 0, end = 0;

    while(end < s.size()) {
        if(c.find(s[end]) != c.end()){
            res.emplace_back(s.substr(start, end - start));
            start = ++end;
        }
        else
            ++end;
    }

    if(start < end)
        res.emplace_back(s.substr(start, end - start));

    return res;
}


corpus tokenize(const str& txt) {
    corpus res;
    auto stripped = strip(txt);

    auto sents = split_str(stripped, sentence_sep);
    for(auto& stc : sents){
        if(stc.empty())
            continue;

        auto words = split_str(stc, word_sep);
        sentence filtered_stc;

        // ignore empty words
        for(auto& wrd : words){
            if(!wrd.empty())
                filtered_stc.emplace_back(wrd);
        }
        res.emplace_back(filtered_stc);
    }

    return res;
}


std::ostream& operator<<(std::ostream& os, const sentence& sent) {
    os << "[";
    for(size_t i=0; i<sent.size(); ++i){
        os << "'" << sent[i] << "'";
        if(i != sent.size()-1)
            os << " ";
    }
    os << "]";
    return os;
}


std::ostream& operator<<(std::ostream& os, const corpus& corp) {
    os << "[" << std::endl;
    for(size_t i=0; i<corp.size(); ++i){
        os << "    " << corp[i] << std::endl;
    }
    os << "]";
    return os;
}


}  // end namespace wv