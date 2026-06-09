#pragma once
#include <string>

class controller
{
private:
    int number;
public:
    controller(/* args */);
    int get_number();
    void starting_team(string & , string &);
    void manager_step();
    void end_game();
    ~controller();
};

