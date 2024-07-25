#include <POP32.h>
void setup() {
  oled.text(0, 0, "Press SW_OK");
  oled.show();
  waitSW_OK();
}
void loop() {
  int dist = analog(0) / 41;
  fd(30);
  if (dist < 30) {
    bk(30);
    delay(700);
    sl(30);
    delay(500);
  }
}
