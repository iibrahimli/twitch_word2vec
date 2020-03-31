#pragma once

#include <iostream>
#include <vector>
#include <set>

#include "types.h"
#include "text_utils.h"


namespace wv{
    class Dataset;
}


/*
    Dataset
*/
class wv::Dataset {

private:

    str     src_filename_;
    corpus  corpus_;


public:

    /*
        Read text from a file and preprocess

    */
    Dataset(str filename);

};