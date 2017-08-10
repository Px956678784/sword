class Solution {
public:
    // Parameters:
    //        numbers:     an array of integers
    //        length:      the length of array numbers
    //        duplication: (Output) the duplicated number in the array number
    // Return value:       true if the input is valid, and there are some duplications in the array number
    //                     otherwise false
    bool duplicate(int numbers[], int length, int* duplication) {
        int *check;
        check=new int[length];
        for(int i=0;i<length;i++) check[i]=0;
        for(int i=0;i<length;i++){
            if(check[numbers[i]]>0){
                *duplication=numbers[i];
                return true;
            }
            else
                check[numbers[i]]++;
        }
        return false;
    }
};