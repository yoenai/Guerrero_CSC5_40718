/* 
 * File:   main.cpp
 * Author: Guerrero5
 *
 * Created on January 19, 2015, 9:00 PM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
//Declare and initialize
    string movie;
    char A=10,C=6;//Price of adult and child tickets
    int NumA,NumC;//NUmber of tickets for adult and child
    int Grossincome=0;//Gross box office profit
    float Netprofit=0;//Net box office profit
    float Dist=0;//Ammount paid to Distributor
    //Propmt use for amount of tickets sold And movie name
    cout<<"Enter the movie name"<<endl;
    cin>>movie;
    cout<<"Enter the amount of Adult tickets sold"<<endl;
    cin>>NumA;
    cout<<"Enter the amount of children tickets sold"<<endl;
    cin>>NumC;
    //Calculations 
    Grossincome=(NumA*A)+(NumC*C);
    Netprofit=Grossincome*.20;
    Dist=Grossincome-Netprofit;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout<<"Movie Name:"<<"                    "<<movie<<endl;
    cout<<"Adult Tickets Sold:"<<"            "<<NumA<<endl;
    cout<<"Child tickets sold:"<<"            "<<NumC<<endl;
    cout<<"Gross Box Office Profit:"<<"       $"<<Grossincome<<endl;
    cout<<"Net Box Office Profit:"<<"         $"<<Netprofit<<endl;
    cout<<"Amount Paid to Distributer"<<"     $"<<Dist<<endl;
    
    return 0;
}

