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
            Hero* ptrTeamA[3];
            Hero* ptrTeamB[3];
            
            k.show_hero();
            cout << teamA_name << endl ;
            k.teamA.clear();
            k.choice_heros(k.teamA, teamA_name , ptrTeamA);    
                        
            k.show_hero();
            cout << teamB_name << endl ;
            k.teamB.clear();
            k.choice_heros(k.teamB, teamB_name , ptrTeamB);
            
            
            //int turn = 1 + rand() % 2;
            int round = 1;
            
            while (round <= 15)
            {
                //     if (turn == 1)
                //     {
                    //         k.start_action(k.teamA, teamA_name);
            //         turn = 2;
            //     }
            //     else if (turn == 2)
            //     {
                //         k.start_action(k.teamB, teamB_name);
                //         turn = 1;
                //     }
                //     count--;
                string team_name;
                Hero* ptTeam[3];
                int namber;
                vector <int> team;
                
                for(int j = 1 ; j >= 0 ; j--)
                {
                    if(j == 1)
                    {
                        team_name = teamA_name;
                        for(int i = 0 ; i < 3 ; i++)
                        {
                            ptTeam[i] = ptrTeamA[i];    
                            team.push_back(k.teamA[i]);                        
                        }
                        
                    } 
                    else 
                    {
                        team_name = teamB_name;
                        for(int i = 0 ; i < 3 ; i++)
                        {
                            ptTeam[i] = ptrTeamB[i];
                            team.push_back(k.teamB[i]);          
                        }
                        
                    }   
                    int energy = k.Energy_level(round , j);
                    
                    int use = false;
                    while(energy > 0)
                    {
                        cout << team_name << endl;
                        for(int i = 0 ; i < 3 ; i++){
                            ptTeam[i]->choice_ability( energy, k);
                        }

                        cin >> use;






                    }

                    for(int i = 0 ; i < 3 ; i++){
                        ptTeam[i]->apdateRageState(use);
                    }


                }
                
                round++;
            }
        }

        else if (command == "2")
        {
            return 0;
        }
    
    

    return 0;
}
