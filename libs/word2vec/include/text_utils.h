#pragma once

#include <iostream>

#include "types.h"


namespace wv{

/*
    Remove whitespace characters at the beginning
    and the end of text
*/
str strip(const str& txt);


/*
    Filter stopwords
*/
str filter_stopwords(const str& txt);


/*
    Split string by separator characters
*/
sentence split_str(const str& s, const char_set& c);


/*
    Sentence/word tokenize a text corpus
*/
corpus tokenize(const str& txt);


/*
    Print a sentence
*/
std::ostream& operator<<(std::ostream& os, const sentence& sent);


/*
    Print a corpus
*/
std::ostream& operator<<(std::ostream& os, const corpus& corp);


}  // end namespace wv