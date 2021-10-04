//------------------------------------------------------------------------------
// beast.cpp - contains operations for beasts.
//------------------------------------------------------------------------------

#include "beast.h"

//------------------------------------------------------------------------------
// Input from a file.
void In(beast &t, ifstream &ifst) {
    auto k = 1;
    ifst >> k;
    switch(k) {
        case 1:
            t.k = t.DOMESTIC;
            break;
        case 2:
            t.k = t.WILD;
            break;
        case 3:
            t.k = t.GARDEN;
            break;
        default:
            return;
    }
}

// Random input.
void InRnd(beast &t) {
    auto k = rand() % 3;
    switch(k) {
        case 0:
            t.k = t.DOMESTIC;
            break;
        case 1:
            t.k = t.WILD;
            break;
        case 2:
            t.k = t.GARDEN;
            break;
        default:
            return;
    }
}

//------------------------------------------------------------------------------
// Output the beast.
void Out(beast &t, ofstream &ofst) {
    ofst << "It is a beast." << "It is " << (t.k==0?"domestic.":(t.k==1?"wild.":"garden.")) << "\n";
}

