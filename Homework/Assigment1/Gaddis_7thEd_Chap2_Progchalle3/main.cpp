/* 
 * File:   main.cpp
 * Author: Yoenai Guerrero
 * Created on January 11, 2015, 7:36 PM
 * Purpose: Our first program 
 */
//System libraries
#include <iostream>

// user Libraries

// Global Constants 

//Function Prototypes 

// Execution Begins Here!

using namespace std;

int main(int argc, char** argv) {
//Declare Variables and Initialize 
    float purprice=95; // Purchase price
    float stax=.04*purprice;// State Tax
    float ctax=.02*purprice;// County Tax
    float Total=0;
// Calculatios 
    Total=purprice+stax+ctax;
    cout<<"State tax= "<<stax<< endl;
    cout<<"County tax= "<< ctax << endl;
    cout<<"Purchase Total= Purchase Price + State tax + County tax= ";
    cout<<Total;

    return 0;
}

