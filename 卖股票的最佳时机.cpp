//贪心算法
class Solution {
public:
    int maxProfit(vector<int>& prices) {
    	int sult=0;
    	if(prices.empty())
    		return 0;
    	else{
    		for(int i=0;i+1<prices.size();i++){
    			if(prices[i]<prices[i+1])
    				sult+=(prices[i+1]-prices[i]);
    		}
    		return sult;
    	}
    }
};
