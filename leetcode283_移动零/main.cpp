#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size(), l = 0, r = 0;
        while (r < n) {
            if (nums[r]) {
                swap(nums[l], nums[r]);
                l++;
            }
            r++;
        }
        for (int i = 0; i < n+1; i++)
        {
            cout << nums[i] << ',';
        }
    }
};
