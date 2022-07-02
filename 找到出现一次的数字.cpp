// ^ 任意一个数与0异或是本身 A^B^A = B 相同为0 与顺序无关
class Solution {
public:
    int singleNumber(vector<int>& nums) {
    	int sult=0;
    	for(int i=0;i<nums.size();i++){
    		sult^=nums[i];
    	}
    	return sult;
    }
};
