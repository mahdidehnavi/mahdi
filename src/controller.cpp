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
