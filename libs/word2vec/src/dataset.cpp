#include "dataset.h"

#include <fstream>
#include <streambuf>
#include <cctype>


// Stopwords
str_set Dataset::stopwords {
    "the",
    "a"
};


Dataset::Dataset(std::string filename) {

    // read file
    std::ifstream in_s(filename);

    if(!in_s){
        throw std::runtime_error("File " + filename + " not found");
    }

    // load whole file into string
    std::string buffer((std::istreambuf_iterator<char>(in_s)),
                       std::istreambuf_iterator<char>());
    

    std::cout << "==============" << std::endl;
    std::cout << strip_(buffer) << std::endl;
    std::cout << "==============" << std::endl;
}


str strip_(const str& txt) {

    if(txt.empty()) return "";

    auto txtlen = txt.length();

    int first_nonws = 0;
    int last_nonws = txt.length() - 1;
    for(; first_nonws < txtlen && isspace(txt[first_nonws]); ++first_nonws);
    for(; 0 <= last_nonws      && isspace(txt[last_nonws]);  --last_nonws);

    return txt.substr(first_nonws, last_nonws);
}


str filter_stopwords_(const str& txt) {

}