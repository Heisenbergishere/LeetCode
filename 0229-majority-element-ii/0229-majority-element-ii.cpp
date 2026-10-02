class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>res;
        map<int,int>m;
        set<int>s;
        for( auto i : nums){
            m[i]++;
            if( m[i] >(nums.size()/3)   && !s.count(i)){
                res.push_back(i);
                s.insert(i);
            }
        }
        return res;
    }
};