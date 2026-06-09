#pragma once
#include <string>

class Hero
{
protected:
    std::string name ;
    std::string role;
    int Hp;
    bool alive;
    std::string Angry_massage;
public:
    Hero(std::string n, std::string ro , int h );
    virtual void ability1(); 
    virtual void ability2();
    virtual void special_ablity();
    std::string get_name() const;
    std::string get_role() const;
    int get_hp() const;
    bool get_alive() const;
    ~Hero();
};

