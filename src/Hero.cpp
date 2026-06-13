#include <iostream>
#include <string>
#include "Hero.hpp"

using namespace std;

Hero::Hero(string n, string ro , int h ,int rage , string AngMas )
{
    name = n;
    role = ro;
    Hp = h;
    MaxHp = h;
    rageThreshold = rage; 
    to_get_rage = rage;
    Angry_massage = AngMas;
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

void Hero::takedamage(const int dmg)
{
    Hp -= dmg;
    if(Hp < 0) Hp = 0;
}

bool Hero::checkalive()
{
    if(Hp == 0)
    {
        return false;
    } 
    else {
        return true;
    }
}

bool Hero::checkRage() //برای چک کردن اینکه میشه از خشم استفاده کرد یانه
{
    if(to_get_rage == 0){
        return true;
    } else {
        return false;
    }
}

void Hero::apdateRageState(bool use) //برای آپدیت وضعیت خشم
{
    if(use && to_get_rage == 0){
        to_get_rage = rageThreshold;
    } else {
        if(to_get_rage != 0){
            to_get_rage--;
        }
    }

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
    return Hp;
}

int Hero::get_to_get_rage() const
{
    return to_get_rage;
}

string Hero::get_Angry_massage() const
{
    return Angry_massage;
}


Hero::~Hero()
{
}


