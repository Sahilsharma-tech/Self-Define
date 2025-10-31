#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int nums[1000];
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    
    bool sorted = true;
    for(int i = 1; i < n; i++){
        if(nums[i-1] > nums[i]){
            sorted = false;
            break;
        }
    }
    
    if(sorted){
        cout << "Array is sorted"; 
    }
    else{
        cout << "Array is not sorted";
    }
}