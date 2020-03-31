project(word2vec)

set(word2vec_SRC
	src/word2vec.cpp
	src/dataset.cpp
)

add_library(word2vec STATIC ${word2vec_SRC})

target_include_directories(word2vec
	PUBLIC include
)