class Solution {
public:
    int divide(int dividend, int divisor) {
        if((dividend>0)&&(divisor ==-1))
            return (-dividend); 
        else if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;
      

        long long c=0;
        long long a = abs((long long)dividend);
        long long b = abs((long long)divisor);
        while(a>=b){
            a-=b;
            c++;
        }
        if((dividend<0)!=(divisor<0))
            c=-c;
        return c;
    }
};