//------------------------------------------------------------------------------
// animal.cpp - contains operations for creation and processing objects.
//------------------------------------------------------------------------------

#include "animal.h"

//------------------------------------------------------------------------------
// Input from file.
animal* In(ifstream &ifst) {
    animal *sp;
    int k;
    ifst >> k;
    switch(k) {
        case 1:
            sp = new animal;
            In(sp->bird_ex, ifst);
            ifst >> sp->name;
            ifst >> sp->weight;
            sp->k = animal::BIRD;
            sp->quotient = Quotient(sp->name, sp->weight);
            return sp;
        case 2:
            sp = new animal;
            In(sp->fish_ex, ifst);
            ifst >> sp->name;
            ifst >> sp->weight;
            sp->k = animal::FISH;
            sp->quotient = Quotient(sp->name, sp->weight);
            return sp;
        case 3:
            sp = new animal;
            In(sp->beast_ex, ifst);
            ifst >> sp->name;
            ifst >> sp->weight;
            sp->k = animal::BEAST;
            sp->quotient = Quotient(sp->name, sp->weight);
            return sp;
        default:
            return NULL;
    }
}

// Random input.
animal *InRnd() {
    animal *sp;
    auto k = rand() % 3 + 1;
    switch(k) {
        case 1:
            sp = new animal;
            sp->k = animal::BIRD;
            InRnd(sp->bird_ex);
            sp->name = "Birdy"+std::to_string(Random());
            sp->weight = Random();
            sp->quotient = Quotient(sp->name, sp->weight);
            return sp;
        case 2:
            sp = new animal;
            sp->k = animal::FISH;
            InRnd(sp->fish_ex);
            sp->name = "Fishy"+std::to_string(Random());
            sp->weight = Random();
            sp->quotient = Quotient(sp->name, sp->weight);
            return sp;
        case 3:
            sp = new animal;
            sp->k = animal::BEAST;
            InRnd(sp->beast_ex);
            sp->name = "Beasty"+std::to_string(Random());
            sp->weight = Random();
            sp->quotient = Quotient(sp->name, sp->weight);
            return sp;
        default:
            return NULL;
    }
}

//------------------------------------------------------------------------------
// Writing the data to stream.
void Out(animal &s, ofstream &ofst) {
    ofst << "Name = " << s.name << ". Weight = "<<s.weight << " grams. " << "Quotient = " << s.quotient << " ";
    switch(s.k) {
        case animal::BIRD:
            Out(s.bird_ex, ofst);
            break;
        case animal::FISH:
            Out(s.fish_ex, ofst);
            break;
        case animal::BEAST:
            Out(s.beast_ex, ofst);
            break;
        default:
            ofst << "Incorrect type!" << endl;
    }
}

//------------------------------------------------------------------------------
// Counting the quotient.
double Quotient(std::string s, const int& weight) {
    int sum = 0;
    for(int i=0; i<s.size(); ++i){
        sum += s[i];
    }
    return (double)sum/weight;
}
