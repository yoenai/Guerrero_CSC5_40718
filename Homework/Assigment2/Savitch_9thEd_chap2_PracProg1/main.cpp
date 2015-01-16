/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 15, 2015, 6:41 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {
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
    return 0;
}

