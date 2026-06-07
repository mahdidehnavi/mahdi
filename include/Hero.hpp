#pragma once
#include <string>

class Hero
{
protected:
    std::string name ;
    std::string role;
    int hp;
    bool alive;
public:
    Hero(/* args */);
    virtual void ability1(); 
    virtual void ability2();
    virtual void special_ablity();
    string get_name() const;
    string get_role() const;
    int get_hp() const;
    bool get_alive() const;
    ~Hero();
};

