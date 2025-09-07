#include <iostream>
#include<iomanip>
#include <cmath>

using namespace std;


class myInt{
private:
    int myInt; // Integer variable to hold user input
    int getMyInt(){return myInt;}//Inline get function to return the value stored.
    void sqrRootOfInteger();//Prototype for square root function.
    void isPrimeInteger();//Prototype for prime integer function.
    void checkMultiple7_11_13();//Prototype for multiple check function.
    void isPerfect();//Prototype to see if integer is perfect.
    void sumOfDigits();//Prototype for summing function.



public:
    
    void setMyInt(int number){//Function to set the integer and call
                             // the private functions.
        
        myInt=number;//sets "myInt" to the value entered by user.
        
        
        //Function calls to drive program.
        checkMultiple7_11_13();
        sumOfDigits();
        sqrRootOfInteger();
        isPrimeInteger();
        isPerfect();
        
        
        
    }
    
    
};