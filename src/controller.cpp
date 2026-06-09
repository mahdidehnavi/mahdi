#include <iostream>
#include <string>
using namespace std;
#include "controller.hpp"



controller::controller(/* args */)
{
}
string controller::get_name_team1()
{

}
string controller::get_name_team2()
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


int controller::get_number()
{
    return number;
}
void controller::end_game()
{

}
void controller::manager_step()
{

}


controller::~controller()
{
}
