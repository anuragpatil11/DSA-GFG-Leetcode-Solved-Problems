class Solution {
public:
    int hammingWeight(int n) {
        string bin="";
        while(n!=0){
            int bit=n%2;
            bin+=bit;
            n=n/2;
        }
        int cnt=0;
        reverse(bin.begin(),bin.end());
        for(int i=0;i<bin.size();i++){
            if(bin[i]==1){
                cnt++;
            }
        }
        return cnt;
    }
};