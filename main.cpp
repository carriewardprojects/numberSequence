// A simple C++ program that utilizes a while loop
// Created by Carrie Ward on 8/12/17


#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int i = 1, d = 1, even = 0, odd = 1, num1, num2, num3, num4;
    
    // Request a number from the user
    cout << "\nType an integer value and press ENTER: ";
    
    // Store the user value
    cin >> num1;
    
    cout << "\n";
    
    // Create a while loop that prints a series of incrementing numbers
    while (i <= num1){
        cout << i << " ";
        i++;
    }
    
    cout << "\n";
    
    // Request a number from the user
    cout << "\nType a second integer value and press ENTER: ";
    
    // Store the user value
    cin >> num2;
    
    cout << "\n";
    
    // Create a while loop that prints a series of decrementing numbers
    while (num2 >= d){
        cout << num2 << " ";
        num2--;
    }
    
    cout << "\n";
    
    // Request a number from the user
    cout << "\nType an integer value and press ENTER: ";
    
    // Store the user value
    cin >> num3;
    
    cout << "\n";
    
    // Create a while loop that prints a series of even numbers only
    while (even <= num3){
        if (even % 2 == 0){
            cout << even << " ";
        }
        even++;
    }
    
    cout << "\n";
    
    // Request a number from the user
    cout << "\nType an integer value and press ENTER: ";
    
    // Store the user value
    cin >> num4;
    
    cout << "\n";
    
    // Create a while loop that prints a series of odd numbers only
    while (odd <= num4){
        if (odd % 2 != 0){
            cout << odd << " ";
        }
        odd++;
    }
    
    cout << "\n\n";
    
    return 0;
}
