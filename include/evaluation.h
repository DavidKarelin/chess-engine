#pragma once

#include "board.h"

namespace chess {

/**
 * Evaluate the given board position from the side to move's perspective.
 * Positive scores favor the side to move, negative scores favor the opponent.
 *
 * A simple material + piece-square table scheme is used by default.
 */
int evaluate(const Board &board);

} // namespace chess

