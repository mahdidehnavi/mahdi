#pragma once
#include <string>
#include "Hero.hpp"

class amin : public Hero
{
private:
    
public:
    amin();
    void ability1() override; 
    void ability2() override;
    void special_ablity() override;
    void choice_ability(int Energy, class controller& k) override;
    ~amin();
};