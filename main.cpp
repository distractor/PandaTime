#include <iostream>
#include "source/PTOutput.h"
#include "source/PTTimer.h"
#include "source/PTData.h"

using namespace std;


int main() {
    PTOutput Out;           // Initialize Out and print welcome screen

    PTTimer Timer;          // Initialize timer

    getchar();              // Waiting for user to stop the timer with enter

    Timer.stopTimer();
    Timer.printTotalUpTime();

    PTData Data(Timer);
    
    string filePath = "/home/mitja/Documents/PandaTime";
    Data.setWorkingDir(filePath);
    Data.saveToFile();

    return 0;
}