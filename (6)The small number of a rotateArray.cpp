class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        if(rotateArray.empty()) return 0;
    	int length=rotateArray.size(),i=2,min=rotateArray[length-1];
        while(length>=i && rotateArray[length-i]<=min){
            min=rotateArray[length-i];
            i++;
        }
        return min;
    }
};