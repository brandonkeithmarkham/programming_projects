#include "my_int.cpp"

int main() {
    int userInteger;//Integer to be entered by the user.
    myInt integer1;//Class object of type myInt to call the private functions.
    char userChoice = 'Y';//Char to initalize program in while loop.
    
    //Prints initial greeting to prompt user through the program.
        cout<<"Welcome to my integer manipulation app!\n\n"
            <<"This program will take the integer input and do the following:\n\n"
            <<"A. Check to see if the integer is a multiple of 7, 11, or 13.\n"
            <<"B. Check to see if sum of the integer is even or odd.\n"
            <<"C. Determine the square root value of the integer.\n"
            <<"D. Determine if the integer is a prime number.\n"
            <<"E. Determine if the integer is a perfect number.\n\n\n";
    
    
        cout <<" Would you like to initiate the program?\n Select Y or N.\n";
        cin>> userChoice;
        cout<<endl;
    //Input validation statments.
    while(!cin || (userChoice != 'y' && userChoice!='Y' && userChoice!='n'&& userChoice!='N'))
    {
        cin.clear();
        cin.ignore(100, '\n');
        cout<<"Please enter valid input.\n";
        cin>>userChoice;
        cout<<endl;
    }
    
    //Gets user to enter the integer if choice is Y
    while(userChoice == 'Y'||userChoice =='y')
    {
    
        cout<<"Please enter an integer to be manipulated\n";
        cin >> userInteger;
        cout<<endl;
        //Input validation statement.
        while(!cin || userInteger<6)
        {
            cin.clear();
            cin.ignore(100, '\n');
            cout << "\nError\n\n"
                << "SELECT INTEGER VALUE GREATER THAN 6\n";
            cin>>userInteger;
            cout<<endl;
        }
        
        //Function Call to Call All Functions.
        integer1.setMyInt(userInteger);
        
        //Prompts user to play again.
        cout << "\nWould you like to try another integer?\nSelect Y or N \n";
        cin>>userChoice;
        
        //Input validation for user input.
        while(!cin || (userChoice != 'y' && userChoice!='Y' && userChoice!='n'&& userChoice!='N'))
        {
            cin.clear();
            cin.ignore(100, '\n');
            cout<<"Please enter valid input.\n";
            cin>>userChoice;
            cout<<endl;
        }
    }
    
    //Terminates program after user selects N||n
    if(userChoice == 'n' || userChoice == 'N')
        cout << "This program was implemented by Brandon Markham on September, 28th 2022\n";
        
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    return 0;
}
