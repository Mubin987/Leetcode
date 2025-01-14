class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i = m - 1; 
        int j = n - 1; 
        int k = m + n - 1; 
        
        while(j>=0 && i>=0){
            if(nums2[j]>=nums1[i]){
                nums1[k]=nums2[j];
                k--;
                j--;
            }
            else if(nums2[j]<nums1[i]){
                std::cout<<"in";
                nums1[k]=nums1[i];
                k--;
                i--;
            }
        }
        if(i==-1){
            while(k>=0){
                nums1[k]=nums2[j];
                k--;
                j--;
            }
        }
        else if(j==-1){
            while(k>=0){
                nums1[k]=nums1[i];
                k--;
                i--;
            }
        }
        // while (i >= 0 && j >= 0) {
        //     if (nums1[i] > nums2[j]) {
        //         nums1[k] = nums1[i];
        //         i--;
        //     } else {
        //         nums1[k] = nums2[j];
        //         j--;
        //     }
        //     k--;
        // }

        // while (j >= 0) {
        //     nums1[k] = nums2[j];
        //     j--;
        //     k--;
        // }

        // int *arr = new int[m+n];
        // int k = 0, j = 0;
        // for ( int i=0 ; i<m+n ; i++ ){
        //     if(nums1.size()==0){
        //         std::copy(nums2.begin(), nums2.end(), arr);
        //         break;
        //     }
        //     if(nums2.size()==0){
        //         std::copy(nums1.begin(), nums1.end(), arr);
        //         break;
        //     }
        //     if(nums1[k]<=nums2[j] && nums1[k]!=0){
        //         arr[i] = nums1[k];
        //         k++;
        //     }else{
        //         arr[i] = nums2[j];
        //         j++;
        //     }
        // }

        // if (nums1.size() != m + n || nums2.size() != n || m+n>1 || m+n>200)
        //     return;
        // int i = 0, temp = 0;
        // vector<int> sol;
        // sol = nums1;
        // do {
        //     temp = nums2.at(0);
        //     if ((temp >= nums1[i] && temp <= nums1[i + 1]) || 
        //         (temp >= nums1[i] && nums1[i + 1] == 0) || 
        //         (i >= m)) {
        //         sol.insert(nums1.begin() + i+1, temp);
        //         nums2.erase(nums2.begin());
        //     }
        //     i++;
        // } while (!nums2.empty());

        // Optional: Adjust nums1 size to prevent extra elements caused by insertion
        //nums1.resize(m + n);

        // for ( int i=0 ; i<m+n ; i++ ){
        //     cout<<arr[i];
        // }
        // std::copy(arr, arr + m+n, nums1.begin());
    }
};