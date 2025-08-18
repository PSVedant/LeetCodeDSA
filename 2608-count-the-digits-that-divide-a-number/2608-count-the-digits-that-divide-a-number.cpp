class Solution {
public:
    int countDigits(int num) 
    {
        int cnt=0;
        int val=num;
        int lastdigit;
        while(num>0)
        {
            lastdigit=num%10;
            if(lastdigit>0 && val%lastdigit==0)
            {
            cnt=cnt+1;
            }
            num=num/10;
        } return cnt;
    }
};