#include <iostream>
#include <string>
#include "taha_k.hpp"

using namespace std;

taha_k::taha_k() :Hero("Taha kochike" , "Healer" , 500 , 3 , "<< All in their place! This area is contaminated! >>" )
{
    
}

void taha_k::ability1(int Energy) 
{

}

void taha_k::ability2(int Energy) 
{

}

void taha_k::special_ablity(int Energy) 
{

}

void taha_k::choice_ability(int Energy , controller& k) 
{
    cout << "<< Taha Kuchik >>\n";
    cout << " 1.SHARP BLADE (2 Energy)" << endl;
    cout << " 2.BLOOD SERUM (4 energy)" << endl;
    cout << " Special = COMPLETE QUARANTINE (4 energy)";
    if(checkRage()){
        cout << "< you can use >" << endl;
    } else {
        cout << "< you can not use >" << endl;
    }
}

taha_k::~taha_k()
{
}

