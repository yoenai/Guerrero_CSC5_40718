/* File:   main.cpp
 * Author: Yoenai Guerrero
 * Created on January 15, 2015, 9:02 PM
 */
//system libraries
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //declare and initialize values
    string value1,//The first or last name of instructor
            value2,//Your name
            value3,//A food
            value4,//A number between 100 and 120
            value5,//An adjective
            value6,//A color
            value7;//An animal
            //Prompt user to input anwsers for questions    
           cout<<"Enter the first or last name of your instructor"<<endl;
           cin>> value1;
           cout<<"Enter Your Name"<<endl;
           cin>>value2;
           cout<<"A food"<<endl;
           cin>>value3;
           cout<<"A number between 100 and 120"<<endl;
           cin>>value4;
           cout<<"An adjective"<<endl;
           cin>>value5;
           cout<<"A color"<<endl;
           cin>>value6;
           cout<< " An animal"<<endl;
           cin>>value7;
           // Out come finished mad lib
           cout<<"Dear Instructor  "<<value1<<","<< endl;
           cout<<" "<<endl;
           cout<<"I am sorry that I am unable to turn in my homework at this time. First,I ate a rotten "
                   <<value3<<",which made me turn "<<value6<<" and extreamly ill."
                   <<"I came down with a fever of "<<value4
                   <<" .Next, my "<<value5<<" pet "<<value7
                   <<" must have smelled the remains of the "<<value3<<" on my homework, because he ate it."
                   <<"I am currently rewriting my homework and hope you will accept it late."<<endl;
           cout<<" "<<endl;
           cout<<"Sincerely,"<<endl;
           cout<<value2<<endl;
           // exit stage right 
                   
                   
    return 0;
}

