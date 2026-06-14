#include <iostream>
#include <string>
#include "shahriar.hpp"

using namespace std;

shahriar::shahriar() :Hero("Mr shahriar" , "Joker" , 500 , 4 , "<< Good becomes bad... bad becomes good...\nWho am I? mr shahriar... repeat it out loud,learn... >>" )
{

}

void shahriar::ability1()
{

}

void shahriar::ability2()
{

}
    
void shahriar::special_ablity()
{

}


void shahriar::choice_ability(int Energy, controller& k)
{
    cout << "<< Agha Shahriar >>\n";
    cout << " 1.MOCK (2 Energy)" << endl;
    cout << " 2.STUBBORN (4 Energy)" << endl;
    cout << " Special = WORLD INVERSION (8 Energy)";
    if(checkRage()){
        cout << " < you can use >" << endl;
    } else {
        cout << " < you can not use >" << endl;
    }
}

    
shahriar::~shahriar()
{
}


