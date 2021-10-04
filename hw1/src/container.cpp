//------------------------------------------------------------------------------
// container.cpp - functions for processing container
//------------------------------------------------------------------------------

#include "container.h"

//------------------------------------------------------------------------------
// Initialisation.
void Init(container &c) {
    c.len = 0;
}

//------------------------------------------------------------------------------
// Clear the memory.
void Clear(container &c) {
    for(int i = 0; i < c.len; i++) {
        delete c.cont[i];
    }
    c.len = 0;
}

//------------------------------------------------------------------------------
// Input from file.
void In(container &c, ifstream &ifst) {
    while(!ifst.eof()) {
        if((c.cont[c.len] = In(ifst)) != 0) {
            ++c.len;
        }

    }
    if(c.len>0){
    --c.len;
    }
}

//------------------------------------------------------------------------------
// Random input.
void InRnd(container &c, int size) {
    while(c.len < size) {
        if((c.cont[c.len] = InRnd()) != nullptr) {
            c.len++;
        }
    }
}

//------------------------------------------------------------------------------
// Output to file.
void Out(container &c, ofstream &ofst) {
    ofst << "Container contains " << c.len << " elements." << endl;
    for(int i = 0; i < c.len; i++) {
        ofst << i+1 << ": ";
        Out(*(c.cont[i]), ofst);
    }
}

//------------------------------------------------------------------------------
// Sorting the container.
void ShakerSort(container &c) {
    int left = 0, right = c.len - 1;
    int flag = 1;
    while ((left < right) && flag > 0)
    {
        flag = 0;
        for (int i = left; i<right; i++)
        {
            if (c.cont[i]->quotient>c.cont[i + 1]->quotient)
            {             
                animal *temp = c.cont[i];
                c.cont[i] = c.cont[i + 1];
                c.cont[i + 1] = temp;
                flag = 1;      
            }
        }
        right--; 
        for (int i = right; i>left; i--)
        {
            if (c.cont[i - 1]->quotient>c.cont[i]->quotient)
            {          

                animal *temp = c.cont[i];
                c.cont[i] = c.cont[i - 1];
                c.cont[i - 1] = temp;
                flag = 1;   
      }
    }
    left++;
  }
}
