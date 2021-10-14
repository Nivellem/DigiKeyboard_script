#include <DigiKeyboard.h>
void setup(){
  DigiKeyboard.update();
  DigiKeyboard.delay(2000);
  }
  void loop() {
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
  delay(500); 
  DigiKeyboard.print("cmd /k color a&cd \\&for /R %f in (.\\*) do @echo Deleting %f?");
  delay(500); 
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(1000); 
  DigiKeyboard.sendKeyStroke(KEY_ENTER,MOD_ALT_LEFT);
  while(1);
}
