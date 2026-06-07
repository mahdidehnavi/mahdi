#pragma once
#include <string>

class Hero
{
private:
    std::string name ;
    std::string role;
    int hp;
    bool alive;
public:
    Hero(/* args */);
    ~Hero();
};

