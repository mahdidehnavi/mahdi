#pragma once
#include <string>
#include "Hero.hpp"

class dany_go : public Hero
{
private:
    
public:
    dany_go();
    void ability1() override; 
    void ability2() override;
    void special_ablity() override;
    ~dany_go();
};