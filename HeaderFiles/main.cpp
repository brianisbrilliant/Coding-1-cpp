// headers are a great way to organize your code.


#include "includes.h"            // has all of the other includes. bloaty.
#include "functions.h"            // referencing our header file.
#include "robot.h"
#include <fstream>            // for input and output of files.

using namespace std;

// global friend function which can access all of the robot object's members
// overloads the << operator so you can send a critter object to cout.
ostream& operator<<(ostream& os, const robot& robot) {
    os << robot.name << "," << robot.charge << "\n";
    return os;
}

int main() {
    float pi = 3.1415f;
    robot bob("Bob", 5);

    cout << bob << "\n";
    
    ofstream file;
    file.open("file.txt");
    file << "Here is a line of text.\n";
    file << pi << "\n";
    // file << bob;    
    file.close();

    // a new variable with the type "ifstream" named "readFromFile"
    ifstream readFromFile ("names.txt");
    string line;
    vector<string> names;

    
    if(readFromFile.is_open()) {
        while (getline(readFromFile, line))  // keep looping as long as there are lines
        {
            cout << line << '\n';
            names.push_back(line);
        }
        readFromFile.close();
    } else {
        cout << "Could not read from file.\n";
    }

    if(names.size() > 0) {
        cout << "The first name in names is " << names[0] << ".\n";
    }
    
    


    
    cout << "Hello World!\n";
    Hello();                        // calling a function from our 
                                        // header file.

    // can you build a header file named "classes.h" with a robot class inside
    // and then include it in this main.cpp file, to create a robot here.

    robot artoo;
    artoo.name = "R2-D2";

    cout << "Say hello to " << artoo.name << ".\n";

    cout << "here is artoo's name tripled: " << triple(artoo.name) << ".\n";
}