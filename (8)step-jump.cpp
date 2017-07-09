class Solution {
public:
    int jumpFloor(int number) {
       	int Fi[1000]={1,1};
        for(int i=2;i<=number;i++)
            Fi[i]=Fi[i-1]+Fi[i-2];
         return Fi[number];
    }
};