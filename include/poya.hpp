#pragma once
#include <string>
#include "Hero.hpp"

class poya : public Hero
{
private:
    
public:
    poya();
    void ability1(int Energy) override; 
    void ability2(int Energy) override;
    void special_ablity(int Energy) override;
    void choice_ability() override;
    ~poya();
};