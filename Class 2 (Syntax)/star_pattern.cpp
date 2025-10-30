#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i <= n; i++){ // this loop controls the number of rows
        for(int j = 0; j < i; j++){ // this loop controls the number of stars
            cout << "*";
        }
    cout << endl; // move to new line
    }
}
