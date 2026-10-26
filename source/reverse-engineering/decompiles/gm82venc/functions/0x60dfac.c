// rea decompile_all
// name: FUN_0060dfac
// address: 0x60dfac
// body: available
// range: 0x60dfac-0x60e13c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060dfac(int param_1,int param_2,char param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10)

{
  int iVar1;

  *(int *)(param_1 + 0x10c) = param_2;
  if (-1 < param_2) {
    iVar1 = FUN_0057bed8();
    if ((iVar1 == 0) || (*(double *)(iVar1 + 0x20) <= 0.0)) {
      *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
    }
    else {
      *(undefined4 *)(param_1 + 0x120) = param_9;
      *(undefined4 *)(param_1 + 0x124) = param_10;
      if (*(double *)(param_1 + 0x120) < 0.0) {
        *(undefined4 *)(param_1 + 0x110) = 0;
        *(undefined4 *)(param_1 + 0x114) = 0x3ff00000;
      }
      else {
        *(undefined4 *)(param_1 + 0x110) = 0;
        *(undefined4 *)(param_1 + 0x114) = 0;
      }
      *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0x110);
      *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x114);
      *(undefined4 *)(param_1 + 0x128) = param_7;
      *(undefined4 *)(param_1 + 300) = param_8;
      if (0.0 <= *(double *)(param_1 + 0x128)) {
        *(undefined4 *)(param_1 + 0x130) = param_5;
        *(undefined4 *)(param_1 + 0x134) = param_6;
        *(undefined4 *)(param_1 + 0x138) = param_4;
        if (param_3 == '\0') {
          if (*(double *)(param_1 + 0x120) < 0.0) {
            FUN_0057b538(iVar1);
            FUN_0057b568(iVar1);
            FUN_0060ddec(param_1);
          }
          else {
            FUN_0057b538(iVar1);
            FUN_0057b568(iVar1);
            FUN_0060ddec(param_1);
          }
        }
        *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_1 + 0x50);
        *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x54);
        *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x58);
        *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x5c);
      }
      else {
        *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
      }
    }
  }
  return;
}
