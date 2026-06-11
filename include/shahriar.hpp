#pragma once
#include <string>
#include "Hero.hpp"

class shahriar : public Hero
{
private:
    
public:
    shahriar();
    void ability1() override; 
    void ability2() override;
    void special_ablity() override;
    ~shahriar();
};