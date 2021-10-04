//------------------------------------------------------------------------------
//  Bird methods.
//------------------------------------------------------------------------------

#include "bird.h"

//------------------------------------------------------------------------------
// Input from a file.
void In(bird &r, ifstream &ifst) {
    string flag;
    ifst >> flag;
    r.isFlight = (flag=="true");
}

// Random input.
void InRnd(bird &r) {
    r.isFlight = Random()%2;
}

//------------------------------------------------------------------------------
// Output the bird.
void Out(bird &r, ofstream &ofst) {
    ofst << "It is a bird. Can flight? = " << (r.isFlight?"yes":"no") << "\n";
}


