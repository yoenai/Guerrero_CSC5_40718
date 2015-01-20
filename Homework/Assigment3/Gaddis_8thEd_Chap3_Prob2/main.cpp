/* 
 * File:   main.cpp
 * Author: Yoenai Guerrero
 * Created on January 19, 2015, 8:37 PM
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
    char A=15,B=12,C=9;//Seat class
    int NumA,//Number of seats for class A
            NumB,//Number of seats for class B
            NumC;//NUmber of seats for class C
    
     float income;
    //Prompt user for nuber of eats for each class
     cout<<"Enter the number of seats sold for class A"<<endl;
     cin>>NumA;
     cout<<"Enter the number of seats sold for class B"<<endl;
     cin>>NumB;
     cout<<"Enter the number of seats sold for class C"<<endl;
     cin>>NumC;
     //calculations 
     income=(NumA*A)+(NumB*B)+(NumC*C);
     //output the results 
     cout.setf(ios::fixed);
     cout.precision(2);
     cout<<"Gross Income of seat sales is $"<<income<<endl;
     cout<<"Good Job!";
     

    return 0;
}

