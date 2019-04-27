#include <iostream>
#include "PTTimer.h"

using namespace std;

// Constructor
PTTimer::PTTimer() {
    startTime = timeNow();

    cout << "Timer started ..." << endl;
    cout << "Press any key to stop timing." << endl;
}

// Stop timer
void PTTimer::stopTimer(){
    endTime = timeNow();

    elapsedTime = duration(endTime - startTime);
}

// Returns elapsed time
double PTTimer::returnTotalUpTime() const {
    return elapsedTime;
}

// Prints current up time
void PTTimer::printUpTime() const {
    cout << duration(timeNow() - startTime)  << " seconds" << endl;
}

// Prints total UP time
void PTTimer::printTotalUpTime() const{
    cout << "Total up time: " << elapsedTime  << " seconds." << endl;
}

// Returns current year
int PTTimer::getCurrentYear() const {
    time_t theTime = time(NULL);
    struct tm *aTime = localtime(&theTime);
    int year = aTime->tm_year + 1900; // Year is # years since 1900

    return year;
}

// Returns current month
int PTTimer::getCurrentMonth() const {
    time_t theTime = time(NULL);
    struct tm *aTime = localtime(&theTime);
    int month = aTime->tm_mon + 1;

    return month;
}