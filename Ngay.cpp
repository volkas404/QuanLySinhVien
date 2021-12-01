#include "Ngay.h"

void Nhap(NGAY & n) {
  printf("\nNhap ngay sinh:");
  scanf("%d", & n.ngay);
  printf("\nNhap thang sinh:");
  scanf("%d", & n.thang);
  printf("\nNhap nam sinh:");
  scanf("%d", & n.nam);
}

void Xuat(NGAY n) {
  printf("%d/%d/%d", n.ngay, n.thang, n.nam);
}

void Xuat2(NGAY n, FILE * & fileout) {
  fprintf(fileout, "%d/%d/%d", n.ngay, n.thang, n.nam);
}