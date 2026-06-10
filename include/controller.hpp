#pragma once
#include <string>

class controller
{
private:
    int number;
    int angry;
public:
    controller(/* args */);
    void end_game();
    void starting_team(string & , string &);
    int Energy_level(const int , const bool);
    void manager_step();
    int get_number();
    ~controller();
};

