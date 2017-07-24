Solution1:
class Solution {
public:
    int NumberOf1Between1AndN_Solution(int n)
    {
        int temp,count=0;
        for(int i=1;i<=n;i++){
            temp=i;
            while(temp){
                if(temp%10==1) count++;
                temp/=10;
            }  
        }
    	return count;
    }
};

solution2:
class Solution {
public:
    int NumberOf1Between1AndN_Solution(int n)
    {
        int a,b,count=0;
       for(int i=1;i<=n;i*=10){
           a=n/i; b=n%i;
           count+=(a+8)/10*i;
           if(a%10==1)
               count+=b+1;
       }
        return count;
    }
};