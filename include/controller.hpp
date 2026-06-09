#pragma once
#include <string>

class controller
{
private:
    std::string name_team1;
    std::string name_team2;
    int number;
public:
    controller(/* args */);
    int get_number();
    string get_name_team1();
    string get_name_team2();
    void show_hero();    
    void end_game();
    void manager_step();
    ~controller();
};

