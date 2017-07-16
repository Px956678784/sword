#include<iostream>
#include<vector>
using namespace std;  
bool judge(vector<int> a,int left,int right){
		if(left>=right) return true;
        int i=left;
        while(i<right && a[i]<a[right]) i++;
        for(int j=i;j<right;j++)
            if(a[j]<a[right])
                return false;
        return judge(a,left,i-1) && judge(a,i,right-1);
 }
 bool VerifySquenceOfBST(vector<int> sequence) {
        int length=sequence.size();
        if(length==0) return false;
        return judge(sequence,0,length-1);
 }
 int main(){
	vector<int> test;
	test.push_back(1);test.push_back(3);test.push_back(2);test.push_back(5);test.push_back(8);test.push_back(7);test.push_back(6);test.push_back(4);
	cout<<VerifySquenceOfBST(test)<<endl;
	return 0;
 }