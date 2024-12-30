class Solution {
public:
    double eps = 1e-6;
    
    int mySqrt(double x) {
        if ( x == 0 ) 
            return 0;
        
        double lo = 1;
        double hi = x;
        double mid;
        while ( hi - lo > eps){
            mid = (hi+lo)/2;
            if ( mid * mid < x ){
                lo = mid;
            }
            else {
                hi = mid;
            }
        }
           return hi;
    }
};