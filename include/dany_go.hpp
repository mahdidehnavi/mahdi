#pragma once
#include <string>
#include "Hero.hpp"

class dany_go : public Hero
{
private:
    
public:
    dany_go();
    void ability1(int Energy) override; 
    void ability2(int Energy) override;
    void special_ablity(int Energy) override;
    void choice_ability() override;
    ~dany_go();
};