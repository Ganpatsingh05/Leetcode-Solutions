class Solution {
public:
    double myPow(double x, int n) {
        double res  = 1;
        long long N = n;
        if(N < 0){
            x = 1/x;
            N = -N;

        }
        while(N > 0){
            if(N % 2 == 1){
                res *= x;
            }
            x *= x;
            N /= 2;
        } 
        return res;
    }
};