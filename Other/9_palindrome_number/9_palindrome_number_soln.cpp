// 9. Palindrome Number

class Solution {
public:
    bool isPalindrome(int x) {
        int copy_cat=x;
        long long rev=0;
        while(x>0){
            int lastdigit=x%10;
            x=x/10;
            rev=rev*10+lastdigit;
        }
        if(copy_cat==rev){
            return true;
        }
        return false;

        }
};
