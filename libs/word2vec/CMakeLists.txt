project(word2vec)

add_compile_options(-Wall -Wextra)

set(word2vec_SRC
	src/text_utils.cpp
	src/dataset.cpp
	src/word2vec.cpp
)

add_library(word2vec STATIC ${word2vec_SRC})

target_include_directories(word2vec
	PUBLIC include
)