#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int l = 0, r = s.size() - 1;
        int temp;
        while (l < r) {
            temp = s[l];
            s[l] = s[r];
            s[r] = temp;
            l++; r--;
        }
        for (int i = 0; i < s.size(); i++)
        {
            cout << s[i] << ',';
        }
    }
};
