class Solution{
public:
    int getSecondLargest(vector<int> &arr){
        int mx1 = INT_MIN, mx2 = INT_MIN;     // Initialize largest and second largest

        for (int x : arr){
            if (x > mx1){                     // Update largest and shift current largest to second largest
                mx2 = mx1;
                mx1 = x;
            }
            else if (x > mx2 && x != mx1){     // Update second largest if it's unique
                mx2 = x;
            }
        }
        return mx2 != INT_MIN ? mx2 : -1;       // Return second largest or -1 if it doesn't exist
    }
};
