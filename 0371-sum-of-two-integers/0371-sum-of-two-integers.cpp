class Solution {
public:
    
    int getSum(int a, int b) {
         int ogA = a;
        while((a&b)!=0){
            ogA=a;
            a=a^b;
            b=(ogA&b)<<1;
        }
        return a|b;
    }
};