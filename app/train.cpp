#include "word2vec.h"


int main(int argc, char *argv[]){
    auto ds = wv::Dataset("/home/imran/Desktop/misc/twitch_word2vec/app/data/test.txt");
    auto enc = wv::Word2Vec(256);
    return 0;
}