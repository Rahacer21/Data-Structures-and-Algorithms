class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.length();
        int penalty=count(customers.begin(),customers.end(),'Y');
        int maxPenalty=penalty;
        int idx=0;
        for(int i=1;i<=n;i++){
            if(customers[i-1]=='Y') penalty--;
            else penalty++;
            if(penalty<maxPenalty){
                maxPenalty=penalty;
                idx=i;
            }
        }
        return idx;
    }
};