#include "common.h"

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0, right = 0;

        int len = nums.size();

        while (right < len)
        {
            if (nums[right] != 0)
            {
                swap(nums[left], nums[right]);
                left++;
            }
            right++;
        }
    }
}solution;

int main() {
    vector<int> nums = { 4,2,4,0,0,3,0,5,1,0 };
    solution.moveZeroes(nums);

    for (auto num : nums)
    {
        cout << num << endl;
    }
    
}

/*
* 题目：
* 给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。
* 请注意 ，必须在不复制数组的情况下原地对数组进行操作。
* 
* 注意到：右指针左边直到左指针处均为零。
*
*/