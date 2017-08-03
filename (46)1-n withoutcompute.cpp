class Solution {
public:
    int Sum_Solution(int n) {
        if(n==1)
            return 1;
    int sum;
        sum=n+Sum_Solution(n-1);
    	return sum; 
    }
};