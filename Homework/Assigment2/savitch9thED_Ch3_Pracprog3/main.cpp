/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 15, 2015, 9:22 PM
 */

#include <cstdlib>
#include <iomanip>
#include <string>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int month,day;
    bool cusp=false;
    string sign;
    cout<<"Input the numerical/integer you were born in"<<endl;
    cin>>month;
    cout<<"Input the integer the day you were born on"<<endl;
    cin>> day;
    //Determine the sign
    if(month==1&&day<20)sign="capricorn";
    else if(month==1&&day>=20)sign="Aquarius";
    else if(month==2&&day<=18)sign="Aquarious";
    //output the sign and the cusp 
    if(month==1&&(day>18||day<<22) cusp=true;
    if(month==2&&(day>16||day<<20) cusp=true;
    cout<<"Your sign is"<<sign;
    if(cusp)cout<<"You are on the cusp"<<endl;
    else cout<<endl;
    
    return 0;
}

