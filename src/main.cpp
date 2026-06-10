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


    string teamA;
    string teamB;

    cout << "Enter Team A Name : " ;
    getline(cin ,teamA);
    cout << "Enter Team B Name : " ;
    getline(cin ,teamB);
    
    controller k;
    k.starting_team(teamA,teamB);

    cout << "════════════════════════════════════════════════════════════════════  \n";
    srand(static_cast<unsigned int>(time(0))) ;


    string command ;

        cout << "enter a number 1 or 2"<< endl;
        cout << "1  = (start game) "<< endl;
        cout << "1  = (end game) "<< endl;
        getline(cin,command);
        if (command == "1")
        {
            controller k;
            k.show_hero();
            cout << "TEAM A"<<endl ;
            k.choice_heros();    
            
             k.team.clear();

            cout << "TEAM B"<<endl ;
            k.choice_heros();
            int count = 15 ;
            int turn = 1 ;
            while (count > 0)
            {
                if (turn == 1)
                {
                    //برای کار های تیم A




                    count--;
                    turn = 2;
                }
                else if (turn == 2)
                {

                    //برای کار های تیم B









                    count++;
                    turn = 2;
                }
                
                
            }
            



 
            
        }
        else if (command == "2")
        {
            return 0;
        }
    

    return 0;
}
