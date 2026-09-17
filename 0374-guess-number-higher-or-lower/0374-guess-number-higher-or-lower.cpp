class Solution {
public:
    int guessNumber(int n) {
        int low = 1, high = n;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            int num = guess(mid);
            if(num == 0)
                return mid;
            else if(num == -1)
                high = mid - 1;
            else 
                low = mid + 1;
        }
        return -1;
    }
};