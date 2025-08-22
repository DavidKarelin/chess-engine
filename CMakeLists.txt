cmake_minimum_required(VERSION 3.14)
project(chess_engine LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(chess
    src/bitboard.cpp
    src/board.cpp
    src/movegen.cpp
    src/evaluation.cpp
    src/search.cpp
    src/zobrist.cpp
)

target_include_directories(chess PUBLIC include)

add_executable(chess_engine src/main.cpp)
target_link_libraries(chess_engine PRIVATE chess)

enable_testing()
# Tests can be added in the tests/ directory using CTest or another framework.

