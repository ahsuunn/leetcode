int addDigits(int num) {
    int sum;
    while (num >= 10) {  // Continue until we have a single digit
        int sum = 0;
        while (num > 0) {
            sum += num % 10;  // Extract the last digit
            num /= 10;        // Remove the last digit
        }
        num = sum;  // Update num to the sum of its digits
    }
    return num;  // Return t
}
