class Solution {
public:
double multiply(double x, int n){
    if(n == 1){
        return x;
    }
    return x*multiply(x,n-1);
}
double divide(double x, int n){
    if(n == 1){
        return double(1/x);
    }
    return double(1/x)*divide(x,n-1);
}
    double myPow(double x, int n) {
        if(n > 0){
            return multiply(x,n);
        }
        else if (n < 0){
            return divide(x,-n);
        }
        else{
            return 1.0;
        }
    }
};