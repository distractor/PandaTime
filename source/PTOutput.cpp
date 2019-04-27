/****************************************************
 ****************************************************
 * File includes any sort of output:
 * - console output
 * - things saved to file
 *
 ****************************************************
 ****************************************************
 */

#include <iostream>
#include <ctime>
#include "PTOutput.h"

using namespace std;

PTOutput::PTOutput() {
    welcomeScreen();
}

// prints n occurences of a given char
void PTOutput::printSymbol(int n, char Symbol, bool endLine = true) const {
    for (int i = 0; i < n; i++) {
        cout << Symbol;
    }

    if (endLine){
        cout << endl;
    }

}

// prints welcome screen on start up
void PTOutput::welcomeScreen() const {
    printSymbol(50, '#');
    printSymbol(50, '#');
    printSymbol(10, '#', false); cout << "                              "; printSymbol(10, '#');
    printSymbol(10, '#', false); cout << "    PandaTime, Version 0.1    "; printSymbol(10, '#');
    printSymbol(10, '#', false); cout << "                              "; printSymbol(10, '#');
    printSymbol(50, '#');
    printSymbol(50, '#');
}