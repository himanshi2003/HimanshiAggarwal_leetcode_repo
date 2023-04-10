class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        string s="";
        vector<string> tmp;
        vector<vector<string>> v;
        int size=strs.size();
        int arr[size];
        string a,b;
        int i,j;
        for(i=0;i<size;i++) arr[i]=0;
        for(i=0;i<size;i++)
        {
            if(arr[i]) continue;
            for(j=i+1;j<size;j++)
            {
                if(arr[j]) continue;
                if(strs[i].size()!=strs[j].size()) continue;
                else
                {
                    a=strs[i];
                    b=strs[j];
                    sort(a.begin(),a.end());
                    sort(b.begin(),b.end());
                    if(a==b) 
                    {
                        tmp.push_back(strs[j]);
                        arr[j]=1;
                    }
                }
            }
            tmp.push_back(strs[i]);
            v.push_back(tmp);
            tmp.clear();
            arr[i]=1;
        }
        return v;
    }
};