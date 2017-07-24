#include<iostream>
#include<vector>
using namespace std;
    int findfirst(vector<int>data,int k,int low,int high){
        if(low==high){
            if(data[low]==data[high])
                return low;
       		else
                return -1;
        }
		else{
			int mid=(low+high)/2;
				cout<<"fuck"<<endl;
			if(k<=data[mid]) return findfirst(data,k,low,mid);
			else return findfirst(data,k,mid,high);
		}
    }
 int GetNumberOfK(vector<int> data ,int k) {
    	int length=data.size();
        if(length==0)return 0;
        int pos=findfirst(data,k,0,length-1);
        if(pos<0)return 0;
        int cnt=0;
        for(int i=pos;i<length && data[i]==k;i++)cnt++;
        return cnt-pos;
    }

int main(){
vector<int>data;
data.push_back(1);data.push_back(2);data.push_back(3);data.push_back(3);data.push_back(3);data.push_back(3);data.push_back(3);data.push_back(3);
cout<<GetNumberOfK(data,3)<<endl;
return 0;
}