 /* Author: Yoenai Guerrero
 * Created on January 11, 2015, 5:36 PM
 * Purpose: Fence Calculation
 */
//System libraries
#include <iostream>

// user Libraries

// Global Constants 

//Function Prototypes 

// Execution Begins Here!

using namespace std;

int main(int argc, char** argv) {
    int Width, Height, Total_Length;
    
    cout<< "Press return after entering a number.\n";
    cout<< "Enter width in feet :\n";
    cin>> Width;// Enter width of fence in feet.
    cout<< "Enter the Height of fence in feet:\n";
    cin>>Height;// Height of the fence.
    //Calculate 
    Total_Length = Width * Height;
    cout<<"If you have a Width of "<<" " ;
    cout<< Width;
    cout<<" " <<"feet\n";
    cout<<"and a height of "<< " ";
    cout<< Height;
    cout<<" " <<"feet, then\n";
    cout<<"your total fence needed is"<< " ";
    //OutPut total fence needed.
    cout<<Total_Length;
    cout<<" "<<"ft squared.\n";
    //Exit Stage Right
   
    return 0;
}

