class Solution {
public:
    int maximumWhiteTiles(vector<vector<int>>& arr, int k) {
        sort(arr.begin(), arr.end());

        int n = arr.size();
        int ans = 0;
        int cover = 0;
        int j = 0;
        for (int i = 0; i < n; i++) {
            while (j < n && arr[j][1] < arr[i][0] + k) {
                cover += arr[j][1] - arr[j][0] + 1;
                j++;
            }
            int curr = cover;
            if (j < n && arr[j][0] < arr[i][0] + k) {
                curr += arr[i][0] + k - arr[j][0];
            }
            ans = max(ans, curr);
            cover -= arr[i][1] - arr[i][0] + 1;
        }

        return ans;
    }
};