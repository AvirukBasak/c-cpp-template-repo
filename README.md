# C/C++ template
Template repository for C/C++ static libraries.

## Usage
- Build with `make`.
- Copy library from `lib/`.

## Guide
- Put all sources in `src/`.
- Subfolders in `src/` should have respetive `Makefile`s.
- Put all library source in `lib/libname/` with respective make files.
- Put library `.a` file in `lib/`.
- Compiler `-I` passes `include/` and `lib`.
- Compiler `-L` passes `lib/`.
- Put header of your library in `include/`.
- This file will get put in `target/`.
- Generated library is put in `target/`.
