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
        for(int i=1;i<length;i++)//temp���num1��num2�����ֵ
        	temp^=data[i];
        if(!temp) return;
        int index=0;
        while((temp&1)==0){//�ҵ���ֵ��һλΪ1�ģ�Ϊ1����num1����һλ�Ͽ϶���ͬ���ɴ��Ƿ�Ϊ1��ԭ�����Ϊ�������飬ÿ��������һ��num
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