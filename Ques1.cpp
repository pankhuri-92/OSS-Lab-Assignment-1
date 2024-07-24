#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    int total = 0;
    for(int i = 0; i < n; i++)
    {
        cout << i+1 << "th element = ";
        cin >> arr[i];
        total += arr[i];
    }
    cout << "Average of the integers = " << total/n;

    return 0;
}
