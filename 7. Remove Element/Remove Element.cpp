/* Que Link: 
https://leetcode.com/problems/remove-element/
*/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>vec;
    for(int i=0;i<nums.size();i++)
    {
         if(nums[i]!=val)
         {
            vec.push_back(nums[i]);
         }
    }
    for(int i=0;i<vec.size();i++)
    {
        nums[i]=vec[i];
    }
    return vec.size();
    }
};