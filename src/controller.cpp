#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
#include "controller.hpp"



controller::controller(/* args */)
{
}

int controller::get_number()
{
    return number;
}

void controller::starting_team(string & A, string &B)
{
    srand(time(nullptr));
    int random = rand() % 2;
    if(random == 0)
    {
        cout << "\n<< team " << A << " start the game >>" << endl;
    } else {
        string help = A;
        A = B;
        B = help;
        cout << "\n<< team " << A << " start the game >>" << endl;
    }
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
