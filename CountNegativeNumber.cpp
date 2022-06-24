class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for(int i = 0; i<grid.size(); i++)
        {
            for(int j = 0; j<grid[i].size(); j++)
            {
                if(grid[i][j]<0)
                    count++;
            }
        }
        return count;
    }
};

//Another approach. 

// class Solution {
// public:
//     int countNegatives(vector<vector<int>>& grid) {
//         int count = 0;
//         int m = grid.size()-1;
//         int n = grid[0].size()-1;
//         while(m>=0)
//         {
//             if(n>=0)
//             {
//                 if(grid[m][n]<0)
//                 {
//                     count++;
//                     n--;
//                 }
//                 else
//                 {
//                     m--;
//                     n = grid[0].size()-1;
//                 }
//             }
//             else
//             {
//                 n = grid[0].size()-1;
//                 m--;
//             }
//         }
//         return count;
//     }
// };
