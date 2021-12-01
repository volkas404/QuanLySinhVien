#include "NamHoc.h"

void NhapNamHoc(NAMHOC & n) {
  printf("\nNhap nam:");
  scanf("%d", & n.nam);
  do {
    printf("\nNhap hoc ki:");
    scanf("%d", & n.hocky);
  } while (n.hocky < 0 || n.hocky > 4);
}

void XuatNamHoc(NAMHOC n) {
  printf("\n================================== Nam %d ==================================\n", n.nam);
  printf("\nHoc ky:", n.hocky);
}

void XuatNamHoc2(NAMHOC n, FILE * & fileout) {
  fprintf(fileout, "\n================================== Nam %d ==================================\n", n.nam);
  fprintf(fileout, "\nHoc ky:%d", n.hocky);
}