// Sp2025 CSC 221 Project 2.cpp : Program calulating sea level rise in 5, 7, and 10 years 
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    float seaLevelRise;
    float riseFiveYears;
    float riseSevenYears;
    float riseTenYears;

    seaLevelRise = 1.5; // in mm per year
    riseFiveYears = 5 * seaLevelRise; // # of years times rise in mm/year
    riseSevenYears = 7 * seaLevelRise; // # of years times rise in mm/year
    riseTenYears = 10 * seaLevelRise; // # of years times rise in mm/year

    cout << "In five years the sea level will be, " << riseFiveYears << " millimeters, higher than it is today." << endl;
    cout << "In seven years the sea level will be, " << riseSevenYears << " millimeters, higher than it is today." << endl;
    cout << "In ten years the sea level will be, " << riseTenYears << " millimeters, higher than it is today." << endl;
    return 0;
}


