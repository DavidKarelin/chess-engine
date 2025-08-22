#include "board.h"
#include "zobrist.h"

namespace chess {

Board::Board()
    : piece_bitboards{},
      occupancy{},
      occupancy_all(0),
      stm(WHITE),
      castling_rights(0),
      en_passant(SQ_NONE),
      halfmove_clock(0),
      fullmove_number(1) {}

void Board::set_start_position() {
    // TODO: Initialize bitboards to the standard chess starting position.
}

void Board::make_move(const Move &move) {
    // TODO: Update all state to reflect the given move.
}

void Board::undo_move(const Move &move) {
    // TODO: Revert the state changes made by make_move().
}

std::uint64_t Board::hash() const {
    // TODO: Compute Zobrist hash of the current position.
    return 0ULL;
}

} // namespace chess

