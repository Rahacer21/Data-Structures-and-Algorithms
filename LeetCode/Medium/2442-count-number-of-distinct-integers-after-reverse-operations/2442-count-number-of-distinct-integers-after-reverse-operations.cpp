class Solution {
public:
    int rev(int n){
        int num=0;
        while(n>0){
            num*=10;
            num+=n%10;
            n/=10;
        }
        return num;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> s;
        for(int i=0;i<n;i++){
            int num=rev(nums[i]);
            s.insert(num);
            s.insert(nums[i]);
        }
        return s.size();
    }
};