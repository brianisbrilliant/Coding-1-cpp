#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    cout << "Hello World!\n";

    // the player is going on an adventure (cout)
    // they have an amount of health (10) and gold (0)
    // they are asked "do you want to go adventuring?\n";
    // if yes, they have an ENCOUNTER where they are attacked
        // random numbers are rolled for attack and block
        // if defend is greater or equal, no health is lost
            // and a random amount of gold is added to the player.
        // else, the amount of attack is subtracted from health
    // keep looping while player is not dead, and wants to keep playing.


    // what variables do you need?
    // health = 10, gold, attack, block, input

    do {
        cout << "Do you want to keep adventuring?\n";
        string input;
        cin >> input;
    
        if(input == "yes" || input == "Yes") {
            // start the ENCOUNTER
            cout << "An enemy approaches!!!\n";
            // generate block and attack
            // 
        }
        else {
            // end the loop.
            break;
        }
    } while(true);

    cout << "Your adventure is overrrrrrr.\n";

    
    
}
