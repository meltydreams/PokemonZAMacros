#include <NintendoSwitchControlLibrary.h>
void setup() {
  // put your setup code here, to run once:
  pushButton(Button::B, 500, 5);
}

void loop() {
  // put your main code here, to run repeatedly:
  SwitchControlLibrary().pressButton(Button::ZL);
  SwitchControlLibrary().sendReport();
  delay(50);
  pushButton(Button::A, 200, 5);
  SwitchControlLibrary().releaseButton(Button::ZL);
  SwitchControlLibrary().sendReport();
  delay(200);
}
