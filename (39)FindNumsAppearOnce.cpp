class Solution {
    bool divide(int test,int index){
        test=test>>index;
        return (test&1);
    }
public:
    void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) {
        int length=data.size();
        if(length<2) return;
        int temp=data[0];
        for(int i=1;i<length;i++)//temp存放num1和num2的异或值
        	temp^=data[i];
        if(!temp) return;
        int index=0;
        while((temp&1)==0){//找到该值第一位为1的，为1代表num1在这一位上肯定不同，由此是否为1将原数组分为两个数组，每个数组有一个num
        	temp=temp>>1;
        	index++;
        }
        for(int i=0;i<length;i++){
            if(divide(data[i],index))
                *num1^=data[i];
            else
                *num2^=data[i];
        }
    }
};