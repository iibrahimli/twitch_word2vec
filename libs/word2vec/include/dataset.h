#pragma once

#include <iostream>
#include <vector>
#include <set>

#include "types.h"


class Dataset {

    static str_set stopwords;


private:

    str   src_filename_;
    text  corpus_;


    /*
        Remove whitespace characters at the beginning
        and the end of text
    */
    str strip_(const str& txt);


    /*
        Filter stopwords
    */
    str filter_stopwords_(const str& txt);


public:

    /*
        Read text from a file and preprocess

    */
    Dataset(str filename);

};