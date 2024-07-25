#include <POP32.h>
int mid_l = 2500;
int mid_r = 2600;
void setup() {
  waitSW_OK_bmp();
}
void loop() {
  int L = analog(1);
  int R = analog(2);
  if (L > mid_l && R > mid_r) {
    fd(20);
  } else if (L < mid_l && R > mid_r) {
    sl(20);
  } else if (L > mid_l && R < mid_r) {
    sr(20);
  } else if (L < mid_l && R < mid_r) {
    ao();
    beep();
    delay(2000);
  }
}
