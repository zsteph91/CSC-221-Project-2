// Sp2025 CSC 221 Project 2.cpp : Program calulating how many customers buy multiple energy drinks a week, and how many of those prefer citrus flavor
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int totalCustServey;
    float numCustMultDrink;
    float numCitrusPref;
    float perMultDrink;
    float perCitrusPref;

    totalCustServey = 16500;
    perMultDrink = 0.15;
    perCitrusPref = 0.58;
    numCustMultDrink = totalCustServey * perMultDrink;
    numCitrusPref = int(numCustMultDrink * perCitrusPref);



    cout << "The approximate number of customers that buy multiple drinks is, " << numCustMultDrink << "." << endl;
    cout << "The approximate number of customers that buy multiple drinks and prefer citrus flavor is, " << numCitrusPref << "." << endl;
    return 0;
}


