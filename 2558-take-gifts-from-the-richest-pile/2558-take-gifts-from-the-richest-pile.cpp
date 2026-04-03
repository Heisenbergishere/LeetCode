class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        while(k--){
            int mn =INT_MIN;
            int idx=-1;
            for( auto  i =0;i<gifts.size();i++){
                if( gifts[i] >  mn){
                    idx =i;
                    mn =gifts[i];
                }
            }
            gifts.push_back(sqrt(gifts[idx]));
            gifts.erase(gifts.begin()+idx);
        }
        return accumulate(gifts.begin(),gifts.end(),0LL );
    }
};