#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "controller.hpp"
#include "Hero.hpp"

int main()
{
    cout << "════════════════════════════════════════════════════════════════════ \n";
    cout << " welcome to the game : (SEYED KHANDEH) .                             \n";
    cout << "════════════════════════════════════════════════════════════════════  \n\n";


    string teamA;
    string teamB;

    cout << "Enter Team A Name : " ;
    getline(cin ,teamA);
    cout << "Enter Team B Name : " ;
    getline(cin ,teamB);
    
    controller k;
    k.starting_team(teamA,teamB);

    string command ;
    int number = 0 ;
    while (number < 15)
    {
        
        
    }
    



    return 0;
}
