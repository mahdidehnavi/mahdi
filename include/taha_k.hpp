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
    ~taha_k();
};

