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
   
    
    return 0;
 }

