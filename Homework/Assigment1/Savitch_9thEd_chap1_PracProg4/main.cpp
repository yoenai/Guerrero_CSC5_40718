/* 
 * File:   main.cpp
 * Author: Yoenai Guerrero
 * Created on January 8, 2015, 6:36 PM
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
    int number_of_pods, peas_per_pod, total_peas;
    
    cout<< "Press return after entering a number.\n";
    cout<< "Enter the number of pods:\n";
    
    cin>> number_of_pods;// Enter Number of Pods
    
    cout<< "Enter the number of peas in a pod:\n";
    cin>>peas_per_pod;// Peas Per Pod
    //Calculate the total number of peas
    total_peas = number_of_pods + peas_per_pod ;// Multiplication signed changed to an addition for problem 4.
    cout<<"If you have"<<" " ;
    cout<< number_of_pods;
    cout<<" " <<"pea pods\n";
    cout<<"and"<< " ";
    cout<< peas_per_pod;
    cout<<" " <<"peas in each pod, then\n";
    cout<<"you have";
    //OutPut total amount of peas is incorrect due to a logical error.
    cout<<total_peas;
    cout<<"peas in all the pods\n";
    //Exit Stage Right
   
    return 0;
}



