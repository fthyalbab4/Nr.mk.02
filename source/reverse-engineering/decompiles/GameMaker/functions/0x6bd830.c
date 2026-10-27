// rea decompile_all
// name: FUN_006bd830
// address: 0x6bd830
// body: available
// range: 0x6bd830-0x6bd851 inclusive
// range: 0x6bd94a-0x6bdc0a inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006bd830(undefined4 param_1,undefined4 param_2)

{
  FUN_00407eb8(param_2,L"<unknown>");
  switch(param_1) {
  case 0:
    FUN_00407eb8(param_2,L"Left Button");
    return;
  case 1:
    FUN_00407eb8(param_2,L"Right Button");
    return;
  case 2:
    FUN_00407eb8(param_2,L"Middle Button");
    return;
  case 3:
    FUN_00407eb8(param_2,L"No Button");
    return;
  case 4:
    FUN_00407eb8(param_2,L"Left Pressed");
    return;
  case 5:
    FUN_00407eb8(param_2,L"Right Pressed");
    return;
  case 6:
    FUN_00407eb8(param_2,L"Middle Pressed");
    return;
  case 7:
    FUN_00407eb8(param_2,L"Left Released");
    return;
  case 8:
    FUN_00407eb8(param_2,L"Right Released");
    return;
  case 9:
    FUN_00407eb8(param_2,L"Middle Released");
    return;
  case 10:
    FUN_00407eb8(param_2,L"Mouse Enter");
    return;
  case 0xb:
    FUN_00407eb8(param_2,L"Mouse Leave");
    return;
  case 0x10:
    FUN_00407eb8(param_2,L"Joystick 1 Left");
    return;
  case 0x11:
    FUN_00407eb8(param_2,L"Joystick 1 Right");
    return;
  case 0x12:
    FUN_00407eb8(param_2,L"Joystick 1 Up");
    return;
  case 0x13:
    FUN_00407eb8(param_2,L"Joystick 1 Down");
    return;
  case 0x15:
    FUN_00407eb8(param_2,L"Joystick 1 Button 1");
    return;
  case 0x16:
    FUN_00407eb8(param_2,L"Joystick 1 Button 2");
    return;
  case 0x17:
    FUN_00407eb8(param_2,L"Joystick 1 Button 3");
    return;
  case 0x18:
    FUN_00407eb8(param_2,L"Joystick 1 Button 4");
    return;
  case 0x19:
    FUN_00407eb8(param_2,L"Joystick 1 Button 5");
    return;
  case 0x1a:
    FUN_00407eb8(param_2,L"Joystick 1 Button 6");
    return;
  case 0x1b:
    FUN_00407eb8(param_2,L"Joystick 1 Button 7");
    return;
  case 0x1c:
    FUN_00407eb8(param_2,L"Joystick 1 Button 8");
    return;
  case 0x1f:
    FUN_00407eb8(param_2,L"Joystick 2 Left");
    return;
  case 0x20:
    FUN_00407eb8(param_2,L"Joystick 2 Right");
    return;
  case 0x21:
    FUN_00407eb8(param_2,L"Joystick 2 Up");
    return;
  case 0x22:
    FUN_00407eb8(param_2,L"Joystick 2 Down");
    return;
  case 0x24:
    FUN_00407eb8(param_2,L"Joystick 2 Button 1");
    return;
  case 0x25:
    FUN_00407eb8(param_2,L"Joystick 2 Button 2");
    return;
  case 0x26:
    FUN_00407eb8(param_2,L"Joystick 2 Button 3");
    return;
  case 0x27:
    FUN_00407eb8(param_2,L"Joystick 2 Button 4");
    return;
  case 0x28:
    FUN_00407eb8(param_2,L"Joystick 2 Button 5");
    return;
  case 0x29:
    FUN_00407eb8(param_2,L"Joystick 2 Button 6");
    return;
  case 0x2a:
    FUN_00407eb8(param_2,L"Joystick 2 Button 7");
    return;
  case 0x2b:
    FUN_00407eb8(param_2,L"Joystick 2 Button 8");
    return;
  case 0x32:
    FUN_00407eb8(param_2,L"Glob Left Button");
    return;
  case 0x33:
    FUN_00407eb8(param_2,L"Glob Right Button");
    return;
  case 0x34:
    FUN_00407eb8(param_2,L"Glob Middle Button");
    return;
  case 0x35:
    FUN_00407eb8(param_2,L"Glob Left Pressed");
    return;
  case 0x36:
    FUN_00407eb8(param_2,L"Glob Right Pressed");
    return;
  case 0x37:
    FUN_00407eb8(param_2,L"Glob Middle Pressed");
    return;
  case 0x38:
    FUN_00407eb8(param_2,L"Glob Left Released");
    return;
  case 0x39:
    FUN_00407eb8(param_2,L"Glob Right Released");
    return;
  case 0x3a:
    FUN_00407eb8(param_2,L"Glob Middle Released");
    return;
  case 0x3c:
    FUN_00407eb8(param_2,L"Mouse Wheel Up");
    return;
  case 0x3d:
    FUN_00407eb8(param_2,L"Mouse Wheel Down");
  }
  return;
}
