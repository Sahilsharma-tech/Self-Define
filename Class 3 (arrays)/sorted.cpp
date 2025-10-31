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
    for(int i = 1; i < n; i++){ // we started this array from 1, to pervent going out of bounds while writing the next check
        if(nums[i-1] > nums[i]){ // ye check ko dhyaan se dekho, i-1 and i ko compare krra hai. i-1 in this case will be 0 for first loop, hence this method works.
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
