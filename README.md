# Chess Engine Skeleton

This repository contains a well‑structured foundation for a chess engine
written in C++. The goal is to provide clear entry points for future
implementation while documenting the design decisions that guide the engine's
architecture.

## Design Overview

* **Bitboards** – The board is represented using 64‑bit bitboards. Each bit
  corresponds to a square on the chess board, enabling efficient move
  generation and attack calculations.
* **Move Representation** – Moves are stored in a compact 32‑bit structure
  containing origin, destination, piece, capture and special‑move flags.
* **Zobrist Hashing** – Position hashes are computed using Zobrist hashing with
  pre‑generated random keys.
* **Search** – The planned search algorithm is an iterative deepening
  alpha‑beta search. Enhancements such as transposition tables or move ordering
  heuristics can be added later.
* **Evaluation** – A simple material balance combined with piece‑square tables
  will serve as the initial evaluation function. More sophisticated techniques
  (pawn structure, king safety, etc.) can be layered on top.

## Project Layout

```
.
├── CMakeLists.txt         # Build configuration
├── include/               # Public header files
├── src/                   # Source files / stub implementations
├── tests/                 # Placeholder for future tests
└── README.md              # This file
```

## Building

```
cmake -S . -B build
cmake --build build
```

Running the resulting `chess_engine` executable will simply initialize the
engine skeleton. All engine logic is left as TODOs for future development.

## Contributing

Feel free to open issues or pull requests to improve the engine, implement
missing features, or discuss design decisions.

