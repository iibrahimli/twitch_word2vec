/*
    Constants used for tokenization and filtering
*/

#pragma once

#include "types.h"


namespace wv{

static str_set stopwords {
    "a",
    "an",
    "the"
};

static char_set sentence_sep {
    '.',
    '!',
    '?',
    '\n'
};

static char_set word_sep {
    ' ',
    ',',
    '-',
    '+',
    ';',
    ':',
    '"',
    '\'',
    '*',
    '#',
    // '$',
    // '%',
    '&',
    '(',
    ')',
    '[',
    ']',
    '{',
    '}'
};


}  // end namespace wv