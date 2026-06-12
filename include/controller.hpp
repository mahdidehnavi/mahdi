#pragma once
#include <string>
#include <vector>

class controller
{
private:

    int number;
    int enegry;
public:
    std::vector <int> teamA ;
    std::vector <int> teamB ;
    controller(/* args */);
    int Energy_level(const int , const bool);
    void show_hero();   
    void choice_heros(std::vector<int>& team, const std::string& teamName);
    void start_action(std::vector<int>& team, const std::string& teamName);
    void choice_ability(std::vector<int>& team, const std::string& teamName, int& Energy);
    void end_game();
    int get_number();
    void end_game();
    ~controller();
};

