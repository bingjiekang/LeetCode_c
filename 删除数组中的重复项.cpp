class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    //没有排序的，可以用sort(nums.begin(),nums.end())排序
    	int i=0,j=1;
    	if (nums.empty())
    		return 0;
    	else{
	    	while(j<nums.size()){
	        	if(nums[i]==nums[j]){
	        		j++;
					continue;
	        	}
	        	else{
	        		i++;
	        		nums[i]=nums[j];
	        		j++;
	        	}
	        }
	        return i+1;
        }
    }
};
