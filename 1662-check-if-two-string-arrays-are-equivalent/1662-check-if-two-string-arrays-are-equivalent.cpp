class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1="";
        string str2="";
        bool strEqual=false;
        for(int i=0;i<word1.size();i++){
            str1+=word1[i];
        }
        for(int i=0;i<word2.size();i++){
            str2+=word2[i];
        }
        if(str1==str2){
            strEqual=true;
        }
        else{
            strEqual=false;
        }
        return strEqual;
    }
};