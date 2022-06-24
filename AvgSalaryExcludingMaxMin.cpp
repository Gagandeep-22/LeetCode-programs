class Solution {
public:
    double average(vector<int>& salary) {
        double sum = 0;
        double avg = 0;
        int largest = INT_MIN;
        int smallest = INT_MAX;
        for( int i = 0; i<salary.size(); i++)
        {
            sum+=salary[i];
            if(salary[i]>largest)
                largest = salary[i];
            if(salary[i]<smallest)
                smallest = salary[i];
        }
        sum=sum-largest-smallest;
        avg = sum/(salary.size()-2);
        return avg;
    }
};
