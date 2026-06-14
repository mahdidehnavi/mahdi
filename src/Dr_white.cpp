#include <iostream>
#include <string>
#include "Dr_white.hpp"

using namespace std;

Dr_white::Dr_white() :Hero("Doctor White" , "Healer" , 550 , 4 , "<< Bring it to the table... it'll survive if you're lucky. >>" )
{

}

void Dr_white::ability1()
{

} 
    
void Dr_white::ability2()
{

}
    
void Dr_white::special_ablity()
{
    
}
    


void Dr_white::choice_ability(int Energy, controller& k)
{
    cout << "<< Doctor White >>\n";
    cout << " 1.ASPIRIN (3 Energy)" << endl;
    cout << " 2.DOPING (4 Energy)" << endl;
    cout << " Special = OPERATING ROOM OPERATIONS (4 Energy)";
    if(checkRage()){
        cout << " < you can use >" << endl;
    } else {
        cout << " < you can not use >" << endl;
    }
}

    
Dr_white::~Dr_white()
{
}
