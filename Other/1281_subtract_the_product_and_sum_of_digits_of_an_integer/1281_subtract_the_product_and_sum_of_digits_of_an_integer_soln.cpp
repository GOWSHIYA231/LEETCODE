// 1281. Subtract the Product and Sum of Digits of an Integer

class Solution {
public:
    int subtractProductAndSum(int n) {
        long long digits=1;
        int digi=0;
        int result;
        while(n>0){
            int digit=n%10;
            n=n/10;
             digits=digit*digits;
             digi=digit+digi;
             result=digits-digi;
        }
       
        return result;
    }
};
