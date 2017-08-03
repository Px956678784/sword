class Solution {
public:
    bool IsContinuous( vector<int> numbers ) {
        int length=numbers.size();
        if(length==0) return false;
        bool check[14]={false};
        int jocker=0;
        for(int i=0;i<length;i++)
            if(numbers[i]==0)
                jocker++;
        	else
                check[numbers[i]]=true;
        int i=0;
        while(i<14 && check[i]==false) i++;
        for(int j=i;j<14 && j<i+length;j++){
            if(check[j]==false)
                if(jocker>0)jocker--;
            	else return false;
        }
        return true;
    }
};