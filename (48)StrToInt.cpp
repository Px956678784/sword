#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int StrToInt(string str) {
        int length=str.length();
        if(length==0)return 0;
        int i;
        	if(str[0]=='-' || str[0]=='+')        i=1;
        	else if(str[0]>='0' && str[0]<='9')   i=0;
            else return 0;
        int index,answer=0;
        	if(i==0) index=pow(10,length-1);
        	else    index=pow(10,length-2);
        while(i<length){
            if(str[i]>='0' && str[i]<='9')
                answer+=int(str[i]-'0')*index;
        	else return 0;
					cout<<answer<<endl;
            index/=10;
            i++;
        }
		if(str[0]=='-')answer-=2*answer;
        return answer;
    }
int main(){
	string x="123";
cout<<StrToInt(x)<<endl;
return 0;
}