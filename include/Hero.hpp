#pragma once
#include <string>

class Hero
{
private:
    std::string name ;
    std::string role;
    int hp;
<<<<<<< HEAD
    bool alive;
=======
    bool elive;
>>>>>>> d8c3ad925ce924e79ebef436ec276c2a6bf75317
public:
    Hero(/* args */);
    virtual_void ability1();
    virtual void ability2();
    virtual void special_ablity();
    ~Hero();
};

