#include "dataset.h"

#include <fstream>
#include <streambuf>
#include <cctype>


namespace wv{

Dataset::Dataset(std::string filename) {

    // read file
    std::ifstream in_s(filename);

    if(!in_s){
        throw std::runtime_error("File " + filename + " not found");
    }

    // load whole file into string
    str buffer((std::istreambuf_iterator<char>(in_s)),
               std::istreambuf_iterator<char>());
    
    corpus_ = tokenize(buffer);

    std::cout << corpus_ << std::endl;
}


}  // end namespace wv