/* 
 * File:   main.cpp
 * Author: Yoenai Guerrero
 * Created on January 8, 2015, 2:34 PM
 * Purpose: Savitch HW problem
 */
//system libraries
#include <cstdlib>
#include <iostream>
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
using namespace std;

int main(int argc, char** argv) {
// Declare and initialize Variables.
    int Integer1,Integer2,Product,Sum;
    cout <<" Enter the number for Integer1.\n";
    cin >> Integer1 ;
    cout <<" Enter number for Integer2.\n";
    cin>> Integer2;
    //Calculation
    Sum=Integer1+Integer2 ;
    Product = Integer1 * Integer2;
    //Output the results
    cout <<"Sum of Integers " << Sum << endl ;
    cout <<"Product of Integers " << Product;
    
    return 0;
    //Exit state
}

