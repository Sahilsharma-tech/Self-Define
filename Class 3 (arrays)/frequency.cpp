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
        if(nums[i] == x) { //if number we want to chekc frequency for is present, increase count
            count++;
        }
    }

    cout << "Frequency of " << x << " = " << count << endl;

}

