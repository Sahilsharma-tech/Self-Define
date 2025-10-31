#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int nums[1000];
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int num;
    cin >> num;

    bool found = false;
    int index;
    for(int i = 0; i < n; i++) {
        if(nums[i] == num) {
            found = true;
            index = i; 
            break;     
        }
    }

    if(found) {
        cout << "Element present at index: " << index << endl;
    } else {
        cout << "Element is not present";
    }
}
