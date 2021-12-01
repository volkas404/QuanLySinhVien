#include "PhongHoc.h"

void NhapPhong(PHONGHOC & n) {
  do {
    printf("\n===== Nhap Dia Diem =====");
    printf("\n1.CSC: 273 An Duong Vuong Q5");
    printf("\n2.CS1: 105 Ba HuyenThanh Quan Q3");
    printf("\n3.CS2: 4 Ton Duc Thang Q1");
    printf("\n4.CS3: 20 Ngo Thoi Nhiem Q3");
    printf("\n5.CS4:Trung hoc thuc hanh Q5");

    printf("\nNhap lua chon:");
    scanf("%d", & n.id);

  } while (n.id < 0 || n.id > 6);

  rewind(stdin);
  printf("Nhap ma so phong:");
  gets(n.MaSoPhong);
}

void XuatPhong(PHONGHOC n) {
  if (n.id == 1) {
    printf("\nCSC: 273 An Duong Vuong Q5");
  } else if (n.id == 2) {
    printf("\nCS1: 105 Ba HuyenThanh Quan Q3");
  } else if (n.id == 3) {
    printf("\nCS2: 4 Ton Duc Thang Q1");
  } else if (n.id == 4) {
    printf("\nCS3: 20 Ngo Thoi Nhiem Q3");
  } else if (n.id == 5) {
    printf("\nCS4:Trung hoc thuc hanh Q5");
  }
  printf("\nMa Phong:%s", n.MaSoPhong);
}

void XuatPhong2(PHONGHOC n, FILE * & fileout) {
  if (n.id == 1) {
    fprintf(fileout, "\nCSC: 273 An Duong Vuong Q5");
  } else if (n.id == 2) {
    fprintf(fileout, "\nCS1: 105 Ba HuyenThanh Quan Q3");
  } else if (n.id == 3) {
    fprintf(fileout, "\nCS2: 4 Ton Duc Thang Q1");
  } else if (n.id == 4) {
    fprintf(fileout, "\nCS3: 20 Ngo Thoi Nhiem Q3");
  } else if (n.id == 5) {
    fprintf(fileout, "\nCS4:Trung hoc thuc hanh Q5");
  }
  fprintf(fileout, "\nMa Phong:%s", n.MaSoPhong);
}