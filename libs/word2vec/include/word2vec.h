#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "types.h"
#include "dataset.h"


/*
    Simple word2vec

*/
class Word2Vec {

private:


public:

    // dimensionality of word vectors
    int n_dim;


    Word2Vec(int n_dim);

    void train();

};