#include <stdio.h>
#include <stdlib.h>

// B�i 1:

//int main()
//{
//    int n = 10;
//    int arr[n];
//    int i;
//    for (i = 0; i < n; i++) {
//        printf("Nhap arr[%d] = ", i+1);
//        scanf("%d", &arr[i]);
//    }
//    printf("\n Mang da nhap: \n");
//    for (i = 0; i <n; i++) {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

// Bài 2:

//int main() {
//    int n;
//    printf("Nhap n > 0: ");
//    scanf("%d", &n);
//    int arr[n];
//    int i;
//    for (i = 0; i < n; i++) {
//        printf("Nhap arr[%d] = ", i+1);
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < n/ 2; i++) {
//            int temp = arr[i];
//            arr[i] = arr[n - 1 - i];
//            arr[n - 1 - i] = temp;
//        }
//        printf("\nMang dao nguoc da nhap: \n");
//    for (i = 0; i < n; i++) {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

// Bài 3:

//int main() {
//    int n;
//    printf("Nhap n > 0: ");
//    scanf("%d", &n);
//    int arr[n];
//    int i;
//    int sumOfPositive = 0, sumOfNegative = 0;
//    for (i = 0; i < n; i++) {
//        printf("Nhap arr[%d] = ", i + 1);
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < n; i++) {
//        if (arr[i] > 0 ) {
//            sumOfPositive += arr[i];
//        }else {
//            sumOfNegative += arr[i];
//        }
//    }
//    float tbc = (float) (sumOfNegative + sumOfPositive) / n;
//    printf("\nSUMOFPOSITIVE = %d", sumOfPositive);
//    printf("\nSUMOFNEGATIVE = %d", sumOfNegative);
//    printf("\nSUMOFALL = %d", sumOfNegative + sumOfPositive);
//    printf("\nTBC = %0.2f", tbc);
//    return 0;
//}

// Bài 4:

//int main() {
//    int n;
//    printf("Nhap n > 0: ");
//    scanf("%d", &n);
//    int arr[n];
//    int maxValue = 0; int minValue;
//    int i;
//    for (i = 0; i < n; i++) {
//        printf("Nhap arr[%d] = ", i+1);
//        scanf("%d", &arr[i]);
//    }
//    minValue = arr[0];
//    for (i = 0; i < n; i++) {
//        if (maxValue < arr[i]) {
//            maxValue = arr[i];
//        }
//        if (minValue > arr[i]) {
//            minValue = arr[i];
//        }
//    }
//     printf("Max = %d tai cac vi tri: ", maxValue);
//    for (i = 0; i < n; i++) {
//        if (arr[i] == maxValue) {
//            printf("%4d ", i+1);
//        }
//    }
//    printf("\nMin = %d tai cac vi tri: ", minValue);
//    for (i = 0; i < n; i++) {
//        if (arr[i] == minValue) {
//            printf("%4d ", i+1);
//        }
//    }
//    return 0;
//}


//Bài 5:

//int main() {
//       int n;
//    printf("Nhap n > 0: ");
//    scanf("%d", &n);
//    int arr[n];
//    int i, count = 0;
//    for (i = 0; i < n; i++) {
//        printf("Nhap arr[%d] = ", i+1);
//        scanf("%d", &arr[i]);
//    }
//    int x;
//    printf("Nhap x: ");
//    scanf("%d", &x);
//    for (i = 0; i < n; i++) {
//        if (arr[i] == x) {
//            count++;
//        }
//    }
//    printf("\nX xuat hien %d lan", count);
//    return 0;
//}


//Bài 6:

//int main() {
//       int n;
//    printf("Nhap n > 0: ");
//    scanf("%d", &n);
//    int arr[n];
//    int i;
//    for (i = 0; i < n; i++) {
//        printf("Nhap arr[%d] = ", i+1);
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < n; i++) {
//        if (arr[i] < 0) {
//            arr[i] = 0;
//        }
//    }
//    printf("\nMang sau khi xoa cac phan tu am la: \n");
//    for (i = 0; i < n; i++) {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


// Bài 7:

//int main() {
//    int n;
//    printf("Nhap n > 0: ");
//    scanf("%d", &n);
//    int arr[n];
//    int i;
//    for (i = 0; i < n; i++) {
//        printf("Nhap arr[%d] = ", i+1);
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < n; i++) {
//        for (int j = i + 1; j < n; j++) {
//            if (arr[i] > arr[j]) {
//                int temp = arr[i];
//                arr[i] = arr[j];
//                arr[j] = temp;
//            }
//        }
//    }
//    printf("\nMang sau khi sap xep la: \n");
//    for (i = 0; i < n; i++) {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//Bài 8:
//
//int main() {
//    int m,n,k;
//    int i, j;
//
//    // Input arr 1
//    printf("Nhap n > 0: ");
//    scanf("%d", &n);
//    int arr1[n];
//    for (i = 0; i < n; i++) {
//        printf("Nhap arr1[%d] = ", i+1);
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < n; i++) {
//        for (int j = i + 1; j < n; j++) {
//            if (arr1[i] > arr1[j]) {
//                int temp = arr1[i];
//                arr1[i] = arr1[j];
//                arr1[j] = temp;
//                }
//            }
//        }
//
//    // Input arr 2
//    printf("Nhap m > 0: ");
//    scanf("%d", &m);
//    int arr2[m];
//    for (i = 0; i < m; i++) {
//        printf("Nhap arr2[%d] = ", i+1);
//        scanf("%d", &arr2[i]);
//    }
//    for (i = 0; i < m; i++) {
//        for (int j = i + 1; j < m; j++) {
//            if (arr2[i] > arr2[j]) {
//                int temp = arr2[i];
//                arr2[i] = arr2[j];
//                arr2[j] = temp;
//                }
//            }
//        }
//
//
//
//    // Create merge Array
//    k = m + n;
//    int mergeArr[k];
//
//    // merge 2 array
//    int arr1Index = 0;
//    int arr2Index = 0;
//    int mergeIndex = 0;
//    while (arr1Index < n && arr2Index < m) {
//        if ( arr1[arr1Index] < arr2[arr2Index]) {
//            mergeArr[mergeIndex] = arr1[arr1Index];
//            arr1Index ++;
//        } else {
//            mergeArr[mergeIndex] = arr2[arr2Index];
//            arr2Index ++;
//        }
//        mergeIndex ++;
//    }
//
//    while (arr1Index < n) {
//        mergeArr[mergeIndex] = arr1[arr1Index];
//        mergeIndex ++;
//        arr1Index ++;
//    }
//
//    while (arr2Index < m) {
//        mergeArr[mergeIndex] = arr2[arr2Index];
//        mergeIndex ++;
//        arr2Index ++;
//    }
//
//    // result
//    printf("\Mang sau khi sap xep lai: \n");
//    for (i = 0; i < k ; i++) {
//        printf("%d ", mergeArr[i]);
//    }
//
//    return 0;
//}

 //Bài tập xóa phần tử:




// Bài tập chèn

//int main() {
//    int n;
//    printf("Nhap n > 0: ");
//    scanf("%d", &n);
//    int arr[n];
//    int i, j;
//    for (i = 0; i < n; i++) {
//        printf("Nhap arr[%d] = ", i+1);
//        scanf("%d", &arr[i]);
//    }
//    int x;
//    printf("Nhap x: ");
//    scanf("%d", &x);
//    while ((i < n) && (arr[i] < x))
//        i++;
//        n++;
//        for (j = n -1; j > i; j--)
//            arr[j] = arr[j-1];
//        arr[i] = x;
//    printf("\nMang sau khi chen: \n");
//    for (i = 0; i < n; i++) {
//        printf("%4d ", arr[i]);
//    }
//    return 0;
//}



