//------------------------------------------------------------------------------
// fish.cpp - contains operations for fishes.
//------------------------------------------------------------------------------

#include "fish.h"

//------------------------------------------------------------------------------
// Input from a file.
void In(fish &t, ifstream &ifst) {
    auto k = 1;
    ifst >> k;
    switch(k) {
        case 1:
            t.k = t.RIVER;
            break;
        case 2:
            t.k = t.SEA;
            break;
        case 3:
            t.k = t.LAKE;
            break;
        default:
            return;
    }
}

// Random input.
void InRnd(fish &t) {
    auto k = rand() % 3 + 1;
    switch(k) {
        case 1:
            t.k = t.RIVER;
            break;
        case 2:
            t.k = t.SEA;
            break;
        case 3:
            t.k = t.LAKE;
            break;
        default:
            return;
    }
}

//------------------------------------------------------------------------------
// Output the fish.
void Out(fish &t, ofstream &ofst) {
    ofst << "It is a fish. " << "It lives in " << (t.k==0?"river":(t.k==0?"sea":"lake")) << ".\n";
}
