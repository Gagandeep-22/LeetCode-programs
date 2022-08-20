class Solution{
    public:

    //Function to check if two arrays are equal or not.
    
    //BY SORTING THE ARRAYS -> TC - O(NLOGN) and SC - O(1)
    
    // bool check(vector<ll> A, vector<ll> B, int N) {
    //     sort(A.begin(), A.end());
    //     sort(B.begin(), B.end());
        
    //     for(int i = 0; i < N; i++)
    //     {
    //         if(A[i] != B[i]) return false;
    //     }
    //     return true;
    // }
    
    //BY USING HASMAPS -> TC - O(N) and SC - O(N)
    bool check(vector<ll> A, vector<ll> B, int N) {
        unordered_map<ll,int> mp;
        for(ll a:A) mp[a]++;
        
        for(ll b:B) mp[b]--;
        
        for(auto i:mp) {
            if(i.second != 0) 
                return false;
        }
        
        return true;
    }
};
