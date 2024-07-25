#include <POP32.h>
int mid_l = 2500;
int mid_r = 2600;
void setup() {
  oled.text(0, 0, "Press SW_OK");
  oled.show();
  waitSW_OK();
}
void loop() {
  int L = analog(1);
  int R = analog(2);
  if (L > mid_l && R > mid_r) {
    fd(30);
  } else if (L < mid_l && R > mid_r) {
    sl(100);
  } else if (L > mid_l && R < mid_r) {
    sr(100);
  }
}
