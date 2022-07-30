class Solution {
public:
   int trap(vector<int>& height) {
    int leftPointer = 0;
    int rightPointer = height.size() - 1;
    int leftMax = height[leftPointer];
    int rightMax = height[rightPointer];
    int ans = 0;
    while(leftPointer <= rightPointer) {
        if(leftMax < rightMax) {
            leftMax = max(leftMax , height[leftPointer]);
            ans += leftMax - height[leftPointer];
            leftPointer++;
        } 
        else {
            rightMax = max(rightMax , height[rightPointer]);
            ans += rightMax - height[rightPointer];
            rightPointer--;
        }
    }
       return ans;
   }
                   
};
