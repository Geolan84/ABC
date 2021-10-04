#ifndef __container__
#define __container__

//------------------------------------------------------------------------------
// container.h - data for saving animals.
//------------------------------------------------------------------------------

#include "animal.h"

//------------------------------------------------------------------------------
//
struct container {
    enum {max_len = 10000}; // max length
    int len; // current lenght
    animal *cont[max_len];
};

void Init(container &c);

void Clear(container &c);

void In(container &c, ifstream &ifst);

void InRnd(container &c, int size);

void Out(container &c, ofstream &ofst);

void ShakerSort(container &c);

#endif
