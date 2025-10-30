#include <iostream> 
using namespace std;
int main () {
    int n;
    cin >> n;    
    if(n % 3 == 0 and n % 5 == 0){ // Check for divisible by 3 and 5
        cout << "Fizzbuzz" << endl;
    }
    else if(n % 3 == 0){ // Check for divisible by 3
        cout << "Fizz" << endl;
    }
    else if(n % 5 == 0){ // Check for divisible by 5
        cout << "Buzz" << endl;
    }
    else{ // Print the number itself if not divisible by 3 or 5
        cout << n << endl;
    }
}
