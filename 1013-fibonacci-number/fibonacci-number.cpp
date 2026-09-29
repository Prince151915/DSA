class Solution {
private:
     int fiboni(int x){
        if(x==0 || x==1){
            return x;
        }
        return fiboni(x-1)+fiboni(x-2);
     }
public:
    int fib(int n) {
       int r=fiboni(n);
        return r;
    }
};