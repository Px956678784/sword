class Solution {
public:
    double Power(double base, int exponent) {
        long long index=abs((long long)exponent);
        double answer=1.0;
        while(index){
           if(index & 1)answer*=base;
          base*=base;
           index=index>>1;
        }
        return exponent<0 ? 1/answer: answer;
    }
};