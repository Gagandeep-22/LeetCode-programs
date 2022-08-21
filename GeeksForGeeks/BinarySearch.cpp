class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        int low = 0;
        int high = n-1;
        int res = -1;
        int flag = false;
        while(low<=high) {
            int mid = (low+high)/2;
            if(arr[mid] == k) {
                flag = true;
                res = mid;
                break;
            }
            else if(k < arr[mid])
                high = mid-1;
            else 
                low = mid+1;
        }
        if(flag == true) 
            return res;
        return -1;
    }
};
