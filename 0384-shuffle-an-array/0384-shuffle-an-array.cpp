class Solution {
public:
vector<int>v;
vector<int>temp;
    Solution(vector<int>& nums){
        v=nums;
        temp = nums;
    }
    vector<int> reset() {
        temp=v;
        return temp;
    }
    vector<int> shuffle() {
        for( int i=0;i<temp.size();i++){
            int x = rand()%(temp.size());
            swap(temp[x],temp[i]);
        }
        return temp;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */