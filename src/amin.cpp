#include <iostream>
#include <string>
#include "amin.hpp"

using namespace std;

amin::amin() :Hero("Amin emini" , "Attacker" , 500 , 3 , "<< One.. Two.. Three.. BOOM... who's left? It doesn't matter >>" )
{

}

void amin::ability1(int Energy)
{

}
    
void amin::ability2(int Energy)
{

}

void amin::special_ablity(int Energy)
{
    
}

void amin::choice_ability(int Energy , controller& k) 
{
    cout << "<< Amin Emini >>\n";
    cout << " 1.LAST BULLET (3 Energy)" << endl;
    cout << " 2.FRIENDLY FIRE (3 energy)" << endl;
    cout << " Special = INSECURITY SCREAM (4 energy)";
    if(checkRage()){
        cout << "< you can use >" << endl;
    } else {
        cout << "< you can not use >" << endl;
    }

}

amin::~amin()
{
}

