/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr *
 * Created on January 13, 2015, 10:15 AM
 * Purpose: Babylonian Square root calculator using loop ( do)
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float number,guess,r;
    int count;
    //Input a number
    cout<<"Input a number to estimate it's square root"<<endl;
    cout<<"The format fill be a positive float"<<endl;
    cin>>number;
    //First pass
    guess=number/2;
    do{ 
        r=number/guess;
    guess=(guess+r)/2;
    count++;
    //Output the first pass
    cout<<"First Pass calculate -> "<<guess<<endl;
    }while ((r-guess)!=0);
    //Exit stage right
    return 0;
}