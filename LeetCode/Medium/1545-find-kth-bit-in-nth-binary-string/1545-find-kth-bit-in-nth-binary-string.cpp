class Solution {
public:
    char findKthBit(int n, int k) {
        int len=pow(2,n)-1;
        int mid=len/2;
        if(n==1) return '0';
        if(k==mid+1) return '1';
        else if(k<=mid){
            return findKthBit(n-1,k);
        }
        else{
            char ch=findKthBit(n-1,len-(k-1));
            return ch=='0'?'1':'0';
        }
    }
};