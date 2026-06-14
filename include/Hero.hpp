#pragma once
#include <string>
class controller;

class Hero
{
protected:
    std::string name ;
    std::string role;
    int Hp;
    int MaxHp;
    std::string Angry_massage;
    int rageThreshold;
    int to_get_rage;
public:
    Hero(std::string n, std::string ro , int h , int rage , std::string AngMas);
    virtual void ability1(int Energy) = 0; 
    virtual void ability2(int Energy) = 0;
    virtual void special_ablity(int Energy) = 0;
    virtual void choice_ability(int Energy , controller&) = 0;
    void takedamage(const int dmg);
    void heal(const int);
    bool checkalive() const;
    bool checkRage()const;
    void apdateRageState(bool);
    std::string get_name() const;
    std::string get_role() const;
    int get_hp() const;
    int get_to_get_rage() const;
    std::string get_Angry_massage() const;
    ~Hero();
};

