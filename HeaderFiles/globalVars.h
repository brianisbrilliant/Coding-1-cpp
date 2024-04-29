#include "includes.h"
// these would all be global

// constant variables are read-only and cannot be edited.
// this is a constant array of strings named weapon names, with a size of 2
// using a collection initializer to add the values.
const string weaponNames[] = {"Sting", "Excalibur"};

enum difficulty {EASY = 1, MEDIUM, HARD};
string difficultyDescriptions[] = {"Easy", "Medium", "Hard"};

enum robotType {FIXER, TALKIE, WORKER, BRAINIAC, BRAWLER};
string robotTypeDescriptions[] = {"Fixer", "Talkie", "Worker", "Brainiac", "Brawler"};

const float earthGravity = -9.81f;

