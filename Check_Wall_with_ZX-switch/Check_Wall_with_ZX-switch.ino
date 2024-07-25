#include <POP32.h>
void setup() {
  oled.text(0, 0, "Press SW_OK");
  oled.show();
  waitSW_OK();
}
void loop() {
  fd(50); // เดินหน้าไปเรื่อยๆ
    if (in(3) == 0) {// ซ้ายชน
      bk(50);
    delay(500);
    sr(50);
    delay(400);
  }
  if (in(4) == 0) {  // ขวาชน
    bk(50);
    delay(500);
    sl(50);
    delay(400);
  }
}
