#include <iostream>
#include <string>
#include "Hero.hpp"

using namespace std;

Hero::Hero(/* args */)
{

}

void Hero::ability1()
{

}
void Hero::ability2()
{

}
void Hero::special_ablity()
{

}

string Hero::get_name() const
{
    return name;
}

string Hero::get_role() const
{
    return role;
}
    
int Hero::get_hp() const
{
    return hp;
}
    
bool Hero::get_alive() const
{
    return alive;
}


Hero::~Hero()
{
}


