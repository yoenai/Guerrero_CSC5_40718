/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr *
 * Created on January 19, 2015, 10:15 AM
 * Purpose: bitcoin conversion
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
//Assigment menu prompt
    char ans5;
    do
    {
        cout<<"solution 1 Gladdis 7th Ed chap 3 prob11"<<endl;
        cout<<"solution 2 Gladdis 7th Ed chap 3 prob12"<<endl;
        cout<<"solution 3 Gladdis 8th Ed chap 3 prob1"<<endl;
        cout<<"solution 4 Gladdis 8th Ed chap 3 prob2"<<endl;
        cout<<"solution 5 Gladdis 8th Ed chap 3 prob7"<<endl;
        cout<<"solution 6 Gladdis 8th Ed chap 3 prob9"<<endl; 
        cout<<"solution 7 Gladdis 8th Ed chap 3 prob19"<<endl;
        cout<<"solution 8 Savitch 9th Ed chap 3 Pracprog1 "<<endl;
        cout<<"solution 8 Savitch 9th Ed chap 3 Pracprog3 "<<endl;
        cout<<"Input wich solution you would like to see "<<endl;
        int choice;
        cin>>choice;
        //Based upon the choice, display the results switch         
    switch (choice){
        case 1:{
            //Declare variables and initialize
    float bcToDlr=232.8;   //Jan 13th, 2015 10:17am
    float erToDlr=0.849381;//Same Date
    float ynToDlr=118.03;  //Same Date
    float bitcoin,dollars,euros,yen;
    //Input the number of bitcoin and then convert
    cout<<"Input the number of bitcoin "<<endl;
    cout<<"You wish to purchase."<<endl;
    cin>>bitcoin;
    //Convert to all the currencies
    dollars=bcToDlr*bitcoin;
    euros=erToDlr*dollars;
    yen=ynToDlr*dollars;
    //Output the results
    cout.setf(ios::fixed);
    cout.precision(2);
    cout<<bitcoin<<" =   "<<dollars<<"(dollars)"<<endl;
    cout<<bitcoin<<" =   "<<euros<<"(euros)"<<endl;
    cout<<bitcoin<<" = "<<yen<<"(yen)"<<endl;
    break;
        }//case 1
        
        case 2:{
         //Declare variables
    string month,year;
    float totCash,sales,dolSTax,dolCTax;
    float sSlsTax=4e-2f,cSlsTax=2e-2f;
    //Prompt for inputs
    cout<<"What month of sales to calculate?"<<endl;
    getline(cin,month);
    cout<<"What year of sales to calculate?"<<endl;
    getline(cin,year);
    cout<<"What was the total Cash received?"<<endl;
    cin>>totCash;
    //Calculations required
    sales=totCash/(1+sSlsTax+cSlsTax);
    dolSTax=sales*sSlsTax;
    dolCTax=sales*cSlsTax;
    //Output Everything
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Month: "<<month<<" Year: "<<year<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"Total Collected:       $ "<<setw(8)<<totCash<<endl;
    cout<<"Sales:                 $ "<<setw(8)<<sales<<endl;
    cout<<"County Sales Tax:      $ "<<setw(8)<<dolCTax<<endl;
    cout<<"State Sales Tax:       $ "<<setw(8)<<dolSTax<<endl;
    cout<<"Total Sales Tax:       $ "<<setw(8)<<dolCTax+dolSTax<<endl;
    //Exit Stage Right!
    break;
        }
        
        case 3:{
         //Declare and initialize
    float mpg,tank,miles;
    char ans;
    do{
    cout<< "Miles per gallon calculator"<<endl;
    cout<<"Enter the number of gallons of gas your car can hold"<<endl;
    cin>>tank;
    cout<<"Now enter the miles you can go on a full tank"<<endl;
    cin>>miles;
    //calculate 
    mpg=tank/miles;
    cout<<"Your car can drive "<<mpg<<" miles per gallon. "<<endl;
    cout<<"Would you like to calculate again? "<<endl;
    cout<<"Enter Y for yes and n for no"<<endl;
    cin>>ans;
    }while (ans=='y'||ans=='Y');
    cout<<"Adios";
    break;
        }//case 3 
        
        case 4:{
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
     break ;
     
        }//case4
        
        case 5:{
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
    break;
        }//case5
        
        case 6:{
            //Declare and initialize 
    float cookies=0,//cookies ate 
            calories=100,//Calories per cookie
            total;//Total calories ate 
    //Prompt user for cookies ate
    cout<<"Enter the amount of cookies ate "<<endl;
    cin>>cookies;
    //calculations
    total=cookies*calories;
    //Outcome= total calories consumed 
    cout<<"Total calories consumed are "<<total<<endl;
    cout<<"You should be more healthy and eat an apple"<<endl;
    break;
        }//case6
        
        case 7:{
             //Declare variables
    float intRate=0.0319f/12;//http://www.capitalone.com/auto-financing/rates/?Log=1&EventType=Link&ComponentType=T&LOB=MTS%3A%3ALCTML6KG4&PageName=Auto+navigator&PortletLocation=4%3B16-col%3B4-1-1-1&ComponentName=content2%3B18&ContentElement=2%3BSee+Rates&TargetLob=MTS%3A%3ALCTML6KG4&TargetPageName=Auto+Loan+Rates&referer=https%3A%2F%2Fwww.capitalone.com%2Fauto-financing%2Fauto-navigator&external_id=WWW_LP058_XXX_SEM-Brand_Google_ZZ_ZZ_T_Home
    float msrplus=4e4f;      //Loan amount for Buick Avenir
    char  nPaymnt=60;        //Number of monthly payments
    //Calculate the monthly payments
    float temp=pow((1+intRate),nPaymnt);
    float mPay=intRate*temp*msrplus/(temp-1);
    //Output the inputs
    cout<<"Interest per year in percent = "<<intRate*100*12<<endl;
    cout<<"Number of payments = "<<static_cast<int>(nPaymnt)<<endl;
    cout<<"Loan Amount = $"<<msrplus<<endl;
    //Output our car payment
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"My Avenir will cost $"<<mPay<<endl;
    break;
        }//case7
        
        case 8:{
            //Declara and initialize
    char ply1,//player 1
            ply2;//PLayer 2 
        char ans;
   do { 
    //Prompt user for input
    cout<<"Rock, Paper, scissor game"<<endl;
    cout<<"Enter P for paper "<<endl;
    cout<<"Enter R for rock"<<endl;
    cout<<"Enter S for scissor"<<endl;
    cout<<"Player 1 enter your choice"<<endl;
    cin>>ply1;
    cout<<"Player 2 enter your choice"<<endl;
    cin>>ply2;
    if ((ply1=='r'||ply1=='R')&& (ply2=='r'||ply2=='R'))
    { cout<<"Nobody wins";
    }
    else if ((ply1=='r'||ply1=='R')&& (ply2=='p'||ply2=='P'))
    { cout<<"Player 2 wins Paper covers Rock";
    }
    else if ((ply1=='r'||ply1=='R')&& (ply2=='s'||ply2=='S'))
    {cout<<"Player 1 wins Rock crushes scissor";
    }
    else if ((ply1=='P'||ply1=='p')&& (ply2=='P'||ply2=='p'))
    {cout<<"Nobody wins";
    }
    else if ((ply1=='P'||ply1=='p')&& (ply2=='R'||ply2=='r'))
    {cout<<"Player 1 wins Paper covers rock";
    }
    else if ((ply1=='P'||ply1=='p')&& (ply2=='s'||ply2=='S'))
    {cout<<"player 2 wins scissor cuts paper";
    }
    else if ((ply1=='S'||ply1=='s')&& (ply2=='S'||ply2=='s'))
    {cout<<"Nobody wins";
    }
    else if ((ply1=='S'||ply1=='s')&& (ply2=='R'||ply2=='r'))
    {cout<<"Player 2 wins rock crushes scissor";
    }
    else if ((ply1=='S'||ply1=='s')&& (ply2=='P'||ply2=='p'))
    {cout<<"Player 1 wins scissor cuts paper";
    }
    cout<<" "<<endl;
    cout<<"Would you like to play again ? "<<endl;
    cout<<"Enter y or Y for yes, enter n or N for No"<<endl;
    cin>>ans;
   }while(ans=='Y'||ans=='y');
   cout<<"Adios"<<endl;
   //exit stage right.
   break;
        }//case 8
        
        case 9:{
               //Declare variables
    bool cusp=false;
    int month,day;
    string sign;
    //Prompt for the input
    cout<<"Input the numerical/integer month you were born in"<<endl;
    cin>>month;
    cout<<"Input the integer day you were born on"<<endl;
    cin>>day;
    //Determine the sign
    if(month==1&&day<20)sign="Capricorn";
    else if(month==1&&day>=20)sign="Aquarius";
    else if(month==2&&day<=18)sign="Aquarius";
    //Output the sign and the cusp
    if(month==1&&day>18&&day<22)cusp=true;
    if(month==2&&day>16&&day<20)cusp=true;
    cout<<"Your sign is "<<sign;
    if(cusp)cout<<" and you are on the cusp"<<endl;
    else cout<<endl;
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

