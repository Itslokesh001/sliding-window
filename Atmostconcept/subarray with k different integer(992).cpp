class Solution {
    int k1(vector<int>&nums,int k){
         unordered_map<int,int>freq;
        int l=0;
        int cnt=0;
        for(int r=0;r<nums.size();r++){
            freq[nums[r]]++;
            while(freq.size()>k){
                freq[nums[l]]--;
                if(freq[nums[l]]==0){
                    freq.erase(nums[l]);
                }
                l++;
            }
            cnt+=r-l+1;
        }
        return cnt;
    }
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
       return k1(nums,k)-k1(nums,k-1);
    }
};
