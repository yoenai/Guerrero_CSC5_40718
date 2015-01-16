/* 
 * File:   main.cpp
 * Author: Yoenai Guerrero
 * Created on January 15, 2015, 7:51 PM
 */
//System Libraries
#include <cstdlib>
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execute Begins Here!

int main(int argc, char** argv) {
// Declare variables 
    int input;
    int sum=0, sumPos=0, sumNeg=0,sumEven=0,SumOdd=0;
//Prompt for an input and sum
cout<<"Enter an integer"<<endl;
cin>>input;
sum+=input;
if(input>0)sumPos+=input;
else sumNeg+=input;
if (input%2)SumOdd+=input;
else sumEven+=input; 
//Output the result
cout<<"Sum = "<<sum<<endl;
cout<<"A positive sum="<<sumPos<<endl;
cout<<"The Negative sum="<<sumNeg<<endl;
cout<<"The Even Sum= "<< sumEven<<endl;
cout<<"The odd sum = "<< SumOdd<< endl;
    return 0;
}

