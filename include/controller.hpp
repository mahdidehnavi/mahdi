#pragma once
#include <string>
#include <vector>

class controller
{
private:

    int number;
    int enegry;
public:
    std::vector <int> teamA ;
    std::vector <int> teamB ;
    controller(/* args */);
    void starting_team(string & , string &);
    int Energy_level(const int , const bool);
    void show_hero();   
    void choice_herosA();
    void choice_herosB();
    void manager_step();
    int get_number();
    void end_game();
    ~controller();
};

