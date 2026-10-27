// rea decompile_all
// name: FUN_0056dba0
// address: 0x56dba0
// body: available
// range: 0x56dba0-0x56dcf8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056dba0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar2 = *(int *)(param_1 + 8) + -1;
  iVar4 = -1;
  if (-1 < iVar2) {
    do {
      iVar4 = iVar2;
      if (param_2 == *(int *)(*(int *)(param_1 + 4) + iVar2 * 0x28)) break;
      iVar2 = iVar2 + -1;
      iVar4 = -1;
    } while (iVar2 != -1);
  }
  if (iVar4 < 0) {
    iVar4 = *(int *)(param_1 + 8);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    FUN_00409dfc(param_1 + 4,&DAT_0056d6a0,1,*(undefined4 *)(param_1 + 8));
    piVar1 = (int *)(*(int *)(param_1 + 4) + -0x28 + *(int *)(param_1 + 8) * 0x28);
    *piVar1 = param_2;
    FUN_00409dfc(piVar1 + 8,&DAT_0056d600,1,0);
    piVar1[2] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    FUN_004072d8(piVar1 + 6);
  }
  iVar4 = *(int *)(param_1 + 4) + iVar4 * 0x28;
  if (param_3 == 0) {
    FUN_00409360(iVar4 + 8,param_4,&DAT_00615f70);
  }
  else {
    iVar2 = param_3 / 32000;
    param_3 = param_3 % 32000;
    iVar3 = FUN_00409c34(*(undefined4 *)(iVar4 + 0x20));
    if (iVar3 <= iVar2) {
      FUN_00409dfc(iVar4 + 0x20,&DAT_0056d600,1,iVar2 + 1);
    }
    iVar3 = FUN_00409c34(*(undefined4 *)(*(int *)(iVar4 + 0x20) + iVar2 * 4));
    if (iVar3 <= param_3) {
      FUN_00409dfc(*(int *)(iVar4 + 0x20) + iVar2 * 4,&DAT_0056d5c8,1,param_3 + 1);
    }
    FUN_00409360(*(int *)(*(int *)(iVar4 + 0x20) + iVar2 * 4) + param_3 * 0x18,param_4,&DAT_00615f70
                );
  }
  return;
}
