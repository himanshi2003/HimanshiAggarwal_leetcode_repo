class Solution {
public:
    bool isValid(vector<int>& piles,int h ,int mid){
        long long totalTime=0;
        for(int i=0;i<piles.size();i++){
            if(piles[i]%mid==0){
                totalTime +=piles[i]/mid;
            }
            else{
                totalTime +=piles[i]/mid+1;
            }

        }
        if(totalTime>h){
            return false;
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int ans=0;
        int s=1;
        int e=*max_element(piles.begin(),piles.end());
        int n=piles.size()-1;
        

        
        while(s<=e){
            int mid = s+(e-s)/2;
            if(isValid(piles,h,mid)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }

        }
        return ans;
    }
};