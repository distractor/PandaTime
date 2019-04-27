/****************************************************
 ****************************************************
 * File includes any sort of output:
 * - console output
 * - things saved to file
 *
 ****************************************************
 ****************************************************
 */

#ifndef PANDATIME_PTOUTPUT_H
#define PANDATIME_PTOUTPUT_H

class PTOutput {
private:
    void printSymbol(int n, char Symbol, bool endLine) const;       // Prints n Symbols
public:
    PTOutput();
    void welcomeScreen() const;         // Prints welcome screeen

};


#endif
