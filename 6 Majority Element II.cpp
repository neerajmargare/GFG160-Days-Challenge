class Solution {
  public:
        // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> frequency;
        // Step 1: Count the frequency of each element
        for (int num : arr) {
            frequency[num]++;
        }
        // Step 2: Find elements with frequency > n/3
        vector<int> result;
        for (auto& pair : frequency) {
            if (pair.second > n / 3) {
                result.push_back(pair.first);
            }
        }
        // Step 3: Sort the result in increasing order
        sort(result.begin(), result.end());
        return result;
    }
};
