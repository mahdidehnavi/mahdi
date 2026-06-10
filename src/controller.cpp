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



void controller::choice_herosA()
{
    int k = 3;
    while (k > 0)
    {
        cout << "Enter a number for choice hero (1-7): ";
        
        int choice;
        cin >> choice;
        
        bool alreadySelected = false;
        for (int i = 0; i < teamA.size(); i++)
        {
            if (teamA[i] == choice)
            {
                alreadySelected = true;
                cout << "This hero is already selected! Choose another one.\n";
                break;
            }
        }
        
        if (choice < 1 || choice > 7)
        {
            cout << "Invalid number! Please enter a number between 1-7.\n";
            continue;
        }
        
        if (!alreadySelected)
        {
            switch (choice)
            {
                case 1:
                    teamA.push_back(1);
                    cout << "Doctor White added to teamA.\n";
                    k--;
                    break;
                    
                case 2:
                    teamA.push_back(2);
                    cout << "Taha Kuchik added to teamA.\n";
                    k--;
                    break;
                    
                case 3:
                    teamA.push_back(3);
                    cout << "Dani Golang added to teamA.\n";
                    k--;
                    break;
                    
                case 4:
                    teamA.push_back(4);
                    cout << "Amin Emini added to teamA.\n";
                    k--;
                    break;
                    
                case 5:
                    teamA.push_back(5);
                    cout << "Taha Bozorg added to teamA.\n";
                    k--;
                    break;
                    
                case 6:
                    teamA.push_back(6);
                    cout << "Pooya Kazdum added to teamA.\n";
                    k--;
                    break;
                    
                case 7:
                    teamA.push_back(7);
                    cout << "Agha Shahriar added to teamA.\n";
                    k--;
                    break;
            }
        }
    }
    
    cout << "\nTeam A heroes: ";
    for (int i = 0; i < teamA.size(); i++)
    {
        if (teamA[i]== 1)
        {
            cout << "Doctor White" << endl;
        }
        else if (teamA[i]== 2)
        {
            cout << "Taha Kuchik" << endl;
        }        
        else if (teamA[i]== 3)
        {
            cout << "Dani Golang" << endl;
        }        
        else if (teamA[i]== 4)
        {
            cout << "Amin Emini" << endl;
        }        
        else if (teamA[i]== 5)
        {
            cout << "Taha Bozorg" << endl;
        }        
        else if (teamA[i]== 6)
        {
            cout << "Pooya Kazdum" << endl;
        }        
        else if (teamA[i]== 7)
        {
            cout << "Agha Shahriar" << endl;
        }
        
        
    }
}

void controller::choice_herosB()
{
    int k = 3;
    while (k > 0)
    {
        cout << "Enter a number for choice hero (1-7): ";
        
        int choice;
        cin >> choice;
        
        bool alreadySelected = false;
        for (int i = 0; i < teamB.size(); i++)
        {
            if (teamB[i] == choice)
            {
                alreadySelected = true;
                cout << "This hero is already selected! Choose another one.\n";
                break;
            }
        }
        
        if (choice < 1 || choice > 7)
        {
            cout << "Invalid number! Please enter a number between 1-7.\n";
            continue;
        }
        
        if (!alreadySelected)
        {
            switch (choice)
            {
                case 1:
                    teamB.push_back(1);
                    cout << "Doctor White added to teamB.\n";
                    k--;
                    break;
                    
                case 2:
                    teamB.push_back(2);
                    cout << "Taha Kuchik added to teamB.\n";
                    k--;
                    break;
                    
                case 3:
                    teamB.push_back(3);
                    cout << "Dani Golang added to teamB.\n";
                    k--;
                    break;
                    
                case 4:
                    teamB.push_back(4);
                    cout << "Amin Emini added to teamB.\n";
                    k--;
                    break;
                    
                case 5:
                    teamB.push_back(5);
                    cout << "Taha Bozorg added to teamB.\n";
                    k--;
                    break;
                    
                case 6:
                    teamB.push_back(6);
                    cout << "Pooya Kazdum added to teamB.\n";
                    k--;
                    break;
                    
                case 7:
                    teamB.push_back(7);
                    cout << "Agha Shahriar added to teamB.\n";
                    k--;
                    break;
            }
        }
    }
    
    cout << "\nTeam B heroes: ";
    for (int i = 0; i < teamA.size(); i++)
    {
        if (teamB[i]== 1)
        {
            cout << "Doctor White" << endl;
        }
        else if (teamB[i]== 2)
        {
            cout << "Taha Kuchik" << endl;
        }        
        else if (teamB[i]== 3)
        {
            cout << "Dani Golang" << endl;
        }        
        else if (teamB[i]== 4)
        {
            cout << "Amin Emini" << endl;
        }        
        else if (teamB[i]== 5)
        {
            cout << "Taha Bozorg" << endl;
        }        
        else if (teamB[i]== 6)
        {
            cout << "Pooya Kazdum" << endl;
        }        
        else if (teamB[i]== 7)
        {
            cout << "Agha Shahriar" << endl;
        }
        
        
    }
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
