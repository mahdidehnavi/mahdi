#pragma once
#include <string>
#include "Hero.hpp"

class amin : public Hero
{
private:
    
public:
    amin();
    void ability1(int Energy) override; 
    void ability2(int Energy) override;
    void special_ablity(int Energy) override;
    void choice_ability(int Energy , controller&) override;

    ~amin();
};