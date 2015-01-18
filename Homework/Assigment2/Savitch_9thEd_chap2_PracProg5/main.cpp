/* 
 * File:   main.cpp
 * Author: Yoenai GUerrero
 * Created on January 18, 2015, 12:58 PM
 */
//user libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//pi=3.1415;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
//declare variables and initialize
    float r=0,//radius
          v=0,//volume
            pi=3.1415;
//Prompt user for values
    cout<<"Enter radius of a sphere."<<endl;
    cin>>r;
//Calculations
    v=(4/3)*pi*r*r*r;
//outcome volume
    cout<<"The volume is "<<v<<endl;
//exit stage right
    return 0;
            
}

