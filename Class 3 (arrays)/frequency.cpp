#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;       
    int nums[1000];
    
    for(int i = 0; i < n; i++) {
        cin >> nums[i]; 
    }

    int x;
    cin >> x;          

    int count = 0;
    for(int i = 0; i < n; i++) {
        if(nums[i] == x) {
            count++;
        }
    }

    cout << "Frequency of " << x << " = " << count << endl;
}