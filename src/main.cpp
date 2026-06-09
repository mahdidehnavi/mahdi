#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "controller.hpp"
#include "Hero.hpp"

int main()
{
    cout << "════════════════════════════════════════════════════════════════════ \n";
    cout << " welcome to the game : (SEYED KHANDEH) .                             \n";
    cout << "════════════════════════════════════════════════════════════════════  \n";
    srand(static_cast<unsigned int>(time(0))) ;

    string command ;
    while (1)
    {
        cout << "enter a number 1 or 2"<< endl;
        cout << "1  = (start game) "<< endl;
        cout << "1  = (end game) "<< endl;
        getline(cin,command);
        if (command == "1")
        {
            controller k;
            k.show_hero();
 
            
        }
        else if (command == "2")
        {
            return 0;
        }
        
        

    }
    



    return 0;
}
