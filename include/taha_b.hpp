#pragma once
#include <string>
#include "Hero.hpp"

class taha_b : public Hero
{
private:
    
public:
    taha_b();
    void ability1() override; 
    void ability2() override;
    void special_ablity() override;
    void choice_ability(int Energy, class controller& k) override;
    ~taha_b();
};