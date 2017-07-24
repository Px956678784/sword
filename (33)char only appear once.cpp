class Solution {
public:
    int FirstNotRepeatingChar(string str) {
        if(str=="") return -1;
        int checkbox[100]={0};
    	for(int i=0;i<str.length();i++){
            str[i]-=64;
            checkbox[int(str[i])]++;
        }
        for(int i=0;i<str.length();i++)
            if(checkbox[int(str[i])]==1)
                return i;
        return -1;
    }
};