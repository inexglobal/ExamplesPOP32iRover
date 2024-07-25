#include <POP32.h>
void setup() {
  oled.text(0, 0, "Press SW_OK");
  oled.show();
  waitSW_OK();
}
void loop() {
  fd(30);
  delay(1000);
  bk(30);
  delay(1000);
}
