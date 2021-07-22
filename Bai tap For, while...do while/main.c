#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Bài 1: tổng 10 số bất kì

//int main() {
//    int x;
//    printf("Nhap x: ");
//    scanf("%d", &x);
//    int sum;
//    for ( int i = 0; i <= x; i++) {
//        sum+= i;
//    }
//    printf("SUM = %d", sum);
//}
// Bài 2: kiểm tra số nguyên tố

//int main()
//{
//    int n;
//    printf("Nhap n > 0: ");
//    scanf("%d", &n);
//    int i;
//    int mark = 1;
//    if (n < 2) {
//        printf("n khong phai la so nguyen to!");
//    }
//    else {
//        for (i = 2; i <= sqrt(n); i++) {
//            if (n % i == 0) {
//                mark = 0;
//                break;
//            }
//        }
//    }
//    if (mark == 1) {
//        printf("n la so nguyen to!");
//    }else {
//        printf("n khong phai la so nguyen to!");
//    }
//    return 0;
//}


// Bài 3: in 1-20 chẵn

//int main () {
//    int i;
//    for (i = 1; i <= 20; i++) {
//        if (i % 2 == 0) {
//            printf("%d\t", i);
//        }
//    }
//    return 0;
//}

// Bài 4: tỏng lẻ 1-100
//
//int main() {
//    int i;
//    int sum = 0;
//    for (i = 1; i <= 100; i++){
//        if (i % 2 != 0) {
//            sum += i;
//        }
//    }
//    printf("SUM = %d", sum);
//}

//// Bài 5: tìm ước
//
//int main () {
//    int n;
//    printf("Nhap n > 0: ");
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++) {
//        if (n % i == 0) {
//            printf("%d ", i);
//        }
//    }
//}


// Bài 6: UCLN, BCNN

//int main() {
//    int a, b;
//    printf("Nhap a, b: ");
//    scanf("%d%d", &a, &b);
//    if (a == 0 && b == 0) {
//        printf("Khong co UCLN, BCNN");
//    }else if (a ==0 || b == 0) {
//        printf("Khong co BCNN, UCLN = %d", (a == 0) ? b : a);
//    }
//    else if ( a > 0 && b > 0) {
//        int bc = a * b;
//        while (a != b) {
//            if (a > b) {
//                a = a - b;
//            }
//            else {
//                b = b - a;
//            }
//        }
//        printf("UCLN = %d\n", a);
//        printf("BCNN = %d", bc / a);
//    }
//    else {
//        printf("Khong hop le!");
//    }
//}

// Bài 6: Số hoàn hảo

//int main () {
//    int n;
//    printf("Nhap n > 0: ");
//    scanf("%d", &n);
//    int sum = 0;
//    int i;
//    for(int i =0; i <= n/2; i++) {
//        if (n % i == 0) {
//            sum+= i;
//        }
//    }
//    if (sum == n) {
//        printf("%d la so hoan hao!");
//    }else {
//        printf("%d khong phai la so hoan hao!");
//    }
//}

// Bài 7: tổng 1/n

//int main () {
//    int n; printf("Nhap n > 0: ");
//    scanf("%d", &n);
//    float sum = 0;
//    for (int i = 1; i <= n; i++) {
//        sum += (float) 1 / i;
//    }
//    printf("SUM = %0.2f", sum);
//}


//Bài 8: n!

//int main()
//{
//    int n;
//    printf("Nhap n > 0: ");
//    scanf("%d", &n);
//    int gt = 1;
//    for (int i = 1; i <= n; i++) {
//        gt *= i;
//    }printf("n! = %d", gt);
//    return 0;
//}

// Bài 9: tổng 1/n!

//int main()
//{
//    int n;
//    printf("Nhap n > 0: ");
//    scanf("%d", &n);
//    int gt = 1;
//    float sum = 0;
//    for (int i = 1; i <= n; i++) {
//        gt *= i;
//        sum += (float) 1 / gt;
//    }printf("SUM = %0.2f", sum);
//    return 0;
//}

// fibonaci
//
//int Fibonacci(int n)
//{
//    if (n == 1 || n == 2)
//        return 1;
//    return Fibonacci(n - 1) + Fibonacci(n - 2);
//}
//int main()
//{
//    int n;
//    printf("nhap n: ");
//    scanf("%d", &n);
//    printf("So Fibonacci thu %d la: %d", n, Fibonacci(n));
//    return 0;
//}


// bài 11: đổi cơ số 8, 2, 16

//
//int main()
//{
//    int n, inputValue, reverseValue = 1;
//    do {
//        printf("Nhap n: ");
//        scanf("%d", &inputValue);
//    }while (inputValue < 1);
//    // co so 2
//    n = inputValue;
//    while (n > 0) {
//        reverseValue = reverseValue * 10 + (n % 2);
//        n /= 2;
//    }printf("Co so 2: ");
//    while (reverseValue > 1) {
//        printf("%d", reverseValue % 10);
//        reverseValue /= 10;
//    }
//    // co so 8
//    reverseValue = 1, n = inputValue;
//    while (n >0) {
//        reverseValue = reverseValue *10 + (n % 8);
//        n /= 8;
//    }printf("\nCo so 8: ");
//    while (reverseValue > 1) {
//        printf("%d", reverseValue % 10);
//        reverseValue /= 10;
//    }
//    // co so 16
//    reverseValue = 1, n = inputValue;
//    while (n > 0) {
//        reverseValue = reverseValue * 16 + n % 16;
//        n /= 16;
//    }
//    printf("\nCo so 16: ");
//    while (reverseValue > 1) {
//        switch (reverseValue % 16){
//        case 10:
//            printf("A");
//            break;
//        case 11:
//            printf("B");
//            break;
//        case 12:
//            printf("C");
//            break;
//        case 13:
//            printf("D");
//            break;
//        case 14:
//            printf("E");
//            break;
//        case 15:
//            printf("F");
//            break;
//        default:
//            printf("%d", reverseValue % 16);
//            break;
//        }
//        reverseValue /= 16;
//    }
//    return 0;
//}


// Bài 12: sin x

//int main()
//{
//    int i, 1, j, k;
//    double sin = 0;
//    float n, eps, x;
//    printf("Nhap x = ");
//    scanf("%f", &x);
//    printf("Nhap do chinh xac (eps): ");
//    scanf("%f", &eps);
//    x = (x * 3.14) / 180;
//    do {
//        k = 1;
//        for (j = 1; j <= 2 * i + 1; j++) {
//            k *= j;
//            n = pow (-1 , i) + pow (x,2 * i + 1) / k;
//            sin += n;
//            i++;
//        }
//    }while (fabs(n) > eps);
//    printf("\nsin = %0.2f", sin);
//    return 0;
//}

// Bài 13: e mũ x
//
//int main()
//{
//    int i = 1, j, x, gt;
//    float eps;
//    double s = 1, n;
//    printf("Nhap x = ");
//    scanf("%d", &x);
//    printf("Nhap do chinh xac eps: ");
//    scanf("%f", &eps);
//    fflush(stdin);
//    do {
//        gt = 1;
//        for (j = 1; j <= i; j++) {
//            gt *= j;
//            n = pow(x,i) / gt;
//            s += pow(x,i) / gt;
//            i++;
//        }
//    }while (fabs(n) > eps);
//        printf("\ne mu %d = %0.2f", x, s);
//    return 0;
//}

// Bài 14:

//int main () {
//    float thuNhap, tocDo;
//    printf("Tong thu nhap GDP cua nuoc ta nam 2014: ");
//    scanf("%f", &thuNhap);
//    printf("Toc do tang truong kinh te binh quan: ");
//    scanf("%f", &tocDo);
//    float temp = thuNhap;
//    int nam = 2014;
//    while (temp < (2* thuNhap)) {
//        printf("%d\t%0.2f\n", nam++, temp);
//        temp += (temp*tocDo) / 100;
//    }
//    printf("%d\t%0.2f\n", nam++, temp);
//    return 0;
//}

// Bài 15:

//int main()
//{
//    float A, r;
//    int n, i;
//    printf("Nhap A, r: ");
//    scanf("%f%f", &A, &r);
//    printf("Nhap n: ");
//    scanf("%d", &n);
//    for (i = 0; i <= n; i++) {
//        A *= 1 + r;
//    }
//    printf("So tien nhan duoc sau %d thang la: %0.2f", n, A);
//    return 0;
//}
