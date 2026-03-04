class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==1){
                    bool flag=true;
                    for(int k=0;k<n;k++){
                        if(mat[i][k]==0) continue;
                        else if(j==k) continue;
                        else {
                            flag=false;
                            break;
                        }
                    }
                    for(int k=0;k<m;k++){
                        if(mat[k][j]==0) continue;
                        else if(i==k) continue;
                        else {
                            flag=false;
                            break;
                        }
                    }
                    if(flag==true) count++;
                }
            }
        }
        return count;
    }
};