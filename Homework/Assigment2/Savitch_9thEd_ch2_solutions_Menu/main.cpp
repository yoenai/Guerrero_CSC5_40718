/* 
 * File:   main.cpp
 * Author: Guerrero5
 *
 * Created on January 18, 2015, 3:18 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
//User Libraries 

//Global Constants 
const int CNVHRMN=60;// Conversion from Hrs to Mins 
const int CNVMNSC=60;// FInish this 
 float pi=3.1415;


int main(int argc, char** argv) {
//Assignment 2 Menu Prompt
    char ans5;
    do {
    cout<<"Solution 1 Savitch 9thEd chap 2 Practice Problem 1"<<endl;
    cout<<"Solution 2 Savitch 9thEd chap 2 Practice Problem 2"<<endl;
    cout<<"Solution 3 Savitch 9thEd chap 2 Practice Problem 3"<<endl;
    cout<<"Solution 4 Savitch 9thEd chap 2 Practice Problem 4"<<endl;
    cout<<"Solution 5 Savitch 9thEd chap 2 Practice Problem 5"<<endl;
    cout<<"Solution 6 Savitch 9thEd chap 2 Programming Projects 1"<<endl;
    cout<<"Solution 7 Savitch 9thEd chap 2 Programming Projects 2"<<endl;
    cout<<"Solution 8 Savitch 9thEd chap 2 Programming Projects 3"<<endl;
    cout<<"Solution 9 Savitch 9thEd chap 2 Programming Projects 9"<<endl;
    cout<<"Input wich solution you would like to see "<<endl;
    int choice;
    cin>>choice;
    //Based upon the choice, display the results
    switch(choice){
        case 1:{ 
    float metric_ton=35273.92,cereal_weight=0,weight_tons=0,
   boxes_for_ton;
    int Yes=5, N0=0, input;
    cout<<"Enter the weight of cereal in ounces"<< endl;
    cin>>cereal_weight; 
    weight_tons=cereal_weight/metric_ton;
    cout<<cereal_weight<<" Ounces is "<< weight_tons<<" metric tons"<<endl;
    boxes_for_ton=metric_ton/cereal_weight;
    cout<<boxes_for_ton << " Boxes are needed for one metric ton"<<endl;
    cout<<"Would you like to calculate again? (enter Y for Yes or N for No)"<<endl;
    char answer;
    cin>> answer; 
    if(answer=='Y'||answer=='y'){
     cout<<"Enter the weight of cereal in ounces"<< endl;
    cin>>cereal_weight; 
    weight_tons=cereal_weight/metric_ton;
    cout<<cereal_weight<<" Ounces is "<< weight_tons<<" metric tons"<<endl;
    boxes_for_ton=metric_ton/cereal_weight;
    cout<<boxes_for_ton << " Boxes are needed for one metric ton"<<endl;
    }
    if(answer=='N'||answer=='n'){
        cout<<"Goodbye"<<endl;
    }
break;
        }
        case 2:{ 
            
        //Declare variables
    float number,guess,r;
    int count;
    //Input a number
    cout<<"Input a number to estimate it's square root"<<endl;
    cout<<"The format fill be a positive float"<<endl;
    cin>>number;
    //First pass
    guess=number/2;
    do{ 
        r=number/guess;
    guess=(guess+r)/2;
    count++;
    //Output the first pass
    cout<<"First Pass calculate -> "<<guess<<endl;
    }while ((r-guess)!=0);
    //Exit stage right
    break;
        }
   
        case 3:{
           
   //Declare variables
            float mph;//Miles per hour on a treadmill
            float hpm;//Pace as hours per mile
            float fmpm;//Miles per minute as a float
            int   impm;//Miles per minute as an integer
            float fmspm;//Fraction left for seconds per mile
            //Prompt for the input
            cout<<"How many miles are you running"<<endl;
            cout<<"in an hour?"<<endl;
            cout<<"Format answer as a float."<<endl;
            cin>>mph;
            //Calculate the relevant pace
            hpm=1/mph;
            fmpm=hpm*CNVHRMN;
            impm=static_cast<int>(fmpm);
            fmspm=(fmpm-impm)*CNVMNSC;
            //Output the result
            cout<<mph<<" (mph) = ";
            cout<<impm<<" (mins) ";
            cout<<fmspm<<" (secs) per mile"<<endl;
            break;
        }
        case 4:{  //declare and initialize values
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
           break ;
                     }
        case 5:{     
        //declare variables and initialize
        float 
        r=0,//radius
        v=0,//volume
        pi=3.1415;
         //Prompt user for values
         cout<<"Enter radius of a sphere."<<endl;
         cin>>r;
         //Calculations
          v=(4/3)*pi*r*r*r;
         //outcome volume
           cout<<"The volume is "<<v<<endl;
            //exit stage right
           break;
        }
        
        
        case 6:{   
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
    break;
      }
        
        
        case 7:{   
            //Declare and initialize
    int oldanusal=0;//Old Annual salary
    float  newanusal,//New annual salary
            oldmonth,//Old monthly salary
            newmonth;//New monthly salary
    const float increase=.076;//Pay increase percentage
    char ans;
    do{
    //Prompt user for Annual salary 
    cout<<"Enter annual salary "<<endl;
    cin>>oldanusal;
    //Calculations
    oldmonth=oldanusal/12;
    newmonth=(oldmonth*increase)+oldmonth;
    cout<<"New monthly salary is "<<newmonth<<endl;
    newanusal=(newmonth*6)+(oldmonth*6);
    cout<< "New annual salary is "<<newanusal<<endl;
    cout<<" "<<endl;
    cout<<" Would you like to calculate again ?";
    cout<<"Press y for yes and n for no"<<endl;
    cin>>ans;
    }while (ans=='y'|| ans=='Y');
    cout<<"Adios";  
        break;
        }
        
        case 8:{
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
    break;
        }
        case 9:{
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
        break; 
        }//case9
        }//choice
    
    //menu option return
    cout<<"  "<<endl;
    
    cout<<"Would you like to choose anohter solution? Y=yes, N=no"<<endl;
    cin>>ans5;
    } 
    while(ans5=='y'||ans5=='Y');
    cout<<"Adios";
       
    return 0;
    }

