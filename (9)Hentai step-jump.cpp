class Solution {
public:
    int jumpFloorII(int number) {
       	int Fi[1000]={0};
        Fi[0]=Fi[1]=1;
        for(int i=2;i<=number;i++)
            for(int j=1;j<=i;j++)
            	Fi[i]+=Fi[i-j];
         return Fi[number];
    }
};