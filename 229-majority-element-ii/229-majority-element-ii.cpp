class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
     int n=nums.size();
        int count1=0,count2=0;
        int maj1=INT_MAX,maj2=INT_MAX;
        vector<int> res;
        for(int i=0;i<n;i++){
            if(maj1==nums[i]) count1++;
            else if(maj2==nums[i]) count2++;
            else if(count1==0){
                maj1=nums[i];
                count1=1;
            }
            else if(count2==0){
                maj2=nums[i];
                count2=1;
            }else{
                count1--;
                count2--;
            }
        }
        
        int cnt1=0;
        int cnt2=0;
        
        for(int i=0;i<n;i++){
            if(nums[i]==maj1) cnt1++;
            else if(nums[i]==maj2) cnt2++;
        }
        if(cnt1>n/3) res.push_back(maj1);
        if(cnt2>n/3)  res.push_back(maj2);
        
        return res;
        
    }
};