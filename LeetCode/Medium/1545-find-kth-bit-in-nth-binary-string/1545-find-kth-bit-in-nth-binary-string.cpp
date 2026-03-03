class Solution {
public:
    string rev(string s){
        reverse(s.begin(),s.end());
        return s;
    }
    string invert(string s){
        string str="";
        for(char ch:s){
            if(ch=='0') str+="1";
            else str+="0"; 
        }
        return str;
    }
    char findKthBit(int n, int k) {
        vector<string> s;
        s.push_back("0");
        for(int i=1;i<n;i++){
            s.push_back(s[i-1]+"1"+rev(invert(s[i-1])));
        }

        return s[n-1][k-1];
    }
};
