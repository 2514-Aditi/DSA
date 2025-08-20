class Solution {
public:
    int reverse(int x) {
        long rev=0;
        int rem=0;
        while(x!=0){
            rem=x%10;
            rev=rev*10+rem;
            x/=10;
        }
        if(rev>INT_MAX || rev<INT_MIN) return 0; // check range if r is outside the range then return 0  
        return rev;
    }
};
