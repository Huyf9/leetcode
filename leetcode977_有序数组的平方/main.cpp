#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//双指针 归并排序
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size(), 0); //vector的大小，并将其元素全部初始化为0
        int i = 0, j = nums.size() - 1;
        int k = j;
        while (i <= j) {
            if (nums[i] * nums[i] < nums[j] * nums[j]) {
                ans[k--] = nums[j] * nums[j];
                j--;
            }
            else{
                ans[k--] = nums[i] * nums[i];
                i++;
            }
        }
        return ans;
    }
};
