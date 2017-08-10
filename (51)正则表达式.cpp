class Solution {
public:
    bool match(char* str, char* pattern){
        if(str==NULL || pattern==NULL)
            return false;
        else
            return stepmatch(str,pattern);
    }
    bool stepmatch(char* str,char *pattern){
        if(*pattern=='\0'){
            if(*str=='\0')
            	return true;
        	else
                return false;
        }
        if(*(pattern+1)=='*'){
            if(*str==*pattern || (*pattern=='.' && *str!='\0'))
               return stepmatch(str+1,pattern) || stepmatch(str,pattern+2);
            else
               return stepmatch(str,pattern+2);
        	
        }
        if(*str==*pattern || (*pattern=='.' && *str!='\0'))
            return stepmatch(str+1,pattern+1);
        return false;
    }
};