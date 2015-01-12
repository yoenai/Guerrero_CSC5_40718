/* 
 * File:   main.cpp
 * Author: Yoenai Guerrero
 * Created on January 8, 2015, 6:36 PM
 * Purpose: Sales prediction 
 */
//System libraries
#include <iostream>

// user Libraries

// Global Constants 

//Function Prototypes 

// Execution Begins Here!

using namespace std;

int main(int argc, char** argv) {
//Declare variables and initialize them.
    float Ecoastdiv=.58, Yearly_total=8600000, East_coast_contribution=0;
    cout<<"East coast Division generates 58% of total sales"<<endl;
    cout<<"The companiess yearly total was 8.6 million"<< endl;
    //Calculations 
    East_coast_contribution=Ecoastdiv*Yearly_total;
    cout<<"The East coast company contributed" <<East_coast_contribution<<"%"<<endl;
//Exit stage right    
    return 0;
}

