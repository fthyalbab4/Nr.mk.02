// rea decompile_all
// name: FUN_006b771c
// address: 0x6b771c
// body: available
// range: 0x6b771c-0x6b77f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b771c(int param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;

  uVar1 = GetKeyState(0x10);
  if ((uVar1 & 0x80) == 0x80) {
    FUN_006b1018(param_1,1,0,0xffffffff,0,0xffffffff);
  }
  else {
    FUN_006b1018(param_1,0,0,0xffffffff,0,0xffffffff);
  }
  *param_4 = 1;
  uVar1 = GetKeyState(0x11);
  if ((uVar1 & 0x80) == 0x80) {
    iVar2 = FUN_00409a18(*(undefined4 *)(param_1 + 0x2d8));
    if (*(int *)(param_1 + 0x2ec) < iVar2 + -1) {
      *(int *)(param_1 + 0x2ec) = *(int *)(param_1 + 0x2ec) + 1;
    }
    uVar1 = GetKeyState(0x10);
    if ((uVar1 & 0x80) != 0x80) {
      FUN_006b2a1c(param_1);
    }
    FUN_006b281c(param_1);
  }
  else {
    iVar2 = FUN_00409a18(*(undefined4 *)(param_1 + 0x2d8));
    iVar2 = iVar2 - *(int *)(param_1 + 0x2e4);
    iVar3 = *(int *)(param_1 + 0x2f4) + 4;
    if (iVar3 <= iVar2) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    *(int *)(param_1 + 0x2f4) = iVar2;
  }
  FUN_004eed28(param_1);
  return;
}
