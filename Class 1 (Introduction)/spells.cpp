#include <iostream>
using namespace std;  // We have used this to prevent writing std:: every time

int main () {
    string spells[3]; // Declaring a String Array
  
    cout << "Enter the spells you want to use!!" << endl; // Asthetics ✨
    for(int i = 0; i < 3; i++){ // Since array starts with 0, we start the for loop with 0.
        cout << i+1 << ". "; // We did i+1 for Asthetics ✨. While printing, we want to print 1,2,3 rather than 0,1,2. Hence, we added 1 to i.
        cin >> spells[i]; // Taking input of spell (like scanf() in C)
    } 
    
    cout << "The Wizard uses -> " << endl; // Asthetics ✨
    for(int i = 0; i < 3; i++){ // Since array starts with 0, we start the for loop with 0.
        cout << "Spell " << i+1 << " -> " << spells[i] << endl; // We did i+1 for Asthetics ✨. While printing, we want to print 1,2,3 rather than 0,1,2. Hence, we added 1 to i.
    } // cout is used for output (like printf() in C)
    
    cout << "The Wizard won the battle!!"; // Jeetgye 🕺🕺
    return 0; // Indicates that the program runs successfully
}
