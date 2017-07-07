class Solution {
public:
	void replaceSpace(char *str,int length) {
    for(int i=0;i<length;i++){
    	if(str[i]==32){
      		for(int j=length;j>i;j--)
                str[j+2]=str[j];
            str[i]='%';
            str[i+1]='2';
            str[i+2]='0';
        }
    }
	}
};