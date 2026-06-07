#pragma once
#include <string>

class Hero
{
private:
    std::string name ;
    std::string role;
    int hp;
    bool elive;
public:
    Hero(/* args */);
    virtual_void ability1();
    virtual void ability2();
    virtual void special_ablity();
    ~Hero();
};

