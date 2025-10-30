#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n - 1; i++){
        cout << " "; 
    }
    cout << "*";
    cout << endl;
    
    for(int rowno = 1; rowno <= n - 2; rowno++){
        for(int i = 0; i < n - rowno - 1; i++){
            cout << " ";
        }
        cout << "*";
        for(int i = 0; i < 2* rowno - 1; i++){
            cout << " ";
        }
        cout << "*";
        cout << endl;
    }
    
    for(int i = 0; i < 2*n - 1; i++){
        cout << "*";
    }
}
