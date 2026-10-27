// rea decompile_all
// name: FUN_00415890
// address: 0x415890
// body: available
// range: 0x415890-0x415920 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00415890(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;

  uVar2 = param_3 ^ 0xffffffff;
  iVar1 = param_1 + param_3 + -8;
  iVar6 = param_2 + param_3 + -8;
  iVar3 = uVar2 + 9;
  if (iVar3 == 0 || (int)uVar2 < -9) {
    if (*(int *)(iVar3 + iVar1) != *(int *)(iVar3 + iVar6)) {
      return 0;
    }
    uVar7 = iVar3 + iVar1 & 3;
    iVar3 = (uVar2 + 0xd) - uVar7;
    iVar4 = iVar3;
    if (iVar3 == 0 || (int)(uVar2 + 0xd) < (int)uVar7) {
      do {
        if (*(int *)(iVar4 + iVar1) != *(int *)(iVar4 + iVar6)) {
          return 0;
        }
        if (*(int *)(iVar4 + 4 + iVar1) != *(int *)(iVar4 + 4 + iVar6)) {
          return 0;
        }
        iVar5 = iVar4 + 8;
        iVar3 = iVar5;
        if (iVar5 != 0 && -9 < iVar4) break;
        if (*(int *)(iVar5 + iVar1) != *(int *)(iVar5 + iVar6)) {
          return 0;
        }
        if (*(int *)(iVar4 + 0xc + iVar1) != *(int *)(iVar4 + 0xc + iVar6)) {
          return 0;
        }
        iVar3 = iVar4 + 0x10;
        iVar4 = iVar3;
      } while (iVar3 == 0 || iVar5 < -8);
    }
  }
  if (iVar3 < 5) {
    if (*(int *)(iVar3 + iVar1) != *(int *)(iVar3 + iVar6)) {
      return 0;
    }
    iVar3 = iVar3 + 4;
  }
  if (iVar3 < 7) {
    if (*(short *)(iVar3 + iVar1) != *(short *)(iVar3 + iVar6)) {
      return 0;
    }
    iVar3 = iVar3 + 2;
  }
  if ((iVar3 < 8) && (*(char *)(param_1 + param_3 + -1) != *(char *)(param_2 + param_3 + -1))) {
    return 0;
  }
  return 1;
}
