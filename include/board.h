#pragma once

#include <array>

#include "bitboard.h"
#include "move.h"

namespace chess {

/**
 * @class Board
 * @brief Represents a chess position using bitboards.
 *
 * Each piece type for each color is stored in a dedicated bitboard. Additional
 * bitboards keep track of overall occupancy for fast attack generation.
 */
class Board {
public:
    Board();

    /// Set the board to the standard chess starting position.
    void set_start_position();

    /// Make a move on the board (assumes the move is legal).
    void make_move(const Move &move);

    /// Undo a previously made move.
    void undo_move(const Move &move);

    /// Compute a Zobrist hash for the current position.
    std::uint64_t hash() const;

    /// Side to move accessor.
    Color side_to_move() const { return stm; }

private:
    std::array<std::array<Bitboard, PIECE_TYPE_NB>, COLOR_NB> piece_bitboards; ///< Piece bitboards
    std::array<Bitboard, COLOR_NB> occupancy; ///< Occupancy bitboards per side
    Bitboard occupancy_all; ///< All pieces occupancy

    Color stm;             ///< Side to move
    std::uint8_t castling_rights; ///< Castling rights mask
    Square en_passant;     ///< En-passant target square
    std::uint16_t halfmove_clock; ///< Fifty-move rule counter
    std::uint16_t fullmove_number; ///< Move number starting from 1
};

} // namespace chess

