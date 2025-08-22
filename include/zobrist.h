#pragma once

#include <array>
#include <cstdint>

namespace chess {

/**
 * Precomputed Zobrist hashing keys used for fast position hashing.
 */
extern std::array<std::array<std::uint64_t, 64>, 12> zobrist_piece;
extern std::array<std::uint64_t, 16> zobrist_castling;
extern std::array<std::uint64_t, 8> zobrist_enpassant;
extern std::uint64_t zobrist_side_to_move;

/// Initialize Zobrist hashing tables. Must be called before using ::Board::hash.
void init_zobrist();

} // namespace chess

