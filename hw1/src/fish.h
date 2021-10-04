#ifndef __fish__
#define __fish__

//------------------------------------------------------------------------------
// fish.h - describes fishes.
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

# include "rnd.h"

//------------------------------------------------------------------------------
// fish
struct fish {
    enum key {RIVER, SEA, LAKE};
    key k;
};

// Input from a file.
void In(fish &t, ifstream &ifst);

// Random input.
void InRnd(fish &e);

// Output the fish.
void Out(fish &t, ofstream &ofst);

#endif //__fish__
