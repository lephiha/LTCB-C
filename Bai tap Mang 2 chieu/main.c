#include <stdio.h>
#include <stdlib.h>

// Bài 1:

//int main()
//{
//    int arr[50][50];
//    int m, n, i, j;
//    printf("Nhap so hang n = ");
//    scanf("%d", &n);
//    printf("Nhap so cot m = ");
//    scanf("%d", &m);
//     printf("Nhap vao ma tran: ");
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            printf("Nhap arr[%d][%d]= ", i, j);
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    printf("Ma tran vua nhap la: \n");
//    for (i = 0; i < n; i++) {
//        for (j = 0; j <m ; j++) {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

// Bài 2:

//int main()
//{
//    int a[100][100], b[100][100];
//    int m, n, i, j;
//    int sum[100][100];
//    printf("Nhap so hang n: ");
//    scanf("%d", &n);
//    printf("Nhap so cot m: ");
//    scanf("%d", &m);
//
//    // nhap A
//    printf("\nNhap vao ma tran A: \n");
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            printf("Nhap a[%d][%d] = ", i, j);
//            scanf("%d", &a[i][j]);
//        }
//    }
//    // nhap B
//    printf("\nNhap vao ma tran B: \n");
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            printf("Nhap b[%d][%d] = ", i, j);
//            scanf("%d", &b[i][j]);
//        }
//    }
//    // tinh sum
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            sum[i][j] += a[i][j] + b[i][j];
//        }
//    }
//    printf("\nMa tran A: \n");
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            printf("%d ", a[i][j]);
//        }
//        printf("\n");
//    }
//    printf("\nMa tran B: \n");
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            printf("%d ", b[i][j]);
//        }
//        printf("\n");
//    }
//    printf("Tong cua 2 ma tran la: \n");
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            printf("%d ", sum[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

// Bài 3:


//int main()
//{
//    int a[100][100], b[100][100];
//    int n, m, p;
//    int i, j, k;
//    int c[100][100];
//    printf("Nhap n: ");
//    scanf("%d", &n);
//    printf("Nhap m: ");
//    scanf("%d", &m);
//    printf("Nhap p: ");
//    scanf("%d", &p);
//
//     nhap A
//    printf("\nNhap vao ma tran A: \n");
//    for (i = 0; i < n; i++){
//        for (j = 0; j < m; j++){
//                printf("Nhap a[%d][%d] = ", i, j);
//                scanf("%d", &a[i][j]);
//            }
//        }
//     nhap B
//    printf("\nNhap vao ma tran B: \n");
//    for (i = 0; i < m; i++) {
//        for (j = 0; j < p; j++) {
//            printf("Nhap b[%d][%d] = ", i, j);
//            scanf("%d", &b[i][j]);
//        }
//    }
//     tính tích
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            for (k = 0; k < m; k++) {
//                c[i][j] += a[i][k] * b[k][j];
//            }
//        }
//    }
//    printf("\nMa tran A: \n");
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            printf("%d ", a[i][j]);
//        }
//        printf("\n");
//    }
//    printf("\nMa tran B: \n");
//    for (i = 0; i < m; i++) {
//        for (j = 0; j < p; j++) {
//            printf("%d ", b[i][j]);
//        }
//        printf("\n");
//    }
//    printf("Tich cua 2 ma tran la: \n");
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            printf("%d ", c[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

// Bài : Ma trận xoáy

int main () {
    int n;
    printf("Nhap ma tran cap n = ");
    scanf("%d", &n);
    int a[n][n];
    int dong = n, cot = n, x = 0, k = 0;
    int i, j;
    while (x < n * n) {
        for (i = k; i < cot; i++) {
            x = x + 1;
            a[k][i] = x;
        }
        for (i = k + 1; i < dong; i++) {
            x = x + 1;
            a[i][cot - 1] = x;
        }
        for (i = cot - 2; i >= k; i--) {
            x= x+ 1;
            a[dong - 1][i] = x;
        }
        for (i = dong - 2; i > k; i--) {
            x = x + 1;
            a[i][k] = x;
        }
        dong--; cot--; k = k +1;
    }
    printf("\nMa tran xoay : \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

// Bài ma trận chuyển vị:

//int main() {
//    int a[100][100];
//    int m, n, i, j;
//    printf("Nhap n = ");
//    scanf("%d", &n);
//    printf("Nhap m = ");
//    scanf("%d", &m);
//     printf("Nhap vao ma tran: ");
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            printf("Nhap a[%d][%d]= ", i, j);
//            scanf("%d", &a[i][j]);
//        }
//    }
//    printf("\nMa tran vua nhap la: \n");
//    for (i = 0; i < n; i++){
//        for (j = 0; j < m; j++){
//                printf("%d ", a[i][j]);
//        }
//        printf("\n");
//
//    }
//    for (i = 0; i< n; i++) {
//        for (j = 0; j < i; j++) {
//            int temp = a[i][j];
//            a[i][j] = a[j][i];
//            a[j][i] = temp;
//        }
//    }
//    printf("\nMa tran chuyen vi la: \n");
//       for (i = 0; i< n; i++) {
//        for (j = 0; j < m; j++) {
//            printf("%d ", a[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//

