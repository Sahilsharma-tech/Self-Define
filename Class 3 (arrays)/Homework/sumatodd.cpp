#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int sum = 0;
    for (int i = 1; i < n; i += 2){ 
        sum += arr[i];
    }

    cout << "Sum at odd indexes = " << sum;
}
