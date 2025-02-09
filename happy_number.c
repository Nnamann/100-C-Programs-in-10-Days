// Happy Number Checker: A happy number is a number which eventually reaches 1 when replaced by the sum of the square of each digit. If the process ends in a cycle which does not include 1, then the number is an unhappy number.


    #include <stdio.h>

int sqsum(int n) {
    int s = 0, d;
    while (n > 0) {
        d = n % 10;   // Get the last digit
        s += d * d;   // Add the square of the digit
        n /= 10;      // Remove the last digit
    }
    return s;  // Return sum of squares
}

int main() {
    int n, t;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    t = n;  // Use 't' to check for repetition (loop detection)

    // Floyd's Cycle Detection (slow-fast pointers)
    while (t != 1 && t != 4) {  // If we reach 4, it's an unhappy number cycle
        t = sqsum(t);           // Replace t with sum of squares of its digits
    }

    if (t == 1) {
        printf("%d is a Happy Number.\n", n);
    } else {
        printf("%d is not a Happy Number.\n", n);
    }

    return 0;

}