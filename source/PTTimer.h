#ifndef PANDATIME_PTTIMER_H
#define PANDATIME_PTTIMER_H

#include <ctime>
#include <chrono>

using namespace std::chrono;

typedef std::chrono::high_resolution_clock::time_point timePoint;
#define timeNow() std::chrono::high_resolution_clock::now()
#define duration(a) std::chrono::duration_cast<std::chrono::seconds>(a).count()

class PTTimer {
private:
    timePoint startTime;
    timePoint endTime;
    double elapsedTime;
public:
    PTTimer();                          // Constructor
    void stopTimer();                   // Stop timer
    void printUpTime() const;           // Prints current up time
    double returnTotalUpTime() const;   // Returns total up time
    void printTotalUpTime() const;      // Prints total up time
    int getCurrentYear() const;         // Returns current year
    int getCurrentMonth() const;         // Returns current year
};


#endif