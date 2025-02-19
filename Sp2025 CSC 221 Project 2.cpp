// Sp2025 CSC 221 Project 2.cpp : Program calulating distance per tank of gas in a town vs the highway
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    float distanceTown; // How many miles the car gets driving in a town
    float distanceHwy; // How many miles the car gets driving on a highway
    float numGal; // How many gallons of gas the car holds
    float avgMpgTown; // MPG in town
    float avgMpgHwy; // MPG on the highway

    numGal = 20; 
    avgMpgTown = 23.5;
    avgMpgHwy = 28.9;
    distanceTown = numGal * avgMpgTown;
    distanceHwy = numGal * avgMpgHwy;


    cout << "This car can travel " << distanceTown << " miles when driven in town." << endl;
    cout << "This car can travel " << distanceHwy << " miles when driven on the highway." << endl;
    return 0;
}


