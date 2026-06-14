#include <iostream>
#include <string>
#include "amin.hpp"

using namespace std;

amin::amin() :Hero("Amin emini" , "Attacker" , 500 , 3 , "<< One.. Two.. Three.. BOOM... who's left? It doesn't matter >>" )
{

}

void amin::ability1()
{

}
    
void amin::ability2()
{

}

void amin::special_ablity()
{
    
}


void amin::choice_ability(int Energy, controller& k)
{
    cout << "<< Amin Emini >>\n";
    cout << " 1.LAST BULLET (3 Energy)" << endl;
    cout << " 2.FRIENDLY FIRE (3 Energy)" << endl;
    cout << " Special = INSECURITY SCREAM (4 Energy)";
    if(checkRage()){
        cout << " < you can use >" << endl;
    } else {
        cout << " < you can not use >" << endl;
    }
}


amin::~amin()
{
}

