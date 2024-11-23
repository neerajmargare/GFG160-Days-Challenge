//Minimize the Heights I

class Solution {
public:
    int getMinDiff(int k, vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        // If there's only one tower, no change is needed
        if (n == 1) return 0;
        int ans = arr[n - 1] - arr[0];
        // calculating the possible minimum difference
        for (int i = 1; i < n; i++) {
            int minHeight = min(arr[0] + k, arr[i] - k);  // New shortest height
            int maxHeight = max(arr[n - 1] - k, arr[i - 1] + k);  // New tallest height
            //  Update the minimum difference
            ans = min(ans, maxHeight - minHeight);
        }

        return ans;
    }
};
