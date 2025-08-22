#pragma once

#include <cstdint>

#include "bitboard.h"

namespace chess {

/**
 * @struct Move
 * @brief Compact representation of a chess move.
 *
 * The engine stores moves in a 32-bit structure. This keeps the search tree
 * compact while remaining easy to work with.
 */
struct Move {
    std::uint8_t from;      ///< Origin square (0..63)
    std::uint8_t to;        ///< Destination square (0..63)
    std::uint8_t piece;     ///< Moving piece (see ::Piece)
    std::uint8_t captured;  ///< Captured piece (if any, ::NO_PIECE otherwise)
    std::uint8_t promotion; ///< Promotion piece type (if any, ::PIECE_TYPE_NB otherwise)
    std::uint16_t flags;    ///< Special move flags
};

/// Flags describing special move properties.
enum MoveFlag : std::uint16_t {
    QUIET            = 0,
    CAPTURE          = 1 << 0,
    DOUBLE_PAWN_PUSH = 1 << 1,
    KING_CASTLE      = 1 << 2,
    QUEEN_CASTLE     = 1 << 3,
    EN_PASSANT       = 1 << 4,
    PROMOTION        = 1 << 5
};

} // namespace chess

