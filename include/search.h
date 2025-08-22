#pragma once

#include "board.h"
#include "movegen.h"

namespace chess {

/**
 * Find the best move using alpha-beta search up to the given depth.
 */
Move find_best_move(Board &board, int depth);

} // namespace chess

