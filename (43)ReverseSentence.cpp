#include<iostream>    
#include<string>
#include<stack>
using namespace std;
string ReverseSentence(string str) {
    	stack<string> reverse;
        string word;
        int i=0;
        do{
            while(str[i]!=' ' && str[i]!='\0'){
			
                word+=str[i++];
            }
			cout<<word<<endl;
				system("pause");
            reverse.push(word);
            word="";
            if(str[i]==' ')i++;
        }while(str[i]!='\0');
        str="";
        while(!reverse.empty()){
            str=str+reverse.top()+' ';
            reverse.pop();
        }
        str.erase(str.length()-1,1);
        return str;
    }
int main(){
string test="I am a student";
cout<<ReverseSentence(test)<<endl;
}