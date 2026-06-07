#pragma once
#include <string>

class controller
{
private:
    int number;
public:
    controller(/* args */);
    int get_number();
    void end_game();
    void manager_step();
    ~controller();
};

