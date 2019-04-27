#ifndef PANDATIME_PTDATA_H
#define PANDATIME_PTDATA_H

#include "PTTimer.h"
#include <string>

using namespace std;

class PTData {
private:
    const PTTimer* _Timer;
    string filePath, fileName;
public:
    PTData(const PTTimer& Timer);       // Constructor
    void saveToFile();                  // Saves total up time to file
    void prepareOutDirectory();         // Prepares directoires to save file
    void setWorkingDir(string fileDir); // Sets filePath
};


#endif

