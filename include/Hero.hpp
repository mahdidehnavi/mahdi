#pragma once
#include <string>

class Hero
{
protected:
    std::string name ;
    std::string role;
    int Hp;
    std::string Angry_massage;
    int rageThreshold;
    int to_get_rage;
    bool alive;
public:
    Hero(std::string n, std::string ro , int h , int rage , std::string AngMas);
    virtual void ability1(); 
    virtual void ability2();
    virtual void special_ablity();
    bool checkRage();
    void apdateRageState(bool);
    std::string get_name() const;
    std::string get_role() const;
    int get_hp() const;
    bool get_alive() const;
    ~Hero();
};

