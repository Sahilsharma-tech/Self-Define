#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 

    int nums[1000];
    for(int i = 0; i < n - 1; i++) {
        cin >> nums[i];
    }

    int sum = 0;
    for(int i = 0; i < n - 1; i++) {
        sum = sum + nums[i];
    }

    int totalsum = n * (n + 1) / 2;
    int missing = totalsum - sum;

    cout << missing;
}
