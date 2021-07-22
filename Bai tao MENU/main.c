#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>

// menu tích 2 ma trận

//void menu () {
//    printf("\t_________________________________________\n");
//    printf("\t\t\t| MENU |\n");
//    printf("\t------------------------------------\n");
//    printf("\t1- Nhap 2 ma tran \n");
//    printf("\t2- Tinh tich 2 ma tran \n");
//    printf("\t3- In 3 ma tran \n");
//    printf("\t4- Ket thuc \n");
//    printf("\t_________________________________________\n");
//    printf("\tVui long chon: ");
//}
//
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
//int main()
//{
//    int select;
//    int ma, na, mb, nb;
//    int A[100][100],B[100][100],C[100][100];
//    menu();
//    while(select!=4)
//    {
//        printf("Chon trong Menu :");
//        scanf("%d",&select);
//        switch(select)
//        {
//            case 1:
//                printf("Nhap ma tran A: ");
//                nhap(A, &ma, &na);
//                printf("\nNhap ma tran B: ");
//                nhap(B, &mb, &nb);
//                break;
//            case 2:
//                if (na != mb) {
//                    printf("Ma tran khong kha tich!");
//                }else {
//                    tich(A,B,C, ma, na, nb);
//                }
//                break;
//            case 3:
//                printf("\nMa tran A: \n");
//                xuat(A, ma, na);
//                printf("\nMa tran B: \n");
//                xuat(B, mb, nb);
//                printf("\nMa tran C: \n");
//                xuat(C, ma, nb);
//                break;
//            case 4:
//                break;
//            default:
//                printf("Nhap lai\n");
//                break;
//        }
//    }
//    return 0;
//}
// Bài 11: DSLK ds sinh viên

struct SinhVien {
    char ho_ten [25];
    int tuoi;
    float Diem_TB;
};

typedef struct {
    SinhVien du_lieu;
    struct Node* tiep;
}Node;

Node* list = NULL;

SinhVien nhapDuLieu {
    SinhVien sv;
    printf("\tNhap ten: ");
    fflush(stdin);
    gets(sv.ho_ten);
    printf("\tNhap tuoi: ");
    scanf("%d", &sv.tuoi);
    printf("\tNhap diem: ");
    scanf("%f", &sv.Diem_TB);
    return sv;
}

node* taoNode() {
    // cấp phát động
    node *pnode = (node *)malloc(sizeof(node));
    // thêm dữ liệu
    pnode->du_lieu = nhapDuLieu();
    // trỏ tiếp
    pnode->tiep = NULL;
    return pnode;
}

void taoNodeDauTien () {
    node *pnode = taoNode();
    list = pnode;
}

void taoNodeViTri_Cuoi () {
    if (list == NULL) {
        taoNodeDauTien();
    }else {
        // tao node moi
        node *pnode = taoNode();
        // tao vi tri cuoi cung
        node *tmp;
        for (tmp = list; tmp->tiep != NULL; tmp = tmp->tiep);
        tmp->tiep = pnode;
    }
}

void hienThiDanhSach () {

}
