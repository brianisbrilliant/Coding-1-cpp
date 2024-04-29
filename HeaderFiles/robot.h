#include "includes.h"
#include "globalVars.h"

class robot {
public:
    string name;
    int charge;
    robotType type;

    // constructor
    robot(string n = "robot", int c = 10, robotType t = WORKER) {
        name = n;
        charge = c;
        type = t;
    }
};

