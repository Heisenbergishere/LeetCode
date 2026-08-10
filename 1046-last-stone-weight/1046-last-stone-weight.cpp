class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for( int v : stones){
            pq.push(v);
        }
        while(  pq.size() >=2){
            int t1 = pq.top();
            pq.pop();
            int t2 = pq.top();
            pq.pop();
            if( t1 == t2){
                continue;
            }
            else {
                pq.push(abs(t1-t2));
            }
        }
        if( pq.size()==0)return 0;
        return pq.top();
    }
};