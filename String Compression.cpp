class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        string k;
        int ans;
        vector<char>ch;
        vector<int>no;
        char temp = chars[0];
        ch.push_back(temp);
        int count=1;
        for(auto i=1;i<n;i++)
        {
             if(chars[i]==temp)
             {
                 count++;
             }
             else
             {
                temp=chars[i];
                ch.push_back(temp);
                no.push_back(count);
                count=1;

             }
        }
        no.push_back(count);
       int l=ch.size();
        for(auto i=0;i<l; i++)
        {
            k+=ch[i];
            if(no[i]>1)
            {
              string h=to_string(no[i]);
              k+=h;
            }

        }
        ans=k.size();
        chars.resize(k.size());
        for(int i=0;i<ans;i++)
        {
            chars[i]=k[i];
        }

         return ans;
    }
};
