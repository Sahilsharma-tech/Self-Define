#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int rowno = 1; rowno <= n; rowno++){
        for(int i = 0; i < n - rowno; i++){
            cout << " ";
        }
        for(int i = 0; i < rowno; i++){
            cout << "* ";
        }
        cout << endl;
    }
}
