/*
整体旋转
局部旋转（前，后）
获得右移数组
*/
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    	reverse(nums.begin(),nums.end());
    	reverse(nums.begin(),nums.begin()+k%nums.size());
    	reverse(nums.begin()+k%nums.size(),nums.end());
    }
};
