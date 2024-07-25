#include <POP32.h>
int mid_l = 2500, mid_r = 2600;
int L, R;
void setup() {
  waitSW_OK_bmp();
}
void loop() {
  LLL();
  LLL();
  LLL();
  LLL();
  RRR();
  RRR();
  RRR();
  RRR();
}
void RRR() {
  while (1) {
    L = analog(1);
    R = analog(2);
    if (L > mid_l && R > mid_r) {
      fd(20);
    } else if (L < mid_l && R > mid_r) {
      sl(20);
    } else if (L > mid_l && R < mid_r) {
      sr(20);
    } else if (L < mid_l && R < mid_r) {
      R90();
      break;
    }
  }
}
void LLL() {
  while (1) {
    L = analog(1);
    R = analog(2);
    if (L > mid_l && R > mid_r) {
      fd(20);
    } else if (L < mid_l && R > mid_r) {
      sl(20);
    } else if (L > mid_l && R < mid_r) {
      sr(20);
    } else if (L < mid_l && R < mid_r) {
      L90();
      break;
    }
  }
}
void L90() {
  fd(30);
  sound(1500, 250);
  while (analog(1) > mid_l) { sl(30); }
  while (analog(1) < mid_l) { sl(30); }
}
void R90() {
  fd(30);
  sound(1500, 250);
  while (analog(2) > mid_r) { sr(30); }
  while (analog(2) < mid_r) { sr(30); }
}
