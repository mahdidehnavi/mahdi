#include <iostream>
#include <string>
#include "dany_go.hpp"

using namespace std;

dany_go::dany_go() :Hero("Danny Golang" , "Defender" , 600 , 4 , "<< No one crosses this line! >>" )
{

}

void dany_go::ability1()
{

}

void dany_go::ability2()
{

}

void dany_go::special_ablity()
{

}

void dany_go::choice_ability(int Energy, controller& k)
{
    cout << "<< Dani Golang >>\n";
    cout << " 1.GOROUTINE LOCK (2 Energy)" << endl;
    cout << " 2.ELEPHANT KILLER (4 Energy)" << endl;
    cout << " Special = FAMILY SHELTER (4 Energy)";
    if(checkRage()){
        cout << " < you can use >" << endl;
    } else {
        cout << " < you can not use >" << endl;
    }
}


dany_go::~dany_go()
{
}


