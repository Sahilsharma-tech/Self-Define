#include <iostream>
using namespace std;
int main () {
    int n; 
    cin >> n; 
    int nums[1000];
    
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    
    int sum = 0;
    
    for(int i = 0; i < n; i++){
        sum = sum + nums[i]; 
    }
    
    cout << "Sum of all elements : " << sum << endl;
}