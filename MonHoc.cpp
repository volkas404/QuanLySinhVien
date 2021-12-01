#include "MonHoc.h"

void NhapMonHoc(MONHOC & n) {
  printf("\nNhap ma so mon hoc:");
  scanf("%d", & n.Masomonhoc);

  rewind(stdin);
  printf("\nNhap ten mon hoc:");
  gets(n.Tenmonhoc);

  printf("\nSo tin chi:");
  scanf("%d", & n.sotinchi);
  printf("\n\n---Nhap diem---");
  printf("\nNhap diem bai tap:");
  scanf("%f", & n.diemBT);
  printf("\nNhap diem giua ky:");
  scanf("%f", & n.diemGk);
  printf("\nNhap diem do an:");
  scanf("%f", & n.diemDA);
  printf("\nNhap diem thuc thanh:");
  scanf("%f", & n.diemTH);
  printf("\nNhap diem cuoi ky:");
  scanf("%f", & n.diemCK);
}

void XuatMonHoc(MONHOC n) {
  printf("\nMa so mon hoc:%d", n.Masomonhoc);
  printf("\nTen mon hoc:%s", n.Tenmonhoc);
  printf("\nSo chi:%d", n.sotinchi);
  printf("\nDiemBT:%f \t DiemGK:%f \t DiemDA:%f \t DiemTH:%f \t DiemCK:%f", n.diemBT, n.diemGk, n.diemDA, n.diemTH, n.diemCK);
}
void XuatMonHoc2(MONHOC n, FILE * & fileout) {
  fprintf(fileout, "\nMa so mon hoc:%d", n.Masomonhoc);
  fprintf(fileout, "\nTen mon hoc:%s", n.Tenmonhoc);
  fprintf(fileout, "\nSo chi:%d", n.sotinchi);
  fprintf(fileout, "\nDiemBT:%f \t DiemGK:%f \t DiemDA:%f \t DiemTH:%f \t DiemCK:%f", n.diemBT, n.diemGk, n.diemDA, n.diemTH, n.diemCK);
}