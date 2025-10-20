# HPC TP2 — Animal hierarchy (Q1 → Q4)

Author: Romain Jochum

## Overview
This small C++ exercise implements an object-oriented `Animal` hierarchy and demonstrates inheritance, polymorphism and basic use of the STL `vector` to collect polymorphic objects.

The work is split across four questions:
- Q1 — define a base `Animal` class (`src/Animal.h`) with protected data members, public accessors and virtual member functions.
- Q2 — add derived classes: `Mammal`, `Bird`, `Fish` and bonus classes `Penguin`, `Ostrich`, `Dolphin` (in `src/q2.cpp` / `src/questions.cpp`). Each adds appropriate members and overrides the virtual functions.
- Q3 — enable and demonstrate polymorphism: virtual/override keywords are used so calls through `Animal*` dispatch to derived implementations.
- Q4 — create a `Zoo` collection using `std::vector<Animal*>` and helper functions in `src/Zoo.hpp` / `src/Zoo.cpp` to print displacements and compute total weight.

## Files of interest
- `src/Animal.h` — base class.
- `src/q1.cpp`, `src/q2.cpp`, `src/questions.cpp` — exercises and demos (note: `questions.cpp` currently contains the main demo used when building/run manually).
- `src/Zoo.hpp`, `src/Zoo.cpp` — helper functions: `info_displacement`, `inventory`, `total_weight`.

## Build & Run
You have two convenient ways to build and run the demo binary used during development.

1) Using CMake presets (recommended, the workspace contains `CMakePresets.json`):

```bash
# Configure (debug preset)
cmake --preset debug

# Build the debug target
cmake --build build/debug

# Run (binary location depends on the CMake target; an example binary used during manual testing is build/Questions)
./build/Questions
```

2) Quick compile (single-step, uses g++ directly)

```bash
mkdir -p build
g++ -std=c++17 -Wall -Wextra -I src src/questions.cpp src/Zoo.cpp -o build/Questions
./build/Questions
```

## Notes and recommendations
- The exercises intentionally use `new` / `delete` to show ownership explicitly. In modern C++ prefer smart pointers (for example `std::unique_ptr<Animal>`) to avoid manual memory management.
- The `Animal` class exposes `virtual` functions (`print`, `moveDescription`, `type`), and derived classes use the `override` specifier to ensure correct overrides.
- `src/Zoo.cpp` iterates with non-const `Animal*` because `info_displacement()` is implemented as a non-const method. If desired, mark `info_displacement()` as `const` on `Animal` and update code accordingly.