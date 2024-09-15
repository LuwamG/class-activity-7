// class activity 7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<iomanip>
using namespace std;


    int main()
    {
        string name[3];
        cout << "Enter three names: ";
       //for (int i = 0; i < 3; i++) {
            getline(cin, name[3]);
        //}
       cout << "The first name you entered is " << name[0] <<endl;
        
        return 0;
    }



