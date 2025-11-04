
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int nums[1000];
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int majority = 0;  

    for(int i = 0; i < n; i++) {
        int count = 0;

        for(int j = 0; j < n; j++) {
            if(nums[i] == nums[j]) {
                count++;
            }
        }

        if(count > n / 2) {
            majority = nums[i];
            break;  
        }
    }

    if(majority != 0){
        cout << "majority element: " << majority;
    }
    else{
        cout << "mo majority element";
    }

    return 0;
}
