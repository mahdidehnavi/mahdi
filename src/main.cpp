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

    string teamA_name;
    string teamB_name;

    cout << "Enter Team A Name : " ;
    getline(cin ,teamA_name);
    cout << "Enter Team B Name : " ;
    getline(cin ,teamB_name);
    
    controller k;
    k.starting_team(teamA_name,teamB_name);

    srand(static_cast<unsigned int>(time(0))) ;

    k.starting_team(teamA_name,teamB_name);

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
            k.choice_herosA();    
            
             k.teamA.clear();

            cout << "TEAM B"<<endl ;
            k.choice_herosB();




            int count = 15 ;
            int turn = 1 + rand() % 2;


            while (count > 0)
            {
                if (turn == 1)
                {
                    //برای کار های تیم A

                    k.start_action_teamA();


                    turn = 2;
                }
                else if (turn == 2)
                {

                    //برای کار های تیم B

                    k.start_action_teamB();









                    turn = 1;
                }
                    count--;
            
                
            }
            



 
            
        }
        else if (command == "2")
        {
            return 0;
        }
    
    
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
