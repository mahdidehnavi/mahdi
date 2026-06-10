#pragma once
#include <string>
#include <vector>

class controller
{
private:

    int number;
public:
    std::vector <std::string> team ;
    controller(/* args */);
    int get_number();
    void show_hero();   
    void choice_heros();
    void end_game();
    void manager_step();
    ~controller();
};

