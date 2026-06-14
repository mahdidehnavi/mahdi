#pragma once
#include <string>
#include "Hero.hpp"

class Dr_white : public Hero
{
private:
    
public:
    Dr_white();
    void ability1(int Energy) override; 
    void ability2(int Energy) override;
    void special_ablity(int Energy) override;
    void choice_ability(int Energy , controller&) override;
    ~Dr_white();
};