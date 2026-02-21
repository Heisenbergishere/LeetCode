class Solution {
public:
    int bits(int n){
        int ans = 0;
        while(n){
            if(n % 2) ans++;
            n = n / 2;
        }
        return ans;
    }

    bool check(int n){
        if(n < 2) return false;            
        for(int i = 2; i * i <= n; i++){  
            if(n % i == 0) return false;
        }
        return true;
    }

    int countPrimeSetBits(int left, int right) {
        int ans = 0;
        while(left <= right){              
            if(check(bits(left))) ans++;
            left++;
        }
        return ans;
    }
};