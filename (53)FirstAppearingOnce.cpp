class Solution
{
private:
    map<char,int> hash;
    vector<char> string1;
public:
  //Insert one char from stringstream
    void Insert(char ch)
    {
        string1.push_back(ch);
         hash[ch]++;
    }
  //return the first appearence once char in current stringstream
    char FirstAppearingOnce(){
        int length=string1.size();
        if(length==0)return '#';
    for(int i=0;i<length;i++){
        if(hash[string1[i]]==1)
            return string1[i];
    }
        return '#';
    }

};