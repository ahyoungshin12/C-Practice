#include <stdio.h>

int get_gcd(int, int);          // function for the great common divisor
int get_gcd_recursive(int, int); // recursive function for the great common divisor
int get_lcm(int, int);          // function for the least common multiple
int get_ncf(int, int);          // function for the number of common factors

int main() {
    int M, N;
    printf("Enter the value of M : ");
    scanf("%d", &M);
    printf("Enter the value of N : ");
    scanf("%d", &N);

    printf("%d\n", get_gcd(M, N) + get_gcd_recursive(M, N) + \
                   get_lcm(M, N) + get_ncf(M, N));

    return 0;
}

// 1. 반복문을 이용한 최대공약수 (GCD)
int get_gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

// 2. 재귀 함수를 이용한 최대공약수 (Recursive GCD)
int get_gcd_recursive(int a, int b) {
    if (b == 0) return a;
    return get_gcd_recursive(b, a % b);
}

// 3. 최소공배수 (LCM)
int get_lcm(int a, int b) {
    if (a == 0 || b == 0) return 0;
    return (a * b) / get_gcd(a, b);
}

// 4. 공약수의 개수 (Number of Common Factors)
int get_ncf(int a, int b) {
    int gcd_val = get_gcd(a, b);
    int count = 0;
    for (int i = 1; i <= gcd_val; i++) {
        if (gcd_val % i == 0) {
            count++;
        }
    }
    return count;
}
