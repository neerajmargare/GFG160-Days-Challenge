//2.Move All Zeroes to End

class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int j = 0; // Pointer to place the next non-zero element

        // Move all non-zero elements to the beginning of the array
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] != 0) {
                arr[j] = arr[i]; 
                j++; 
            }
        }
        // Fill the remaining positions with zeros
        for (; j < arr.size(); j++) {
            arr[j] = 0;
        }
    }
};
