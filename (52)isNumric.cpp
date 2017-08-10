class Solution {
    bool isnum(char ch){
        if(ch<='9' && ch>='0')
            return true;
        else
            return false;
    }
public:
    bool isNumeric(char* string){
        int length=strlen(string),i=0,point=0,nume=0,num=0;
        if(length==0)return false;
        if(string[i]=='+' || string[i]=='-') i++;
        while(i<length){
            if(isnum(string[i])){
                num++;
                i++;
            }
            else if(string[i]=='.'){
                if(nume>0)
                    return false;
                point++;
                i++;
            }
            else if(string[i]=='e' || string[i]=='E'){
                if(nume>0 || num==0)
                    return false;
                nume++;
                i++;
                if(string[i]=='+' || string[i]=='-') i++;
                if(string[i]=='\0')
                    return false;
            }
            else
                return false;
        }
        if(point>1 || nume>1)
            return false;
        return true;
    }

};