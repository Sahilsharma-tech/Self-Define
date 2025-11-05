#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1000];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int x;
    cin >> x;

    int index = 0; 

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            index = i;
            break; 
        }
    }

    if (index != 0)
        cout << "first occurrence is at index " << index;
    else
        cout << "not found";
}
