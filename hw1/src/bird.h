#ifndef __bird__
#define __bird__

//------------------------------------------------------------------------------
// bird.h - describes the bird.
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

# include "rnd.h"

// bird
struct bird {
    bool isFlight;
};

// Input from a file.
void In(bird &r, ifstream &ifst);

// Random input.
void InRnd(bird &r);

// Output the bird.
void Out(bird &r, ofstream &ofst);

#endif //__bird__
