class Solution {
public:
    vector<int> f(vector<int>& nums){
        stack<int> st;
        int n=nums.size();
        vector<int> ans(n);
        ans[n-1]=-1;
        st.push(nums[n-1]);
        for(int i=n-2;i>=0;i--){
            while(!st.empty() && nums[i]>=st.top()) st.pop();
            if(st.empty()) ans[i]=-1;
            else{
                ans[i]=st.top();
            }
            st.push(nums[i]);
        }
        return ans;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nge=f(nums2);
        vector<int> ans;

        unordered_map<int,int> mp;
        for(int i=0;i<nums2.size();i++){
            mp[nums2[i]]=i;
        }


        for(int i=0;i<nums1.size();i++){
            ans.push_back(nge[mp[nums1[i]]]);
        }
        return ans;
    }
};