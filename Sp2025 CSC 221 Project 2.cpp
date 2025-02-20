// Sp2025 CSC 221 Project 2.cpp : Program calulating how many customers buy multiple energy drinks a week, and how many of those prefer citrus flavor
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int totalCustServey; // # of customers surveyed
    float numCustMultDrink; // # of customer buying one or more drinks per week
    float numCitrusPref; // # of customers buying drinks who prefer citrus flavor
    float perMultDrink; // % of customers buying one or more drinks per week
    float perCitrusPref; // % of customers buying drinks who prefer citrus flavor

    totalCustServey = 16500;
    perMultDrink = 0.15;
    perCitrusPref = 0.58;
    numCustMultDrink = totalCustServey * perMultDrink;
    numCitrusPref = int(numCustMultDrink * perCitrusPref);



    cout << "The approximate number of customers that buy multiple drinks is, " << numCustMultDrink << "." << endl;
    cout << "The approximate number of customers that buy multiple drinks and prefer citrus flavor is, " << numCitrusPref << "." << endl;
    return 0;
}


