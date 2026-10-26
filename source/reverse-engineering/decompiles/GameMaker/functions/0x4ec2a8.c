// rea decompile_all
// name: FUN_004ec2a8
// address: 0x4ec2a8
// body: available
// range: 0x4ec2a8-0x4ec417 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ec2a8(int *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  HWND pHVar3;
  int iVar4;

  DAT_00788270 = param_1;
  param_1[5] = 0;
  GetCursorPos((LPPOINT)&DAT_0078827c);
  piVar1 = DAT_00788270;
  DAT_00788270[3] = DAT_0078827c;
  piVar1[4] = DAT_00788280;
  DAT_00788284 = GetCursor();
  DAT_00788278 = FUN_004eb478(DAT_00788270);
  DAT_00788288 = param_3;
  cVar2 = FUN_00405c98(param_1,&PTR_FUN_004e03c0);
  if (cVar2 == '\0') {
    if (param_2 == '\0') {
      DAT_0078828c = '\0';
    }
    else {
      DAT_0078828c = '\x01';
    }
  }
  else {
    iVar4 = param_1[0x13];
    if (param_1[0x15] == iVar4 || param_1[0x15] - iVar4 < 0) {
      param_1[10] = 0;
      param_1[0xb] = 0;
    }
    else {
      *(double *)(param_1 + 10) =
           (double)(param_1[3] - iVar4) / (double)(param_1[0x15] - param_1[0x13]);
    }
    if (param_1[0x16] - param_1[0x14] < 1) {
      param_1[0xc] = 0;
      param_1[0xd] = 0;
    }
    else {
      *(double *)(param_1 + 0xc) =
           (double)(param_1[4] - param_1[0x14]) / (double)(param_1[0x16] - param_1[0x14]);
    }
    if (param_2 == '\0') {
      DAT_0078828c = '\0';
    }
    else {
      DAT_0078828c = '\x02';
      (**(code **)(*param_1 + 0x30))();
    }
  }
  DAT_00788290 = (**(code **)(*DAT_00788270 + 8))();
  if (DAT_00788290 != 0) {
    iVar4 = DAT_00788280;
    pHVar3 = GetDesktopWindow();
    FUN_004fa07c(DAT_00788290,pHVar3,DAT_0078827c,iVar4);
  }
  DAT_00788298 = FUN_00405a4c(&LAB_004eb184,1);
  if (DAT_0078828c != '\0') {
    FUN_004ebfc0(&DAT_0078827c);
  }
  return;
}
