#pragma once
#include <string>
#include "Hero.hpp"

class taha_k : public Hero
{
private:
    
public:
    taha_k();
    void ability1(int Energy) override; 
    void ability2(int Energy) override;
    void special_ablity(int Energy) override;
    void choice_ability(int Energy , controller&) override;
    ~taha_k();
};

