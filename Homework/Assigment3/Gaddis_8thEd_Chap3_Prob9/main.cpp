/* 
 * File:   main.cpp
 * Author: Guerrero5
 *
 * Created on January 19, 2015, 9:34 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declare and initialize 
    float cookies=0,//cookies ate 
            calories=100,//Calories per cookie
            total;//Total calories ate 
    //Prompt user for cookies ate
    cout<<"Enter the amount of cookies ate "<<endl;
    cin>>cookies;
    //calculations
    total=cookies*calories;
    //Outcome= total calories consumed 
    cout<<"Total calories consumed are "<<total<<endl;
    cout<<"You should be more healthy and eat an apple"<<endl;
    
    
    return 0;
}

