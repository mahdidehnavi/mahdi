#include <iostream>
#include <string>
#include "taha_b.hpp"

using namespace std;

taha_b::taha_b() :Hero("Taha Bozorge" , "Attacker" , 500 , 4 , "<< This one was for my little brother... Now it's your turn... >>" )
{

}

void taha_b::ability1()
{

}

void taha_b::ability2()    
{

}
    
void taha_b::special_ablity()
{
    
}
  

void taha_b::choice_ability(int Energy, controller& k)
{
    cout << "<< Taha Bozorg >>\n";
    cout << " 1.BARRAGE (3 Energy)" << endl;
    cout << " 2.X-RAY (4 Energy)" << endl;
    cout << " Special = BROTHER'S REVENGE (3 Energy)";
    if(checkRage()){
        cout << " < you can use >" << endl;
    } else {
        cout << " < you can not use >" << endl;
    }
}



taha_b::~taha_b()
{
}


