#pragma once
#include <string>
#include "Hero.hpp"

class taha_k : public Hero
{
private:
    
public:
    taha_k();
    void ability1() override; 
    void ability2() override;
    void special_ablity() override;
    void choice_ability(int Energy, class controller& k) override;
    ~taha_k();
};

