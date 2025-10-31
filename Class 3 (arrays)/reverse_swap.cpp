#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 
    int nums[1000];

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    for(int i = 0; i < n/2; i++){ //idhar half array tak chalana yaad rakhna, agar full array chalaoge toh same vapas print hojayega because vo swapped values pe firse work krna shuru krdega to bring them back to their original position.
        swap(nums[i], nums[n-i-1]);
    }
    
    for(int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }        
}

/*
Here is the working to how the swapping will work.
Lets say array is 1 2 3 4 5,
after first step => 5 2 3 4 1 
after second step -> 5 4 3 2 1
for this case, n/2 = 5/2 = 2.5 which will be taken as 2 since int/int always gives int.
Now, if you run this till n, instead of n/2, 
third step -> 5 2 3 4 1 
fourth step -> 1 2 3 4 5
This will return the array to its original position, hence, always remember to run till HALF.
*/
