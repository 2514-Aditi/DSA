class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long rev=0,r;
        long long n=x;
        while(n!=0){
            r=n%10;
            rev=rev*10+r;
            n/=10;
        }
        return (x==rev);
    }
};
