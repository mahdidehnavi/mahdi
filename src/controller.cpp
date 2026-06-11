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



void controller::start_action_teamA()
{
    for (int i = 0; i < teamA.size(); i++)
    {
        if (teamA[i] == 1)  
        {
            cout << "\n========================================" << endl;
            cout << "Doctor White - Role: Healer" << endl;
            cout << "========================================" << endl;
            cout << "Ability 1: ASPIRIN - energy = 3" << endl;
            cout << "   > Heal 40 HP to a random teammate & deal 40 damage to enemy" << endl;
            cout << "Ability 2: DOPING - energy = 4" << endl;
            cout << "   > A teammate deals 20% more damage for 2 rounds" << endl;
            cout << "Special Ability: OPERATING ROOM OPERATIONS - energy = 4" << endl;
            cout << "   > Quote: \"Bring him on the table... he'll live if he's lucky\"" << endl;
            cout << "   > Revive a dead teammate (200 HP) & remove all negative effects" << endl;
            cout << "   > Cooldown: Once every 4 rounds" << endl;
        }
        else if (teamA[i] == 2)  
        {
            cout << "\n========================================" << endl;
            cout << "Taha Kuchik - Role: Healer" << endl;
            cout << "========================================" << endl;
            cout << "Ability 1: SHARP BLADE - energy = 2" << endl;
            cout << "   > Heal 20 HP to lowest HP teammate & deal 30 damage to enemy" << endl;
            cout << "Ability 2: BLOOD SERUM - energy = 4" << endl;
            cout << "   > Heal a teammate for 40 HP for 2 rounds" << endl;
            cout << "Special Ability: COMPLETE QUARANTINE - energy = 4" << endl;
            cout << "   > Quote: \"Everyone stay in your place! This area is contaminated!\"" << endl;
            cout << "   > Heal the lowest HP teammate by 200 HP" << endl;
            cout << "   > Cooldown: Once every 3 rounds" << endl;
        }
        else if (teamA[i] == 3)  
        {
            cout << "\n========================================" << endl;
            cout << "Dani Golang - Role: Defender" << endl;
            cout << "========================================" << endl;
            cout << "Ability 1: GOROUTINE LOCK - energy = 2" << endl;
            cout << "   > Deal 20 damage to an enemy" << endl;
            cout << "   > If repeated on same enemy, damage multiplies by 1.6x" << endl;
            cout << "Ability 2: ELEPHANT KILLER - energy = 4" << endl;
            cout << "   > Deal 50 damage to target & 50 damage to enemy with highest HP" << endl;
            cout << "Special Ability: FAMILY SHELTER - energy = 4" << endl;
            cout << "   > Quote: \"No one passes this line!\"" << endl;
            cout << "   > Give 250 HP shield to lowest HP teammate for 2 turns" << endl;
            cout << "   > Cooldown: Once every 4 rounds" << endl;
        }
        else if (teamA[i] == 4)  
        {
            cout << "\n========================================" << endl;
            cout << "Amin Emini - Role: Attacker" << endl;
            cout << "========================================" << endl;
            cout << "Ability 1: LAST BULLET - energy = 3" << endl;
            cout << "   > Deal 55 damage to enemy" << endl;
            cout << "   > If it kills the enemy, damage doubles (110)" << endl;
            cout << "Ability 2: FRIENDLY FIRE - energy = 3" << endl;
            cout << "   > Take 25 HP from a teammate & heal self by 75 HP" << endl;
            cout << "Special Ability: INSECURITY SCREAM - energy = 4" << endl;
            cout << "   > Quote: \"One... two... three... boom... who's left? Doesn't matter...\"" << endl;
            cout << "   > Deal 250 damage to random enemy & 30 damage to 2 teammates" << endl;
            cout << "   > Cooldown: Once every 3 rounds" << endl;
        }
        else if (teamA[i] == 5)  
        {
            cout << "\n========================================" << endl;
            cout << "Taha Bozorg - Role: Attacker" << endl;
            cout << "========================================" << endl;
            cout << "Ability 1: BARRAGE - energy = 3" << endl;
            cout << "   > Deal 30 damage to all enemies" << endl;
            cout << "Ability 2: X-RAY - energy = 4" << endl;
            cout << "   > Deal 90 damage to target & become hidden for 1 turn" << endl;
            cout << "Special Ability: BROTHER'S REVENGE - energy = 3" << endl;
            cout << "   > Quote: \"This one was for my little brother... now it's your turn...\"" << endl;
            cout << "   > Mark a random enemy, next turn takes 360 damage" << endl;
            cout << "   > If enemy HP < 360: dies, if HP > 360: takes 200 damage" << endl;
            cout << "   > Cooldown: Once every 4 rounds" << endl;
        }
        else if (teamA[i] == 6)  
        {
            cout << "\n========================================" << endl;
            cout << "Pooya Kazdum - Role: Attacker" << endl;
            cout << "========================================" << endl;
            cout << "Ability 1: DAGGER - energy = 2" << endl;
            cout << "   > Deal 40 damage to target & activate scorpions if exists" << endl;
            cout << "Ability 2: SCORPION - energy = 4" << endl;
            cout << "   > Lock a scorpion on target, deals 20 damage each turn" << endl;
            cout << "   > If dagger calls them, each scorpion deals 60 damage" << endl;
            cout << "Special Ability: SCORPION'S TAIL - energy = 5" << endl;
            cout << "   > Quote: \"Did you see my sting? No? Well... you never will...\"" << endl;
            cout << "   > Pooya hides (only takes area damage) for 3 turns" << endl;
            cout << "   > After 3 turns, deals 450 damage to random enemy & returns" << endl;
            cout << "   > Cooldown: Once every 4 rounds" << endl;
        }
        else if (teamA[i] == 7)  
        {
            cout << "\n========================================" << endl;
            cout << "Agha Shahriar - Role: Joker" << endl;
            cout << "========================================" << endl;
            cout << "Ability 1: MOCK - energy = 2" << endl;
            cout << "   > Deal 60 damage to target" << endl;
            cout << "   > 20% chance of miss" << endl;
            cout << "Ability 2: STUBBORN - energy = 4" << endl;
            cout << "   > Deal 100 damage to random enemy (not the target)" << endl;
            cout << "Special Ability: WORLD INVERSION - energy = 8" << endl;
            cout << "   > Quote: \"Good becomes bad... bad becomes good... who am I? Agha Shahriar...\"" << endl;
            cout << "   > For 2 turns, everything reverses:" << endl;
            cout << "   > Damage to enemy becomes healing" << endl;
            cout << "   > Healing to teammate becomes damage" << endl;
            cout << "   > Cooldown: Once every 4 rounds" << endl;
            cout << "   > WARNING: This can destroy your own team!" << endl;
        }
 
    }
}



void controller::start_action_teamB()
{
    for (int i = 0; i < teamB.size(); i++)
    {
        if (teamB[i] == 1)  
        {
            cout << "\n========================================" << endl;
            cout << "Doctor White - Role: Healer" << endl;
            cout << "========================================" << endl;
            cout << "Ability 1: ASPIRIN - energy = 3" << endl;
            cout << "   > Heal 40 HP to a random teammate & deal 40 damage to enemy" << endl;
            cout << "Ability 2: DOPING - energy = 4" << endl;
            cout << "   > A teammate deals 20% more damage for 2 rounds" << endl;
            cout << "Special Ability: OPERATING ROOM OPERATIONS - energy = 4" << endl;
            cout << "   > Quote: \"Bring him on the table... he'll live if he's lucky\"" << endl;
            cout << "   > Revive a dead teammate (200 HP) & remove all negative effects" << endl;
            cout << "   > Cooldown: Once every 4 rounds" << endl;
        }
        else if (teamB[i] == 2)  
        {
            cout << "\n========================================" << endl;
            cout << "Taha Kuchik - Role: Healer" << endl;
            cout << "========================================" << endl;
            cout << "Ability 1: SHARP BLADE - energy = 2" << endl;
            cout << "   > Heal 20 HP to lowest HP teammate & deal 30 damage to enemy" << endl;
            cout << "Ability 2: BLOOD SERUM - energy = 4" << endl;
            cout << "   > Heal a teammate for 40 HP for 2 rounds" << endl;
            cout << "Special Ability: COMPLETE QUARANTINE - energy = 4" << endl;
            cout << "   > Quote: \"Everyone stay in your place! This area is contaminated!\"" << endl;
            cout << "   > Heal the lowest HP teammate by 200 HP" << endl;
            cout << "   > Cooldown: Once every 3 rounds" << endl;
        }
        else if (teamB[i] == 3)  
        {
            cout << "\n========================================" << endl;
            cout << "Dani Golang - Role: Defender" << endl;
            cout << "========================================" << endl;
            cout << "Ability 1: GOROUTINE LOCK - energy = 2" << endl;
            cout << "   > Deal 20 damage to an enemy" << endl;
            cout << "   > If repeated on same enemy, damage multiplies by 1.6x" << endl;
            cout << "Ability 2: ELEPHANT KILLER - energy = 4" << endl;
            cout << "   > Deal 50 damage to target & 50 damage to enemy with highest HP" << endl;
            cout << "Special Ability: FAMILY SHELTER - energy = 4" << endl;
            cout << "   > Quote: \"No one passes this line!\"" << endl;
            cout << "   > Give 250 HP shield to lowest HP teammate for 2 turns" << endl;
            cout << "   > Cooldown: Once every 4 rounds" << endl;
        }
        else if (teamB[i] == 4)  
        {
            cout << "\n========================================" << endl;
            cout << "Amin Emini - Role: Attacker" << endl;
            cout << "========================================" << endl;
            cout << "Ability 1: LAST BULLET - energy = 3" << endl;
            cout << "   > Deal 55 damage to enemy" << endl;
            cout << "   > If it kills the enemy, damage doubles (110)" << endl;
            cout << "Ability 2: FRIENDLY FIRE - energy = 3" << endl;
            cout << "   > Take 25 HP from a teammate & heal self by 75 HP" << endl;
            cout << "Special Ability: INSECURITY SCREAM - energy = 4" << endl;
            cout << "   > Quote: \"One... two... three... boom... who's left? Doesn't matter...\"" << endl;
            cout << "   > Deal 250 damage to random enemy & 30 damage to 2 teammates" << endl;
            cout << "   > Cooldown: Once every 3 rounds" << endl;
        }
        else if (teamB[i] == 5)  
        {
            cout << "\n========================================" << endl;
            cout << "Taha Bozorg - Role: Attacker" << endl;
            cout << "========================================" << endl;
            cout << "Ability 1: BARRAGE - energy = 3" << endl;
            cout << "   > Deal 30 damage to all enemies" << endl;
            cout << "Ability 2: X-RAY - energy = 4" << endl;
            cout << "   > Deal 90 damage to target & become hidden for 1 turn" << endl;
            cout << "Special Ability: BROTHER'S REVENGE - energy = 3" << endl;
            cout << "   > Quote: \"This one was for my little brother... now it's your turn...\"" << endl;
            cout << "   > Mark a random enemy, next turn takes 360 damage" << endl;
            cout << "   > If enemy HP < 360: dies, if HP > 360: takes 200 damage" << endl;
            cout << "   > Cooldown: Once every 4 rounds" << endl;
        }
        else if (teamB[i] == 6)  
        {
            cout << "\n========================================" << endl;
            cout << "Pooya Kazdum - Role: Attacker" << endl;
            cout << "========================================" << endl;
            cout << "Ability 1: DAGGER - energy = 2" << endl;
            cout << "   > Deal 40 damage to target & activate scorpions if exists" << endl;
            cout << "Ability 2: SCORPION - energy = 4" << endl;
            cout << "   > Lock a scorpion on target, deals 20 damage each turn" << endl;
            cout << "   > If dagger calls them, each scorpion deals 60 damage" << endl;
            cout << "Special Ability: SCORPION'S TAIL - energy = 5" << endl;
            cout << "   > Quote: \"Did you see my sting? No? Well... you never will...\"" << endl;
            cout << "   > Pooya hides (only takes area damage) for 3 turns" << endl;
            cout << "   > After 3 turns, deals 450 damage to random enemy & returns" << endl;
            cout << "   > Cooldown: Once every 4 rounds" << endl;
        }
        else if (teamB[i] == 7)  
        {
            cout << "\n========================================" << endl;
            cout << "Agha Shahriar - Role: Joker" << endl;
            cout << "========================================" << endl;
            cout << "Ability 1: MOCK - energy = 2" << endl;
            cout << "   > Deal 60 damage to target" << endl;
            cout << "   > 20% chance of miss" << endl;
            cout << "Ability 2: STUBBORN - energy = 4" << endl;
            cout << "   > Deal 100 damage to random enemy (not the target)" << endl;
            cout << "Special Ability: WORLD INVERSION - energy = 8" << endl;
            cout << "   > Quote: \"Good becomes bad... bad becomes good... who am I? Agha Shahriar...\"" << endl;
            cout << "   > For 2 turns, everything reverses:" << endl;
            cout << "   > Damage to enemy becomes healing" << endl;
            cout << "   > Healing to teammate becomes damage" << endl;
            cout << "   > Cooldown: Once every 4 rounds" << endl;
            cout << "   > WARNING: This can destroy your own team!" << endl;
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
