#include <Rcpp.h>
using namespace Rcpp;


// https://stackoverflow.com/questions/11588765/using-rcpp-with-windows-specific-includes/13774150
// Undefine the Realloc macro, which is defined by both R and by Windows stuff
#undef Realloc
// Also need to undefine the Free macro
#undef Free

//#define WINVER 0x0500
#include <windows.h>
// below for C++11, but that incl. standard thread library not supported by old Rtools g++ compiler
//#include <thread>         // std::this_thread::sleep_for
//#include <chrono>         // std::chrono::seconds

void sendKeyDown(unsigned char keyCode) {
  INPUT input;
  input.type = INPUT_KEYBOARD;

  input.ki.wVk = keyCode;
  input.ki.dwFlags = 0;
  input.ki.time = 0;
  input.ki.dwExtraInfo = 0;

  SendInput(1, &input, sizeof(INPUT));
}

void sendKeyUp(unsigned char keyCode) {
  INPUT input;
  input.type = INPUT_KEYBOARD;

  input.ki.wVk = keyCode;
  input.ki.dwFlags = KEYEVENTF_KEYUP;
  input.ki.time = 0;
  input.ki.dwExtraInfo = 0;

  SendInput(1, &input, sizeof(INPUT));
}

//' Alt-tabbing function
//' @return Side-effecting function
//' @export
// [[Rcpp::export]]
void altTab() {
  sendKeyDown(VK_LMENU);
  sendKeyDown(VK_TAB);
  //std::this_thread::sleep_for(std::chrono::seconds(10));
  Sleep(2000);
  sendKeyUp(VK_TAB);
  sendKeyUp(VK_LMENU);
}

/*
//' @export
// [[Rcpp::export]]
void ctrlAltDown() {
  sendKeyDown(VK_LCONTROL);
  sendKeyDown(VK_LMENU);
  sendKeyDown(VK_DOWN);
  sendKeyUp(VK_DOWN);
  sendKeyUp(VK_LMENU);
  sendKeyUp(VK_LCONTROL);
}
*/

//' Self-writing and -calling "recursive" function
//' @return Side-effecting function
//' @export
// [[Rcpp::export]]
void loopTest() {
  // http://www.kbdedit.com/manual/low_level_vk_list.html
  sendKeyDown(0x4C);
  sendKeyUp(0x4C);
  Sleep(500);
  sendKeyDown(0x4F);
  sendKeyUp(0x4F);
  Sleep(500);
  sendKeyDown(0x4F);
  sendKeyUp(0x4F);
  Sleep(500);
  sendKeyDown(0x50);
  sendKeyUp(0x50);
  Sleep(500);
  sendKeyDown(VK_LSHIFT);
  sendKeyDown(0x54);
  sendKeyUp(0x54);
  sendKeyUp(VK_LSHIFT);
  Sleep(500);
  sendKeyDown(0x45);
  sendKeyUp(0x45);
  Sleep(500);
  sendKeyDown(0x53);
  sendKeyUp(0x53);
  Sleep(500);
  sendKeyDown(0x54);
  sendKeyUp(0x54);
  Sleep(500);
  sendKeyDown(VK_LSHIFT);
  sendKeyDown(0x38);
  sendKeyUp(0x38);
  sendKeyUp(VK_LSHIFT);
  Sleep(500);
  sendKeyDown(VK_LSHIFT);
  sendKeyDown(0x39);
  sendKeyUp(0x39);
  sendKeyUp(VK_LSHIFT);
  Sleep(500);
  sendKeyDown(VK_RETURN);
  sendKeyUp(VK_RETURN);
}

#include <sendKeys.h>

// WINKEY	-> @
// SHIFT -> +
// CTRL -> ^
// ALT -> %

//' @title Send keys to active window
//' @description Sends keys to the active window. Beware that other processes
//' may affect what the active window might be while the key-strokes are sent.
//' Furthermore, the active window can be switched during a single call to
//' \code{sendKeys}.
//' @param x Single string containing the key sequence to send, possibly
//' including modifiers. See the examples.
//' @references \url{https://www.codeproject.com/Articles/6819/SendKeys-in-C}
//' @export
//' @examples
//' \dontrun{sendKeys("{DELAY=50}@rnotepad{ENTER}")}
//' \dontrun{sendKeys("{DELAY=50}@rchrome{ENTER}{DELAY=300}m{DELAY=50}irai-solutions^{ENTER}")}
// [[Rcpp::export]]
void sendKeys(CharacterVector x) {
  std::string y;
  LPCTSTR z;
  y = x[0];
  z = y.c_str();
  CSendKeys csk;
  csk = CSendKeys();
  csk.SendKeys(z, false);
}

//' @title Activate window
//' @description Activates the desired window by name
//' @param x Name of the window to activate.
//' @export
//' @examples
//' \dontrun{activateWindow("Notepad")}
// [[Rcpp::export]]
void activateWindow(CharacterVector x) {
  std::string y;
  LPCTSTR z;
  y = x[0];
  z = y.c_str();
  CSendKeys csk = CSendKeys();
  csk.AppActivate(z);
}

