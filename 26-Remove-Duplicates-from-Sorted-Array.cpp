class Solution {
public:
    int removeDuplicates(vector<int>& nums){
    	int k=0;
        for(int i=0;i<nums.size()-1;i++){
        	if(nums[i]!=nums[i+1]){
        		nums[k]=nums[i];
				k++;
			}
			if(i==nums.size()-2){
        		nums[k]=nums[i+1];
				k++;
			}
        }
        if(nums.size()==1)
        	return k+1;
        return k;
    }
};