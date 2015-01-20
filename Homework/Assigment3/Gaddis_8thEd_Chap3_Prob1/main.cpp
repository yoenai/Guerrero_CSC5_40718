/* 
 * File:   main.cpp
 * Author: Yoenai Guerrero
 * Created on January 19, 2015, 7:52 PM
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare and initialize
    float mpg,tank,miles;
    char ans;
    do{
    cout<< "Miles per gallon calculator"<<endl;
    cout<<"Enter the number of gallons of gas your car can hold"<<endl;
    cin>>tank;
    cout<<"Now enter the miles you can go on a full tank"<<endl;
    cin>>miles;
    //calculate 
    mpg=tank/miles;
    cout<<"Your car can drive "<<mpg<<" miles per gallon. "<<endl;
    cout<<"Would you like to calculate again? "<<endl;
    cout<<"Enter Y for yes and n for no"<<endl;
    cin>>ans;
    }while (ans=='y'||ans=='Y');
    cout<<"Adios";
    return 0;
    
}

