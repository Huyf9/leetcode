#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int l = 0, r = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ' || s[i] == '\0') {
                r = i - 1;
                while (r > l) {
                    swap(s[r], s[l]);
                    r--;
                    l++;
                }
                l = i + 1;
            }
        }
        r = s.size() - 1;
        while (r > l) {
            swap(s[r], s[l]);
            r--;
            l++;
        }
        return s;
    }
};
