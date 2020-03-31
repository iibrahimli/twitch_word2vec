#pragma once

#include <string>
#include <vector>
#include <set>


namespace wv{

using str      = std::string;
using sentence = std::vector<str>;
using corpus   = std::vector<sentence>;
using str_set  = std::set<str>;
using char_set = std::set<char>;


}  // end namespace wv