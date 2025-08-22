#pragma once

#include <vector>

#include "board.h"

namespace chess {

/**
 * Generate all legal moves for the given board position.
 */
std::vector<Move> generate_legal_moves(const Board &board);

/**
 * Generate pseudo-legal moves (ignoring king safety).
 */
std::vector<Move> generate_pseudo_legal_moves(const Board &board);

} // namespace chess

