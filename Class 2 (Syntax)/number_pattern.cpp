#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i <= n; i++){ // this controls the number of rows
        for(int j = 0; j < i; j++){ // this controls the number of times to be printed in the row
            cout << i;
        }
    cout << endl; // moves to new line
    }
}
