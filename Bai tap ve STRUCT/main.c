#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


struct Hanghoa {
    char tenHang[20];
    int donGia;
    int soLuong;
    int thanhTien;
};

void nhapTenHang (struct Hanghoa* tenHang) {
    printf("Nhap ten hang: ");
    getchar();
    gets(tenHang);
}

void nhapDonGia (struct Hanghoa* donGia){
    printf("Nhap don gia: ");
    scanf("%d", &donGia);
}

void nhapSoLuong (struct Hanghoa* soLuong){
    printf("Nhap so luong: ");
    scanf("%d", &soLuong);
}

void thanhTien (struct Hanghoa* thanhTien) {
    thanhTien = thanhTien->donGia * thanhTien->soLuong;
}

void hienThiSLBH (struct Hanghoa hh) {
    printf("%-10s %-10d %-10d %-10d", hh.tenHang, hh.donGia, hh.soLuong, hh.thanhTien);
}

int main () {
    struct Hanghoa slbh[100];
	int slhh = 0;

	struct Hanghoa hh;
	slbh[slhh++] = hh;
	printf("%-10s %-10s %-10s %-10s\n",
	"Ten Hang", "Don Gia", "So Luong", "Thanh Tien");
	int i;
	for(i = 0; i < slhh; i++) {
		hienThiSLBH(slbh[i]);
	}
}
