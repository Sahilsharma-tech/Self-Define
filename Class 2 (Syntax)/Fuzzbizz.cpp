#include <iostream> 
using namespace std;
int main () {
    int n;
    cin >> n;
    
    if(n % 3 == 0 and n % 5 == 0){
        cout << "Fizzbuzz" << endl;
    }
    else if(n % 3 == 0){
        cout << "Fizz" << endl;
    }
    else if(n % 5 == 0){
        cout << "Buzz" << endl;
    }
    else{
        cout << n << endl;
    }
}
