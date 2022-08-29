int lonelyinteger(vector<int> a) {
    int res = 0;
    for(int i:a) res ^= i;
    return res; 
}
