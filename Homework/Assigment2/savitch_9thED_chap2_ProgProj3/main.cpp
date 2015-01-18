/* 
 * File:   main.cpp
 * Author: Yoenai Guerrero
 * Created on January 18, 2015, 2:24 PM
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
    int oldanusal=0,//Old Annual salary
            months=0;//Number of months for pay increase
    float  newanusal,//New annual salary
            oldmonth,//Old monthly salary
            newmonth;//New monthly salary
    const float increase=.076;//Pay increase percentage
    char ans;
    do{
    //Prompt user for Annual salary 
    cout<<"Enter annual salary "<<endl;
    cin>>oldanusal;
    cout<<"Enter the number of months for pay increase"<<endl;
    cin>>months;
    //Calculations
    oldmonth=oldanusal/12;
    newmonth=(oldmonth*increase)+oldmonth;
    cout<<"New monthly salary is "<<newmonth<<endl;
    newanusal=(newmonth*months)+(oldmonth*(12-months));
    cout<< "New annual salary is "<<newanusal<<endl;
    cout<<" "<<endl;
    cout<<" Would you like to calculate again ?";
    cout<<"Press y for yes and n for no"<<endl;
    cin>>ans;
    }while (ans=='y'|| ans=='Y');
    cout<<"Adios";
    
    
    
    
    

    return 0;
}

