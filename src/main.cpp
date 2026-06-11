#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

#include "controller.hpp"
#include "Hero.hpp"

int main()
{
    cout << "════════════════════════════════════════════════════════════════════ \n";
    cout << " welcome to the game : (SEYED KHANDEH) .                             \n";
    cout << "════════════════════════════════════════════════════════════════════  \n";
    
    srand(static_cast<unsigned int>(time(0))) ;

    string teamA_name;
    string teamB_name;

    cout << "Enter Team A Name : " ;
    getline(cin ,teamA_name);
    cout << "Enter Team B Name : " ;
    getline(cin ,teamB_name);
    
    controller k;
    k.starting_team(teamA_name,teamB_name);

    string command ;

        cout << "enter a number 1 or 2"<< endl;
        cout << "1  = (start game) "<< endl;
        cout << "2  = (end game) "<< endl;
        getline(cin,command);
        if (command == "1")
        {
            controller k;
            k.show_hero();
            cout << "TEAM A"<<endl ;
            k.choice_herosA();    
            
            //k.team.clear();
            
            k.show_hero();
            cout << "TEAM B"<<endl ;
            k.choice_herosB();
            
            int count = 1 ;
            while (count <= 15)
            {
                for(int i = 1 ; i >= 0 ; i--)
                {
                    string team_name;
                    if(i == 1){
                        team_name = teamA_name;
                    } else {
                        team_name = teamB_name;
                    }
                    int energy = k.Energy_level(count , i);
        
                    
                }
                
                count++;
            }
 
            
        }
        else if (command == "2")
        {
            return 0;
        }
    
    

    return 0;
}
