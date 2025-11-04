#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int nums[1000];
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 1; j < n; j++){
            if(nums[j-1] > nums[j]){
                swap(nums[j-1], nums[j]);
            }
        }
    }
    
    int smallest = nums[0];
    int largest = nums[n-1];
    
    int profit = largest - smallest;
    cout << profit << endl;
    
    
}
