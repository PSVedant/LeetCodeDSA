class Solution {
public:
    int maximum69Number (int num) {
        string s=to_string(num);//used to convert integer to string
        for(int i=0;i<s.size();i++)//loop
        {
            if(s[i]=='6'){
                s[i]='9';//changes 6 to 9
                break;// as atleast one is given so breaks the loop
            }
        }
        return stoi(s);//string to list
    }
};