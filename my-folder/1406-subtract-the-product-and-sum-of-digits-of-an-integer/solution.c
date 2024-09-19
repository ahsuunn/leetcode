int subtractProductAndSum(int n) {
    int temp, product = 1, sum = 0, result;
    while(n>0){
        temp = n % 10;
        n /= 10;

        product *= temp;
        sum += temp;
    }    
    return result = product - sum;
}
