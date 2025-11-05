#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;          
    int arr[1000];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    bool counted[n] = {false}; // Frequence Array approach hoti hai, very useful.

    for (int i = 0; i < n; i++) {
        if (counted[i]){
        continue;
        } 

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                counted[j] = true;
            }
        }

        cout << arr[i] << " appears " << count << " times" << endl;
    }

    return 0;
}
