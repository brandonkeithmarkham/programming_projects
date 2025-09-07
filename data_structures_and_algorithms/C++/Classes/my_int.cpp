#include <iostream>
#include<iomanip>
#include <cmath>
#include "my_int.h"

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
/The purpose of this function is to take an integer and use the square root
/function in cmath to print the sqrt of the integer entered.
/
/No Parameters
/
/This function is of type void therefore there is no return type.
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
void myInt::sqrRootOfInteger(){
    cout<<"C.  The square root of "<< getMyInt() <<" is: "<< sqrt(getMyInt()) <<"\n";
    
}
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
/ The purpose of this function is to determine if the integer entered by user
/ is a prime number. A bool is set to true and then the integer is ran through
/ a conditional if statement to determine if it is 1 or 0 because they are not
/ prime numbers. Then there is a for loop that starts at two and runs till i<=
/ user number/2. The purpose of this is to reduce the need for redundant
/ iterations within the program.
/
/ No Parameters
/
/ Function is of type void therefore there is no return statement.
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
void myInt::isPrimeInteger(){
    
      bool isPrimeInteger = true;

      if (getMyInt()<=1)
      {
        isPrimeInteger = false;
      }

  
      for (int i = 2; i <= getMyInt()/2; ++i)
      {
        if (getMyInt() % i == 0)
        {
          isPrimeInteger = false;
          break;
        }
      }

      if (isPrimeInteger)
        cout <<"D.  "<< getMyInt() << " is a prime number\n";
      else
        cout <<"D.  "<< getMyInt() << " is not a prime number\n";

     
  
}
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
/ The purpose of this function is to take the integer entered by the user and
/ use modular arithmetic and relational operations in conjucntion with branch
/ statements to compare the integer with the values of 7, 11, and 13. If the
/ integer entered by the user has a remainder of 0 in any of the conditions,
/ the number is prime, else it is not.
/
/ This function carries no arguments or parameters
/
/ This function is of type void therefore there is no return statement.
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
void myInt::checkMultiple7_11_13(){
    cout<< "A.  ";
    if(getMyInt()%7==0)
    {
        cout << getMyInt() << " is a multiple of 7,";
    }
    else
    {
        cout << getMyInt() << " is not a multiple of 7,";
    }

    if(getMyInt()%11==0)
    {
        cout << " is a multiple of 11,";
    }
    else
    {
        cout <<  " is not a multiple of 11,";
    }

    if(getMyInt()%13==0)
    {
        cout <<" is a multiple of 13.";
    }
    else
    {
        cout << " is not a multiple of 13."<<endl;
    }
}
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
/  This function uses modular arithmetic and while loop to modulate number by
/  10 and add that value to the sum and then divides by ten to remove the last
/  digit in the number. Then uses modular arithmetic again to make sure the
/  sum is even
/
/  This function is of type void therfore there is no return statement.
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
void myInt::sumOfDigits(){
    
    int num = getMyInt();
    int sum = 0;
    while(num!=0)
    {
    sum = sum+num%10;
    num = num/10;
    }
    if(sum%2 == 0)
    {
        cout<<"B.  Sum of digits is even"<<endl;
    }
    else
    {
        cout<<"B.  Sum of digits is odd"<<endl;
    }
}
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
/ This function checks to see if the number entered is a perfect number.
/ if sum equals the number after iterating through the for loop then the value
/ is a perfect number.
/
/ No Paramters
/
/ This function is of type void therefore there is no return type.
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
void myInt::isPerfect(){
    int sum = 0;
    for(int i = 1 ; i < getMyInt(); i++)
        {
            if(getMyInt() % i == 0)
            {
                sum = sum + i;
            }
        }
                
        if(getMyInt() == sum)
        {
            cout <<"E.  " << getMyInt() << " is a Perfect Number\n";
        }
        else
        {
            cout <<"E.  " << getMyInt() << " is Not a Perfect Number\n";
        }
    }