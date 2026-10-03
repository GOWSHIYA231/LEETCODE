// 1952. Three Divisors

class Solution {
public:
    bool isThree(int n) {
        int div=0;
        for(int d=1;d<n+1;d++){
            if(n%d==0){
                div++;
            }
        }
        if(div==3){
        return true;
        }
        return false;
    }
};
