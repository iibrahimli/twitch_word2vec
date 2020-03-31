project(word2vec)

set(train_SRC
	train.cpp
)

add_executable(train ${train_SRC})

target_link_libraries(train word2vec)