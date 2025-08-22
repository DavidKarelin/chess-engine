#include "bitboard.h"

namespace chess {

Square pop_lsb(Bitboard &bb) {
    // TODO: Efficiently extract the least significant bit from bb.
    if (bb == 0)
        return SQ_NONE;
    int index = __builtin_ctzll(bb);
    bb &= bb - 1;
    return static_cast<Square>(index);
}

int bit_count(Bitboard bb) {
    // TODO: Use built-in popcount where available.
    return __builtin_popcountll(bb);
}

} // namespace chess

