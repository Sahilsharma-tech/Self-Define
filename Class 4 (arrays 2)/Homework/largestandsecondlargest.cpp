#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[1000];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int largest = arr[0];
    int second = INT_MIN;  

    for (int i = 1; i < n; i++) {
        (arr[i] > largest) ? 
            (second = largest, largest = arr[i]) : 
            (arr[i] > second && arr[i] != largest ? second = arr[i] : second);
    }

    cout << "Largest = " << largest << endl;
    cout << "2nd Largest = " << second << endl;

}
/* 
arr[i] > largest
Yeh check karta hai ki current element (arr[i]) kya ab tak ke largest number se bada hai?
Agar haan, toh:
(second = largest, largest = arr[i])
Pehle second ko purana largest bana dete hain
Fir largest ko update karte hain arr[i] se (kyunki naya bada number mil gaya)
Agar upar wali condition false ho (naya number sabse bada nahi hai)
To : ke baad wali part chalegi 
(arr[i] > second && arr[i] != largest ? second = arr[i] : second)
Iska matlab:
Agar arr[i] second se bada hai
aur wo largest ke barabar nahi hai,
to second = arr[i] kar do.
Nahi to kuch mat karo (second wahi ka wahi rahega).
*/



