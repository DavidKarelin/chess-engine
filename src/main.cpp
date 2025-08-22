#include <iostream>

#include "board.h"
#include "zobrist.h"

int main() {
    chess::init_zobrist();
    chess::Board board;
    board.set_start_position();
    std::cout << "Chess engine skeleton initialized." << std::endl;
    return 0;
}

