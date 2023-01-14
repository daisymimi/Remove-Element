https://leetcode.com/problems/remove-element/description/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    int duplicateCount = 0;
    int k = nums.size() - 1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (val == nums[i])
        {
            nums[i] = -1;
            duplicateCount++;
        }
    }
    if (duplicateCount == 0)
    {
        return nums.size();
    }
    if (duplicateCount == nums.size())
    {
        return 0;
    }
    int i = 0;
    while (i<( nums.size()- duplicateCount) )
    {
        if (nums[i] == -1)
        {
            if (nums[k] != -1)
            {
                nums[i] = nums[k];
                nums[k] = -1;
                //k--;
            }
            else
            {
                while (nums[k] == -1)
                {
                    k--;
                }
                nums[i] = nums[k];
                nums[k] = -1;
                //k--;
            }
        }
        i++;
    }
    return nums.size()-duplicateCount;
}
 
};
