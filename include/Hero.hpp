#pragma once
#include <string>

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
    virtual void ability1(); 
    virtual void ability2();
    virtual void special_ablity();
    void takedamage(const int dmg);
    void heal(const int);
    bool checkalive() const;
    bool checkRage()const;
    void apdateRageState(bool);
    virtual void choice_ability(int Energy, class controller& k);
    std::string get_name() const;
    std::string get_role() const;
    int get_hp() const;
    bool get_alive() const;
    int get_to_get_rage() const;
    std::string get_Angry_massage() const;
    ~Hero();
};

