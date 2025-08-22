#pragma once

#include <cstdint>

/**
 * @file bitboard.h
 * @brief Basic bitboard types and utilities.
 *
 * The engine uses 64-bit bitboards to represent piece occupancy.
 * Each bit corresponds to a square on the chess board (A1 = 0, H8 = 63).
 */

namespace chess {

using Bitboard = std::uint64_t; ///< 64-bit bitboard type.

/**
 * Enumeration of all squares. The value of each enumerator matches the
 * corresponding bit index inside a bitboard. This allows squares to be used
 * directly as indices when manipulating bitboards.
 */
enum Square : int {
    SQ_A1 = 0, SQ_B1, SQ_C1, SQ_D1, SQ_E1, SQ_F1, SQ_G1, SQ_H1,
    SQ_A2, SQ_B2, SQ_C2, SQ_D2, SQ_E2, SQ_F2, SQ_G2, SQ_H2,
    SQ_A3, SQ_B3, SQ_C3, SQ_D3, SQ_E3, SQ_F3, SQ_G3, SQ_H3,
    SQ_A4, SQ_B4, SQ_C4, SQ_D4, SQ_E4, SQ_F4, SQ_G4, SQ_H4,
    SQ_A5, SQ_B5, SQ_C5, SQ_D5, SQ_E5, SQ_F5, SQ_G5, SQ_H5,
    SQ_A6, SQ_B6, SQ_C6, SQ_D6, SQ_E6, SQ_F6, SQ_G6, SQ_H6,
    SQ_A7, SQ_B7, SQ_C7, SQ_D7, SQ_E7, SQ_F7, SQ_G7, SQ_H7,
    SQ_A8, SQ_B8, SQ_C8, SQ_D8, SQ_E8, SQ_F8, SQ_G8, SQ_H8,
    SQ_NONE
};

/// Sides to move / piece color.
enum Color { WHITE, BLACK, COLOR_NB };

/// Piece types without color information.
enum PieceType { PAWN, KNIGHT, BISHOP, ROOK, QUEEN, KING, PIECE_TYPE_NB };

/// Piece identifiers including color.
enum Piece {
    W_PAWN, W_KNIGHT, W_BISHOP, W_ROOK, W_QUEEN, W_KING,
    B_PAWN, B_KNIGHT, B_BISHOP, B_ROOK, B_QUEEN, B_KING,
    NO_PIECE
};

/**
 * Pop the least significant bit from the given bitboard and return its index.
 *
 * @param bb Bitboard to manipulate.
 * @return Index of the extracted bit (0..63) or SQ_NONE if bb was zero.
 */
Square pop_lsb(Bitboard &bb);

/**
 * Count the number of set bits in a bitboard.
 */
int bit_count(Bitboard bb);

} // namespace chess

