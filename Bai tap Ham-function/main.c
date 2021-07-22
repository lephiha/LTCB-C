#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Bài 1: x mũ y

//void nhap(int *x, int *y) {
//    printf("Nhap x: ");
//    scanf("%d", x);
//    printf("Nhap y: ");
//    scanf("%d", y);
//}
//
//float luyThua(int n, int k) {
//    int i;
//    int pow = 1;
//    for (i = 1; i <= k;i++) {
//        pow *= n;
//    }
//    return (float) pow;
//}
//int main()
//{
//    int x, y;
//    nhap(&x, &y);
//    printf("x mu y = %0.2f", pow(x, y));
//    return 0;
//}

// Bài 2: đệ quy n!

//int nhap() {
//    int n = 0;
//    while (n <= 0) {
//        printf("Nhap n > 0: ");
//        scanf("%d", &n);
//    }
//    return n;
//}
//
//unsigned long long factorial(int n) {
//    if (n == 0 || n == 1) {
//        return 1;
//    }
//    else {
//        return n * (n - 1);
//    }
//}
//
//int main () {
//    int n, i;
//    n = nhap();
//    for (i = 1; i <= n; i++) {
//        printf("%d! = %lld\n", i, factorial(i));
//    }
//}


// Bài 3: đệ quy fibonaci
//
//int nhap() {
//    int n = 0;
//    while (n <= 0) {
//        printf("Nhap n > 0: ");
//        scanf("%d", &n);
//    }
//    return n;
//}
//
//unsigned long long fibo(int n) {
//    if (n <= 2) {
//        return 1;
//    }
//    else {
//        return (fibo(n - 1) + fibo(n - 2));
//    }
//}
//
//int main () {
//    int n, i;
//    n = nhap();
//    for (i = 1; i <= n; i++) {
//        printf("fibo(%d) = %lld\n", i, fibo(i));
//    }
//}

// Bài 4:

//void nhap(int arr[50][50], int m, int n) {
//    int i, j;
//    for (i = 0; i < m; i++) {
//        for (j = 0; j < n; j++) {
//            printf("arr[%d][%d] = ", i, j);
//            scanf("%d", &arr[i][j]);
//        }
//    }
//}
//
//void nhapMN (int *m, int *n) {
//    *m = 0, *n = 0;
//    while (*m <= 0 && *n <= 0) {
//        printf("Nhap m > 0: ");
//        scanf("%d", m);
//        printf("Nhap n > 0: ");
//        scanf("%d", n);
//    }
//}
//
//void tong(int a[50][50], int b[50][50], int c[50][50], int m, int n) {
//    int i, j;
//    for (i = 0; i < m; i++) {
//        for (j = 0; j < n; j++) {
//                c[i][j] += a[i][j] + b[i][j];
//        }
//    }
//}
//
//void hienThi(int c[50][50], int m, int n ) {
//    int i, j;
//    for (i = 0; i < m; i++) {
//        for (j = 0; j < n; j++) {
//                printf("%d ", c[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//int main () {
//    int m, n;
//    int a[50][50], b[50][50], c[50][50];
//    nhapMN(&m, &n);
//    printf("\nNhap ma tran A: \n");
//    nhap(a, m, n);
//    printf("\nNhap ma tran B: \n");
//    nhap(b, m, n);
//    tong(a , b, c, m , n);
//    printf("\nMa tran A: \n");
//    hienThi(a, m, n);
//    printf("\nMa tran B: \n");
//    hienThi(b, m, n);
//    printf("\nMa tran C: \n");
//    hienThi(c, m, n);
//}

// Tinsh tích của 2 ma trận;

//void nhap(int arr[50][50], int *m, int *n) {
//    printf("\nNhap so hang, so cot cua ma tran A: ");
//	scanf("%d%d", m, n);
//    int i, j;
//    for (i = 0; i < *m; i++) {
//        for (j = 0; j < *n; j++) {
//            printf("\narr[%d][%d] = ", i, j);
//            scanf("%d", &arr[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//void tich(int a[50][50], int b[50][50], int c[50][50], int m, int n, int k) {
//    int i, j, l;
//    for (i = 0; i < m; i++) {
//        for (j = 0; j < k; j++) {
//            for (l = 0; l < n; l++) {
//                c[i][j] += a[i][l] * b[l][j];
//            }
//        }
//    }
//
//}
//void xuat(int c[50][50], int m, int n ) {
//    int i, j;
//    for (i = 0; i < m; i++) {
//        for (j = 0; j < n; j++) {
//                printf("%5d ", c[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//int main () {
//    int a[50][50], b[50][50], c[50][50];
//    int ma, na, mb, nb;
//    printf("Nhap Ma Tran A: ");
//	nhap(a, &ma, &na);
//	printf("\nNhap Ma Tran B: ");
//	nhap(b, &mb, &nb);
//	if (na != mb) {
//        printf("Ma tran nay khong kha tich!");
//	}else {
//	    tich(a, b, c, ma, na, nb);
//	    printf("\nMa tran A: \n");
//		xuat(a, ma, na);
//		printf("\nMa tran B: \n");
//		xuat(b, mb, nb);
//		printf("\nMa tran C: \n"); // ket qua
//		xuat(c, ma, nb);
//	}
//}

// Bai 5: doi co so 2,8,16

//void inputValue(int n) {
//    do {
//        printf("Nhap n: ");
//        scanf("%d", &n);
//    }while (n < 1);
//}
//
//void Dec(int n, int reverseValue) {
//    while (n > 0) {
//        reverseValue = reverseValue * 10 + (n % 2);
//        n /= 2;
//    }
//    printf("Co so 2: ");
//    while (reverseValue > 1) {
//        printf("%d", reverseValue % 10);
//        reverseValue /= 10;
//    }
//}
//
//void Oct(int n, int reverseValue) {
//    reverseValue = 1;
//    while (n > 0) {
//        reverseValue = reverseValue * 10 + (n % 8);
//        n /= 8;
//    }
//    printf("\nCo so 8: ");
//    while (reverseValue > 1) {
//        printf("%d", reverseValue %10);
//        reverseValue /= 10;
//    }
//}
//
//void Hex(int n, int reverseValue) {
//    while (n > 0) {
//        reverseValue = reverseValue * 16 + ( n % 16);
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
//}
//
//int main () {
//    int n, reverseValue;
//    inputValue(n);
//    Dec(n, reverseValue);
//    Oct(n, reverseValue);
//    Hex(n, reverseValue);
//}

// Bài 6: tính đa thức

//void nhapHS(int a[], int n) {
//    for(int i = n; i >= 0; i--) {
//        printf("Nhap he so a[%d]= ", i);
//        scanf("%d", &a[i]);
//    }
//}
//void hienThi(int a[], int n){
//    for(int i = n; i >= 0; i--) {
//        if (i == 0) {
//            printf("%d", a[i]);
//            break;
//        }
//        printf("%dX^%d+", a[i], i);
//        if (i == 1 ) {
//            printf("%dX+", a[i]);
//        }
//    }
//}
//
//void sumdt(int t[], int a[],int n,int b[], int m) {
//    if(m>n)
//    {
//        for(int i=n;i>=0;i--)
//            t[i]=a[i]+b[i];
//        for(int j=m;j>n;j--)
//            t[j]=b[j];
//    }
//    else
//    {
//        for(int i=m;i>=0;i--)
//            t[i]=a[i]+b[i];
//        for(int j=n;j>m;j--)
//            t[j]=a[j];
//    }
//
//}
//
//void sumgt(int a[], int n, int x)
//{
//    int sum = 0;
//    for(int i=n;i>=0;i--)
//    {
//        sum = sum+a[i]*luythua(x,i);
//    }
//    printf(" : %d",sum);
//}
//
//int luythua(int x,int m)
//{
//    if(m==0)
//        return 1;
//    else
//        return x*luythua(x,m-1);
//}
//
//int main()
//{
//    int n,m,x;
//    int t[100], q[100],p[100];
//    printf("Nhap he so da thuc P: ");
//    scanf("%d",&n);
//    nhapHS(p,n);
//    printf("Nhap he so da thuc Q: ");
//    scanf("%d",&m);
//    nhapHS(q,m);
//
//    printf("Nhap X: ");
//    scanf("%d",&x);
//
//
//    sumdt(t,p,n,q,m);
//    printf("\nP: ");
//    hienThi(p,n);
//    sumgt(p,n,x);
//    printf("\nQ: ");
//    hienThi(q,m);
//    sumgt(q,m,x);
//    printf("\nT: ");
//    if(m>n)
//        hienThi(t,m);
//    else
//        hienThi(t,n);
//    return 0;
//}
