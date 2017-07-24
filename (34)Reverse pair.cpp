class Solution {
public:
    int InversePairs(vector<int> data) {
        int length=data.size();
        if(length==0)return 0;
        vector<int> temp(data);
         for(int j=0;j<=length;j++)
            temp[j]=data[j];
        return mergsort(data,temp,0,length-1);
    }
    int mergsort(vector<int> &data,vector<int> &temp,int low,int high){
        if(low>=high)return 0;
        int mid=(low+high)/2;
        int leftcount=mergsort(temp,data,low,mid)%1000000007;
        int rightcount=mergsort(temp,data,mid+1,high)%1000000007;

        int fore=mid,back=high,i=high,count=0;
        while(fore>=low && back>mid){
            if(data[fore]>data[back]){
                temp[i--]=data[fore--];
                count+=back-mid;
                if(count>=1000000007) count%=1000000007;
            }
            else
                temp[i--]=data[back--];
        }
        while(fore>=low)
            temp[i--]=data[fore--];
        while(back>mid)
            temp[i--]=data[back--];
        return (leftcount+rightcount+count)%1000000007;
    }
};