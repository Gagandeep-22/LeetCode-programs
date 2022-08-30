int calSD(long long int n) {
    long long int sum = 0;
    while(n) {
        sum += n%10;
        n /= 10;
    }
    return sum;
}
int superDigit(string n, int k) {
    long long int num = 0;
    for(int a:n) 
        num += a-48;
    num = num*k;
    while(num/10) {
        num = calSD(num);
    }
    return num;
}
