#pragma once
#include <string>

class Hero
{
private:
    std::string name ;
    std::string role;
    int hp;
    bool alive;
protected:
    Hero(/* args */);
    virtual void ability1(); 
    virtual void ability2();
    virtual void special_ablity();
    ~Hero();
};

