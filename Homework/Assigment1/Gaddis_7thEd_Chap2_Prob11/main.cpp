/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 8, 2015, 8:10 PM
 */

#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
//Declare and Initialize Variables.
//In this case we use floats bc of fraction.
float gasTank=20;//Max Gallons in our gas tank.
float inTown=21.5;//In town miles per gallon
float onHway=26.8;//Hwy miles per gallon
//Calculate total miles in and out of town
float disTown=gasTank*inTown;
float disHway=gasTank*onHway;
//Output the results
cout<<"Distance in Town on a tank of gas="<<endl;
cout<<disTown<<"(miles)"<<endl;
cout<<"Distance on Hwy with a tank of gas="<<endl;
cout<<disHway<<"(miles)" <<endl;
    return 0;
}

