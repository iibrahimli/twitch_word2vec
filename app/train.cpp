#include "word2vec.h"


int main(int argc, char *argv[]){
    auto ds = Dataset("/home/imran/Desktop/misc/twitch_word2vec/app/data/test.txt");
    auto enc = Word2Vec(256);
    return 0;
}