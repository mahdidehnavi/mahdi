#include <iostream>
#include <string>
#include "poya.hpp"

using namespace std;

poya::poya() :Hero("poya kazhdom" , "Attacker" , 500 , 3 , "<< Did you see my bite? No? Well... you'll never see it... >>" )
{

}

void poya::ability1()
{

} 
    
void poya::ability2()
{

}
    
void poya::special_ablity()
{
    
}
    


void  poya::choice_ability(int Energy, controller& k)
{
    cout << "<< Pooya Kazdum >>\n";
    cout << " 1.DAGGER (2 Energy)" << endl;
    cout << " 2.SCORPION (4 Energy)" << endl;
    cout << " Special = SCORPION'S TAIL (5 Energy)";
    if(checkRage()){
        cout << " < you can use >" << endl;
    } else {
        cout << " < you can not use >" << endl;
    }
}

poya::~poya()
{
}

