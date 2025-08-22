#include "zobrist.h"

#include <random>

namespace chess {

std::array<std::array<std::uint64_t, 64>, 12> zobrist_piece{};
std::array<std::uint64_t, 16> zobrist_castling{};
std::array<std::uint64_t, 8> zobrist_enpassant{};
std::uint64_t zobrist_side_to_move{0};

void init_zobrist() {
    // TODO: Fill tables with random 64-bit numbers for hashing.
    std::mt19937_64 rng(0xC0FFEE); // Fixed seed for reproducibility
    for (auto &piece_array : zobrist_piece)
        for (auto &key : piece_array)
            key = rng();
    for (auto &key : zobrist_castling)
        key = rng();
    for (auto &key : zobrist_enpassant)
        key = rng();
    zobrist_side_to_move = rng();
}

} // namespace chess

