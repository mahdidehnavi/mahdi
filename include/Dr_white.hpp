#pragma once
#include <string>
#include "Hero.hpp"

class Dr_white : public Hero
{
private:
    
public:
    Dr_white();
    void ability1() override; 
    void ability2() override;
    void special_ablity() override;
    void choice_ability(int Energy, class controller& k) override;
    ~Dr_white();
};