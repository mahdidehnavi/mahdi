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

    string teamA_name;
    string teamB_name;

    cout << "Enter Team A Name : " ;
    getline(cin ,teamA_name);
    cout << "Enter Team B Name : " ;
    getline(cin ,teamB_name);
    
    controller k;
    k.starting_team(teamA_name,teamB_name);

    string command ;
    
    int round = 1 ;
    while (round <= 15)
    {
        for(int i = 1 ; i >= 0 ; i--)
        {
            int energy = k.Energy_level(round , i);
            

            
        }
        
        round++;
    }
    



    return 0;
}
