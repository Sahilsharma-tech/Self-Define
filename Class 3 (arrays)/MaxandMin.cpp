#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int nums[1000];

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int max = INT_MIN; //we take max as INT_MIN to also cover instances where array values might be negative
    int min = INT_MAX; //we take max as INT_MAX to also cover instances where array values might be negative
    // upar dono mai first index ya 0 mat lena varna test cases fail hojayenge
    int index1 = 0; 
    int index2 = 0;

    for(int i = 0; i < n; i++) {
        if(nums[i] > max) {
            max = nums[i];
            index1 = i;
        }
        if(nums[i] < min) {
            min = nums[i];
            index2 = i;
        }
    }

    cout << "Max element is: " << max << " at index: " << index1 << endl;
    cout << "Min element is: " << min << " at index: " << index2 << endl;

    return 0;
}
