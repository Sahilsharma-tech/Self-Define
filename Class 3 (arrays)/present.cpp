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
            found = true; //if number is present change the boolean value of present to true and then break out
            index = i; 
            break;     
        }
    }

    if(found) { // check if found is true or false, if true, print the if statement and if false, print the else statement
        cout << "Element present at index: " << index << endl;
    } else {
        cout << "Element is not present";
    }
}

