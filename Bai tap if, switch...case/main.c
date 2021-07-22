#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Bài 1: giải pt bậc 2

//int main()
//{
//    float a, b, c, delta, x1, x2;
//    printf("Nhap a, b, c: ");
//    scanf("%f%f%f", &a,&b,&c);
//    if (a == 0) {
//        if (b == 0 && c!= 0) {
//            printf("phuong trinh vo nghiem!");
//        }
//        else if (b == 0 && c == 0) {
//            printf("phuong trinh co vo so nghiem!");
//        }
//        else {
//            printf("phuong trinh co nghiem la: x = %0.2f", -c/b);
//        }
//    }
//    else {
//        delta = b * b - 4 * a * c;
//        if (delta < 0) {
//            printf("phuong trinh vo nghiem!");
//        }
//        else if (delta == 0) {
//            printf("phuong trinh co nghiem kep: x = %0.2f", b / (2 * a));
//        }else {
//            x1 = (b - sqrt(delta)) / (2 * a);
//            x2 = (b + sqrt(delta)) / (2 * a);
//            printf("Nghiem x1 = %0.2f\n", x1);
//            printf("Nghiem x2 = %0.2f\n", x2);
//        }
//    }
//    return 0;
//}

// Bài 2: giải hệ pt

//int main () {
//     int a, b, c, d, e, f;
//    printf("\nax + by = c");
//    printf("\ndx + ey = f\n");
//    printf("\nNhap so tu nhien a: ");
//    scanf("%d", &a);
//    printf("\nNhap so tu nhien b: ");
//    scanf("%d", &b);
//    printf("\nNhap so tu nhien c: ");
//    scanf("%d", &c);
//    printf("\nNhap so tu nhien d: ");
//    scanf("%d", &d);
//    printf("\nNhap so tu nhien e: ");
//    scanf("%d", &e);
//    printf("\nNhap so tu nhien f: ");
//    scanf("%d", &f);
//    float D, Dx, Dy, x, y;
//    D = a * e - b * d;
//    Dx = c * e - b * f;
//    Dy = a * f - c * d;
//    if (D == 0) {
//        if (Dx == 0 && Dy == 0) {
//            printf("He phuong trinh co vo so nghiem!");
//        }
//        else {
//            printf("He phuong trinh vo nghiem!");
//        }
//    }else {
//        x = Dx / D;
//        y = Dy / D;
//        printf("He phuong trinh co nghiem (x, y) = (%0.2f, %0.2f)", x, y);
//    }
//}

// Bài 3: xếp loại điểm
//
//int main()
//{
//    int DTB;
//    printf("Nhap DTB: ");
//    scanf("%d", &DTB);
//    if (DTB >= 0 && DTB <=10) {
//        if (DTB < 5) {
//            printf("Xep loai: Yeu!");
//        }if (DTB >= 5 && DTB < 7) {
//            printf("Xep loai: TB!");
//        }if (DTB >= 7 && DTB < 8) {
//            printf("Xep loai: Kha!");
//        }if (DTB >= 8 && DTB < 9) {
//            printf("Xep loai: Gioi!");
//        }if (DTB >= 9) {
//            printf("Xep loai: Xuat sac!");
//        }
//    }else {printf("Khong hop le!");
//
//    }
//    return 0;
//}

// Bài 4: Cạnh của tam giác

//int main()
//{
//    float a, b, c;
//    printf("Nhap ba canh a, b, c: ");
//    scanf("%f%f%f", &a, &b, &c);
//    if (a > 0 && b > 0 && c > 0) {
//        if (abs(a - c) < b && b < (a + c)) {
//        printf("Ba so lap thanh mot tam giac\n");
//            if (a * a == b * b + c * c || b * b == a*a + c*c || c*c == b*b + c*c) {
//                printf("\nTam giac nay la tam giac vuong!");
//            }else if (a == b && b == c) {
//                printf("\nTam giac nay la tam giac deu!");
//            }else if (a == b || a == c || b == c) {
//                printf("\nTam giac nay la tam giac can!");
//            }else {
//                printf("\nTam giac nay la tam giac nhon!");
//            }
//
//        }else {
//        printf("Ba so khong tao thanh mot tam giac");
//        }
//    }else {
//        printf("Nhap vao ba so duong!\n");
//    }
//    return 0;
//}

// Bài 5: năm tháng

int main()
{
    int thang, nam;
    printf("Nhap thang, nam: ");
    scanf("%d%d", &thang, &nam);
    switch (thang) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("Thang %d nam %d co 31 ngay!", thang, nam);
        break;
    case 2:
        if (nam % 4 == 0 && nam % 100 != 0 || nam % 400){
            printf("Thang %d nam %d co 29 ngay!", thang, nam);
            break;
        }else {
            printf("Thang %d nam %d co 28 ngay!", thang, nam);
            break;
        }
    case 4:
    case 6:
    case 9:
    case 11:
        printf("Thang %d nam %d co 30 ngay!", thang, nam);
        break;
    default:
        printf("Thang %d nam %d khong hop le", thang, nam);
        break;
}
    return 0;
}
