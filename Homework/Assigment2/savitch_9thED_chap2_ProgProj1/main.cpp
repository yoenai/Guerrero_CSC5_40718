/* 
 * File:   main.cpp
 * Author: Yoenai Guerrero
 * Created on January 18, 2015, 1:44 PM
 */
//System libraries 
#include <cstdlib>
#include <iostream>
using namespace std;
//User libraries 

//Global Costants

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
        //Declare variables and initialize 
    float weight1=0,//Weight after diet is over
          weight2,//users weight in grams
          ratio=1/7,//Lethal dose ratio
          poisg=0,//Amount of Poison in grams to kill user
          pois2=.35,//poison in each can
          cans=0;//number of cans able to drink.
    char ans;
    do{
    //Propt user for weight after diet is over.
    cout<<"Enter the weight after diet is over"<<endl;
    cin>>weight1;
    //calculations 
    weight2=weight1*454;
    cout<<weight2<<" grams"<<endl;
    poisg=weight2/7;
    cans=poisg/pois2;
    cout<<"You can drink "<<cans<<" cans before dying so drink water instead"<<endl;
     cout<<" "<<endl;
    cout<<"Do you want to calculate again ?"<<endl;
    
    cout<<"Press y for yes, n for no, and then press return"<<endl;
    cin>>ans;
    }while(ans=='y'|| ans=='Y');
    cout<<"adios";
    //exit stage right
    return 0;
}

