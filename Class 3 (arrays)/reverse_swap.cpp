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
