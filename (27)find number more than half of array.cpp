Method I:
#define MAX 0xfffffff
class Solution {
    int hash[1000]={0};
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        int length=numbers.size();
        for(int i=0;i<length;i++){
            hash[numbers[i]]++;
        	if(hash[numbers[i]]>length/2)
                    return numbers[i];
        }
    	return 0;
    }
};

Method II:
class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        int length=numbers.size();
        if(length==0)return 0;
        int now=numbers[0];
        int time=1;
        for(int i=1;i<length;i++){
            if(time==0){
                now=numbers[i];
                time=1;
            }
        	else if(numbers[i]==now)
                time++;
            else
                time--;
        }
        time=0;
        for(int i=0;i<length;i++)
            if(numbers[i]==now)
                time++;
        return (time>length/2)?now:0;
    }
};