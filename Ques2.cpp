#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter string : ";
    cin >> s;
    int len = s.length();
    char ch;
    for(int i = 0; i < len/2; i++)
    {
        ch = s[i];
        s[i] = s[len - 1- i];
        s[len - 1 - i] = ch;
    }
    cout << "Reversed string :  " << s;

    return 0;
}