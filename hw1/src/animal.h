#ifndef __animal__
#define __animal__

//------------------------------------------------------------------------------
// animal.h - desctibes the base struct animal. 
//------------------------------------------------------------------------------

#include "bird.h"
#include "fish.h"
#include "beast.h"
#include "string.h"

//------------------------------------------------------------------------------
// struct animal - generalization of objects.
struct animal {
    //keys
    enum key {BIRD, FISH, BEAST};
    key k;
    union {
        bird bird_ex;
        fish fish_ex;
        beast beast_ex;
    };
    string name;
    int weight;
    double quotient;
};

// Input animal.
animal *In(ifstream &ifdt);

// Random input animal.
animal *InRnd();

// Writing animal.
void Out(animal &s, ofstream &ofst);

// Counting the quotient.
//double Quotient(animal &s);

double Quotient(std::string s, const int& weight);

#endif //__animal__
