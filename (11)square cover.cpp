class Solution {
public:
    int rectCover(int number) {
		if(number==0) return 0;
        else{
            int num[1000]={1,1};
            for(int i=2;i<=number;i++)
                num[i]=num[i-1]+num[i-2];
            return num[number];
        }
    }
};