#include <bits/stdc++.h>
using namespace std;
 
// Function to check whether string is a palindrome or not

string isPalindrome(string s)
{
    
    for (int i = 0; i < s.length() / 2; i++) {
 
       
        if (s[i] != s[s.length() - i - 1]) {
            
            return "No";
        }
    }
    
    return "Yes";
}
 

int main()
{
    string s = "HLLH";
    cout << isPalindrome(s);
 
    return 0;
}
