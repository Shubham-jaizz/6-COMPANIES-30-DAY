//in this question only point to see is only when the position ans character are not same 
// then count the number of that character in the map
class Solution {
public:
    string getHint(string secret, string guess) {
        int n=secret.size();
        int cntb=0,cntc=0;
        map<int,int> mp1;
        map<int,int> mp2;
        for(int i=0;i<n;i++)
        {
            if(secret[i]==guess[i])
                cntb++;
            else
            {
                mp1[secret[i]-'0']++;
                mp2[guess[i]-'0']++;
            }
            
        }
        for(auto it:mp1)
        {
            if(mp2[it.first]>0)
            cntc+=min(mp2[it.first],it.second);
        }
        string s="";
        s=to_string(cntb)+"A"+to_string(cntc)+"B";
        return s;
    }
};