#include<iostream>
#include<string>
#include<vector>
using namespace std;
	vector<string>answer;
 bool check[10]={false};
 string model;
	void PermutationHelp(string curr){
        int length=model.length();
        if(curr.length()==length){
			
            bool flag=true;
            for(int i=0;i<answer.size();i++)
                if(curr==answer[i]){
                    flag=false;break;
                }
            if(flag==true)
                answer.push_back(curr);
        }
        else{
            for(int i=0;i<length;i++){
                if(check[i]==false){
                    curr+=model[i];
                    check[i]=true;
                    PermutationHelp(curr);
                    check[i]=false;
                    curr.erase(curr.length()-1);
                }
            }
        }
        
    }
int main(){
	string str;
	cin>>str;
    model=str;
    PermutationHelp("");
	for(vector<string>::iterator it=answer.begin();it<answer.end();it++)
		cout << *it << " ";
	return 0;
}