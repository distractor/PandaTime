#include "PTData.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fstream>
#include <iostream>

PTData::PTData(const PTTimer& Timer) {
    _Timer = &Timer;
}

void PTData::setWorkingDir(string fileDir) {
    filePath = fileDir;
}

// Prepares directory
void PTData::prepareOutDirectory() {
    // Prepare stats directory (this is only executed on the first softaare run!)
    struct stat st = {0};
    filePath = filePath + "/stats";
    // Check if folder exists and create if not
    if (stat(filePath.c_str(), &st) == -1) {
        mkdir(filePath.c_str(), 0700);
    }

    // Prepare the year folder
    int year = _Timer->getCurrentYear();
    filePath = filePath + "/" + to_string(year) + "/";
    // Check if folder exists and create if not
    if (stat(filePath.c_str(), &st) == -1) {
        mkdir(filePath.c_str(), 0700);
    }

    // Prepare fileName
    int month = _Timer->getCurrentMonth();
    fileName = to_string(month) + ".txt";
}

// Saves total up to file
void PTData::saveToFile() {
    prepareOutDirectory();

    // Open file as append or create if not existing
    ofstream write_output(filePath + fileName, std::ios_base::app);
    write_output << _Timer->returnTotalUpTime() << endl;
    write_output.close();

    cout << "File successfully saved to: " << filePath + fileName << endl;
}