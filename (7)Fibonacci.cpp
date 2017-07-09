class Solution {
public:
    int Fibonacci(int n) {
    	int Fi[50]={0,1};
        for(int i=2;i<=n;i++)
            Fi[i]=Fi[i-1]+Fi[i-2];
         return Fi[n];
    }
};