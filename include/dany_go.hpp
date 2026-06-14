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
    void choice_ability(int Energy, class controller& k) override;
    ~dany_go();
};