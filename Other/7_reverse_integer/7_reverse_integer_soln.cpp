// 7. Reverse Integer

class Solution {
public:
    int reverse(int x) {
     long long rev=0;
        
        while(x){
            int lastdigit=x%10;
            x=x/10;
            rev=(rev*10)+lastdigit;
        }
          if (rev < INT_MIN || rev > INT_MAX) {
            return 0;
        }

        return rev;
    }
 
};
