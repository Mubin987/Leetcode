class Solution {
public:
    int removeElement(vector<int> &nums, int val) {
        int i=0;
        
        for(auto x=nums.begin();x!=nums.end();++x){
            if(*x==val){
                
                nums.erase(x);
                i++;
                x--;
            }
        }
        for(int j=0;j<i;j++)
			nums.push_back(val);	
        return nums.size()-i;
}
};