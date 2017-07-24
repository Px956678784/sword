#include<iostream>
#include <sstream> 
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
	static bool compare( const string &st1,const string &st2){
		string s1 = st1+st2;
		string s2 = st2+st1;
		return s1<s2;
	}
	string PrintMinNumber(vector<int> numbers) {
		string result;
		if(numbers.size()<=0)
		return result;
		vector<string> strNum;
		for(int i=0;i<numbers.size();i++ ){
			stringstream ss;
			ss<<numbers[i];
			string s = ss.str();
			strNum.push_back(s);
		}
		sort(strNum.begin(),strNum.end(),compare);
		for(int i=0;i<strNum.size();i++)	
			result.append(strNum[i]);
		return result;
	}
};
bool check[1000];
    int length;
    string min;
    string convert(const int num){
        stringstream ss;  
		ss<<num;  
		 return ss.str(); 
    }
    void findmax(vector<int> numbers,string chosed,int sum){
        if(sum==length){
            if(min=="")
                min=chosed;
            else{
				int j=0;
                while(chosed[j]==min[j])j++;
                    if(chosed[j]<min[j])
                        min=chosed;
			}
        }
        else{
            for(int i=0;i<length;i++)
                if(check[i]==false){
                    string temp;
                    temp=convert(numbers[i]);
                    chosed+=temp;
                    check[i]=true;
                    findmax(numbers,chosed,sum+1);
                    check[i]=false;
                    chosed.erase(chosed.length()-temp.length(),temp.length());
                }
            
        }
    }
int main(){
	vector<int>input;
	input.push_back(321);input.push_back(3);input.push_back(32);
	length=input.size();
	findmax(input,"",0);
	cout<<min;
	return 0;
}