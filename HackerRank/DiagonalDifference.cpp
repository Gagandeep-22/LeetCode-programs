int diagonalDifference(vector<vector<int>> arr) {
    int leftDiag = 0;
    int rightDiag = 0;
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        leftDiag += arr[i][i];
        rightDiag += arr[i][n-i-1];
    }
    return abs(leftDiag-rightDiag);
}
