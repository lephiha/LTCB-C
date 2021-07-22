#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

// Bài 1: tổng số thỏa mãn số đầu, cuối là số chính phương;

//int main()
//{
//    int sum;
//    int count = 0;
//
//    for (int i = 1; i <= 9; i++) {
//        for (int j = 1; j <= 9; j++) {
//            if (i*j = 1 || i*j = 4 || i*j = 9 || i*j = 16 || i*j = 25 || i*j = 36 || i*j = 49 || i*j = 64 || i*j = 81) {
//                count++;
//            }
//        }
//    }
//    sum = count * pow(10,5);
//    printf("co %d so thoa man", sum);
//    return 0;
//}

// Bài 2:hiệu của số LN và NN = 2

//int max, min, p, d;
//long int i, n;
//void timMax(long int n) {
//    p = n;
//    max = 0;
//    while (p > 0) {
//        d = p % 10;
//        if ( d > max) {
//            max = d;
//        }
//        p/= 10;
//    }
//}
//
//void timMin(long int n) {
//    min = 10;
//    while (n > 0) {
//        d = n % 10;
//        if ( d < min) {
//            min = d;
//        }
//        n /= 10;
//    }
//}
//
//int hieu(long int a, long int b) {
//    if (a - b == 2) {
//        return 1;
//    }
//    else {
//        return 0;
//    }
//}
//
//int main () {
//    int N;
//    do {
//        printf("Nhap N: ");
//        scanf("%d", &N);
//    }while (N > 2000000000);
//    for (i = 0; i < N; i++) {
//        timMax(i);
//        timMin(i);
//        if (hieu(max, min) == 1) {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}

// Bai 3: chuyen N sang co so 2
//
//void inputValue(int *n) {
//    while (*n < 1) {
//        printf("Nhap n: ");
//        scanf("%d", n);
//    }
//}
//
//void Dec(int n, int reverseValue ) {
//    int arr[100];
//    int i;
//    while (n > 0) {
//        int d = n % 2;
//        arr[i] = d;
//        i++;
//        n /= 2;
//    }
//    printf("Co so 2: ");
//    for (int j = i - 1; j >= 0; j--) {
//         printf("%d", arr[j]);
//    }
//}
//
//int main () {
//    int n = 0;
//    int reverseValue;
//    inputValue(&n);
//    Dec(n, reverseValue);
//    return 0;
//}


// Bai 4: tinh tong s1, s2
//float tong1deni(int i)
//{
//    float s = 0;
//    for (int j = 1; j <= i; j++)
//    {
//        s += j;
//    }
//    return s;
//}
//
//int main () {
//    int n;
//    printf("Nhap n: ");
//    scanf("%d", &n);
//    float s1 = 0, s2 = 0;
//    for (int i = 1; i <= n; i++) {
//        s1 += 1 / (float) (i *(i + 1));
//        s2 += 1 / tong1deni(i);
//    }
//    printf("Tong 1: %0.2f\nTong 2: %0.2f", s1, s2);
//}

// Bai 5: tong x mu n;

//int main () {
//    int n;
//    float x;
//    float s1 = 0, s2 = 0;
//    printf("nhap n va x: ");
//    scanf("%d %f", &n, &x);
//    for (int i = 1; i <= 2 * n + 1; i++)
//        if (i % 2 == 0)
//            s1 += pow(x, i);
//        else
//            s2 += pow(x, i);
//    printf("s1 = %0.2f, s2 = %0.2f", s1, s2);
//}

//Bài 6: tháng m năm y có bn ngày

//int main() {
//    int m, y;
//    printf("Nhap m, y: ");
//    scanf("%d%d", &m, &y);
//    int result;
//    switch (m) {
//        case 1:
//        case 3:
//        case 5:
//        case 7:
//        case 8:
//        case 10:
//        case 12:
//            result = 31;
//            break;
//        case 4:
//        case 6:
//        case 9:
//        case 11:
//            result = 30;
//            break;
//        case 2:
//            result = (y % 100 == 0) ? (y % 400 == 0 ? 29 : 28) : ((y % 4 == 0) ? 29 : 28);
//            break;
//        default:
//            printf("Nhap lai m, y");
//            break;
//    }
//    printf("Co %d ngay!", result);
//    return 0;
//}


// Bài 7: giải pt bậc 2

//int main() {
//    float a, b, c;
//    printf("Nhap a, b, c: ");
//    scanf("%f%f%f", &a, &b, &c);
//    float delta;
//    float x1, x2;
//    if (a == 0) {
//            if (b == 0)
//        {
//            if (c == 0)
//                printf("Phuong trinh vo so nghiem");
//            else
//                printf("Phuong trinh vo nghiem");
//        }
//        else {
//            printf("Nghiem duy nhat la %f", -c / b);
//        }
//    }
//    else {
//        delta = b * b - 4*a*c;
//        if (delta > 0) {
//            x1 = (-b - sqrt(delta)) / (2 * a);
//            x2 = (-b + sqrt(delta)) / (2 * a);
//            printf("Phuong trinh co 2 nghiem phan biet: x1 = %0.2f, x2 = %0.2f", x1, x2);
//        }
//        else if (delta == 0) {
//            printf("Phuong trinh co nghiem duy nhat: x = %0.2f", -b/2*a);
//        }
//        else {
//            printf("phuong trinh vo nghiem!");
//        }
//    }
//}

// Bài 8: Liệt kê tất cả các dãy nhị phân

//void inDay(int *day, int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        printf("%d", day[i]);
//    }
//    printf("\n");
//}
//
//void tryNextArray(int *day, int n, int index)
//{
//    for (int i = 0; i <= 1; i++)
//    {
//        day[index] = i;
//        if (index == n - 1)
//        {
//            inDay(day, n);
//        }
//        else
//        {
//            tryNextArray(day, n, index + 1);
//        }
//    }
//}
//
//int main() {
//    int arr[20] = {0};
//    int n;
//    printf("nhap n: ");
//    scanf("%d", &n);
//    tryNextArray(arr, n, 0);
//    return 0;
//}

// Bai 9: m la so chinh phuong, nguyen to, doi xung

//void nhap(int *n) {
//    while (*n <= 0) {
//        printf("Nhap n > 0: ");
//        scanf("%d", n);
//    }
//}
//
//bool ktraSoChinhPhuong(int n) {
//    int i = 1;
//    while (i < n / 2)
//    {
//        if (i * i == n) {
//            return true;
//        }
//        i++;
//    }
//    return false;
//}
//
//bool ktraSoNguyenTo(int n) {
//    if (n <= 1) {
//        return false;
//    }
//    if (n == 2 || n == 3) {
//        return false;
//    }
//    for (int i = 2; i <= sqrt(n); i++) {
//        if (n % i == 0) {
//            return false;
//        }
//    }
//    return true;
//}
//
//bool ktraSoDoiXung (int n) {
//    int n2 = 0, n3 = n;
//    while (n3)
//    {
//        n2 = n2 * 10 + n3 % 10;
//        n3 /= 10;
//    }
//    if (n2 == n)
//        return true;
//    else
//        return false;
//}
//
//
//int main() {
//    int n;
//    nhap(&n);
//    if (ktraSoChinhPhuong(n)) {
//        printf("%d la so chinh phuong!\n", n);
//    }
//    else {
//        printf("%d khong phai la so chinh phuong!\n", n);
//    }
//    if (ktraSoNguyenTo(n)) {
//        printf("%d la so nguyen to!", n);
//    }
//    else {
//        printf("%d khong phai la so nguyen to!\n", n);
//    }
//    if (ktraSoDoiXung(n)) {
//        printf("%d la so doi xung!\n", n);
//    }
//    else {
//        printf("%d khong phai la so doi xung!\n", n);
//    }
//    return 0;
//}

// Bài 10: Liệt kê số Amstrong

//bool isAmstrong(int n)
//{
//    int arr[] = {};
//    int n2 = n, count = 0;
//    while (n2)
//    {
//        arr[count] = n2 % 10;
//        count++;
//        n2 /= 10;
//    }
//    int sum = 0;
//    for (int i = 0; i < count; i++)
//    {
//        sum += pow(arr[i], count);
//    }
//    if (sum == n)
//        return true;
//    else
//        return false;
//}
//
//int main () {
//    int n;
//    printf("Nhap n: ");
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) {
//        if (isAmstrong(i)) {
//            printf("%d la so Amstrong\n", i);
//        }
//    }
//}

// Bài 11: vị trí đầu tiên có giá trị nhỏ nhất,lớn nhất, m là gt trung bình -> tìm giá trị gần m nhất, tìm a, b

int* nhap(int *n) {
    int i;
    int arr[100];
    printf("Nhap so phan tu cua hang: ");
    scanf("%d", n);
    for (i = 0; i <= *n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    return arr;
}

void viTriMin (int n, int arr[]) {
    int min = arr[0];
    int indexMin = 0;
    for (int i = 1; i <= n; i++) {
        if (min > arr[i]) {
            min = arr[i];
            indexMin = i;
        }
    }
    printf("Vi tri dau tien co gia tri nho nhat la: %d\n", indexMin);
}

void viTriMax(int n,int arr[]) {
    int max = arr[0];
    int indexMax = 0;
    for (int i = 1; i <= n; i++) {
        if (max < arr[i]) {
            max = arr[i];
            indexMax = i;
        }
    }
    printf("Vi tri dau tien co gia tri lon nhat la: %d\n", indexMax);
}

void nearAverage (int n, int arr[]) {
    float arrSum = 0;
    for (int i = 0; i < n; i++) {
        arrSum += arr[i];
    }
    float average = arrSum / n;
    float NearAverage = fabs (arr[0] - average);
    int indexNearAverage = 0;
    for (int i = 1; i < n; i++) {
        if (fabs (arr[i] - average) < NearAverage) {
            NearAverage = fabs (arr[i] - average);
            indexNearAverage = i;
        }
    }
    printf("phan tu gan gia tri trung binh nhat: %0.2f\n", arr[indexNearAverage]);
}

int main () {
    int arr[100];
    int n;
    *arr = nhap(&n);
    viTriMin(n, arr[100]);
    viTriMax(n, arr[100]);
    nearAverage(n, arr[100]);
}

