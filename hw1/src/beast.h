#ifndef __beast__
#define __beast__

//------------------------------------------------------------------------------
// beast.h - describes beasts.
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

# include "rnd.h"

//------------------------------------------------------------------------------
// beast structure.
struct beast {
    enum key {DOMESTIC, WILD, GARDEN};
    key k;
};

// Input from a file.
void In(beast &t, ifstream &ifst);

// Random input.
void InRnd(beast &e);

// Output the beast.
void Out(beast &t, ofstream &ofst);

#endif //__beast__