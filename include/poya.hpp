#pragma once
#include <string>
#include "Hero.hpp"

class poya : public Hero
{
private:
    
public:
    poya();
    void ability1() override; 
    void ability2() override;
    void special_ablity() override;
    void choice_ability(int Energy, class controller& k) override;
    ~poya();
};