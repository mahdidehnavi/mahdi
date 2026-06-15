#pragma once
#include <string>
#include "Hero.hpp"

class taha_b : public Hero
{
private:
    
public:
    taha_b();
    void ability1(int Energy) override; 
    void ability2(int Energy) override;
    void special_ablity(int Energy) override;
    void choice_ability() override;
    ~taha_b();
};