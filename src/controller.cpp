#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
#include "controller.hpp"



controller::controller(/* args */)
{
}



void controller::show_hero()
{
    cout << "\n                       heroes                            \n";
    cout << "┌────┬─────────────────────┬──────────┬──────┬\n";
    cout << "│ No │ Name                │ Role     │ HP   │\n";
    cout << "├────┼─────────────────────┼──────────┼──────┤\n";
    cout << "│ 1  │ Doctor White        │ Healer   │ 550  │\n";
    cout << "│ 2  │ Taha Kuchik         │ Healer   │ 500  │\n";
    cout << "│ 3  │ Dani Golang         │ Defender │ 600  │\n";
    cout << "│ 4  │ Amin Emini          │ Attacker │ 500  │\n";
    cout << "│ 5  │ Taha Bozorg         │ Attacker │ 500  │\n";
    cout << "│ 6  │ Pooya Kazdum        │ Attacker │ 550  │\n";
    cout << "│ 7  │ Agha Shahriar       │ Joker    │ 500  │\n";
    cout << "└────┴─────────────────────┴──────────┴──────┘\n";
}

void controller::choice_heros()
{
    int k = 3;
    int selectedCount = 0;
    while (k > 0)
    {
        cout << "Enter a number for choice hero (1-7): ";
        
        int choice;
        cin >> choice;
        
        switch (choice)
        {
            case 1:
                team.push_back("Doctor White");
                cout << " Doctor White :add to the team.\n";
                k--;
                selectedCount++;
                break;
                
            case 2:
                team.push_back("Taha Kuchik");
                cout << " Taha Kuchik :add to the team.\n";
                k--;
                selectedCount++;
                break;
                
            case 3:
                team.push_back("Dani Golang");
                cout << " Dani Golang :add to the team.\n";
                k--;
                selectedCount++;
                break;
                
            case 4:
                team.push_back("Amin Emini");
                cout << " Amin Emini :add to the team.\n";
                k--;
                selectedCount++;
                break;
                
            case 5:
                team.push_back("Taha Bozorg");
                cout << " Taha Bozorg :add to the team.\n";
                k--;
                selectedCount++;
                break;
                
            case 6:
                team.push_back("Pooya Kazdum");
                cout << " Pooya Kazdum :add to the team.\n";
                k--;
                selectedCount++;
                break;
                
            case 7:
                team.push_back("Agha Shahriar");
                cout << " Agha Shahriar :add to the team.\n";
                k--;
                selectedCount++;
                break;

        }
    }
    
    cout << "heroes\n";
    for (int i = 0; i < team.size(); i++)
    {
        cout << "hero" << i+1 << ": " << team[i] << endl;
    }
    cout << "════════════════════════════════════════════════════════════════════\n";
}

int controller::get_number()
{
    return number;
}

void controller::starting_team(string & A, string &B) //تیم شروع کننده
{
    srand(time(nullptr));
    int random = rand() % 2;
    if(random == 0)
    {
        cout << "\n<< " << A << " Team goes first! >>" << endl;
    } else {
        string help = A;
        A = B;
        B = help;
        cout << "\n<< " << A << " Team goes first! >>" << endl;
    }
}

int controller::Energy_level(const int round ,const bool t)  //میزان انرژي 
{
    if(t) 
    {
        switch (round)
        {
            case 1:
                return 5;

            case 2:
                return 8;

            case 3:
                return 9;

            default: 
                return 10;
        }
        
    } else {
        switch (round)
        {
            case 1:
                return 8;

            case 2:
                return 9;

            default: 
                return 10;
        }

    }
}

void controller::manager_step()
{

}

void controller::end_game()
{

}


controller::~controller()
{
}
