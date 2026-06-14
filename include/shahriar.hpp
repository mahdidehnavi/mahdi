#pragma once
#include <string>
#include "Hero.hpp"

class shahriar : public Hero
{
private:
    
public:
    shahriar();
    void ability1(int Energy) override; 
    void ability2(int Energy) override;
    void special_ablity(int Energy) override;
    void choice_ability(int Energy , controller&) override;
    ~shahriar();
};