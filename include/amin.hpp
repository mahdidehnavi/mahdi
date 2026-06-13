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
    ~amin();
};