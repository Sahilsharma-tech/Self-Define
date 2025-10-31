#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 
    int nums[1000];
    int reversed[1000];
    
    for(int i = 0; i < n; i++) {
        cin >> nums[i]; // input nums array
    }
    
    for(int i = 0; i < n; i++) {
        reversed[i] = nums[n - 1 - i]; //putting last element of nums array to first element of reversed array
    }
    
    for(int i = 0; i < n; i++) {
        cout << reversed[i] << " "; // output reversed array
    }
}
