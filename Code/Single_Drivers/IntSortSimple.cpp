#include <bits/stdc++.h>
#include <cmath>
using namespace std;



bool compareAbsolute(int i1, int i2) {
    
    bool isSmaller;
    if (abs(i1) < abs(i2)) {
        isSmaller = true;
        
    } else {
        isSmaller = false;
    }
    
    return isSmaller;
}


int main() {

    int arr[] = { -12, 0, -1, -5, -8, -9, -6, -7, -3, -4, -2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    sort(arr, arr + n, compareAbsolute);
    
    cout << "Array after sorting : \n";
    
    for (int i = 0; i < n; ++i)

        cout << arr[i] << " ";
    return 0;

}