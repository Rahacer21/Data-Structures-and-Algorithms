class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int n=satisfaction.size();
        sort(satisfaction.begin(),satisfaction.end());
        vector<int> suffix(n);
        suffix[n-1]=satisfaction[n-1];
        for(int i=n-2;i>=0;i--){
            suffix[i]=suffix[i+1]+satisfaction[i];
        }
        int idx=-1;
        for(int i=0;i<n;i++){
            if(suffix[i]>=0){
                idx=i;
                break;
            }
        }
        if(idx==-1) return 0;
        int maxSum=0;
        int t=1;
        for(int i=idx;i<n;i++){
            maxSum+=satisfaction[i]*t;
            t++;
        }
        return maxSum;
    }
};