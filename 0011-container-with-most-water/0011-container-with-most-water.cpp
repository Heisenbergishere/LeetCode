using namespace std ;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater=0;
        int lp = 0;
        int rp = height.size()-1; 
        while ( lp < rp ) {
            int width = rp - lp;
            int height1 = min ( height[lp], height[rp]);
            int area = height1*width ;
            maxwater = max( maxwater , area) ;
            height[lp] < height[rp] ? lp++ : rp --;

           }
           return maxwater;
    }
    
};