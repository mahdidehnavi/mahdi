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
    ~poya();
};