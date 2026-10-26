// rea decompile_all
// name: FUN_00646190
// address: 0x646190
// body: available
// range: 0x646190-0x64631e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00646190(int param_1,undefined4 param_2,undefined2 param_3,int param_4,int param_5)

{
  short sVar1;
  int iVar2;
  int iVar3;

  if (*(char *)(param_1 + 0x774) == '\x01') {
    *(int *)(param_1 + 0x6f4) = (*(int *)(param_1 + 0x778) - param_5) + *(int *)(param_1 + 0x780);
    *(int *)(param_1 + 0x6f8) = (*(int *)(param_1 + 0x77c) - param_4) + *(int *)(param_1 + 0x784);
    if (*(int *)(param_1 + 0x6f4) < 0) {
      *(undefined4 *)(param_1 + 0x6f4) = 0;
    }
    if (*(int *)(param_1 + 0x6f8) < 0) {
      *(undefined4 *)(param_1 + 0x6f8) = 0;
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x5e0) + 0x27c) - *(int *)(param_1 + 0x788);
    if (iVar2 < *(int *)(param_1 + 0x6f4)) {
      *(int *)(param_1 + 0x6f4) = iVar2;
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x5e4) + 0x27c) - *(int *)(param_1 + 0x78c);
    if (iVar2 < *(int *)(param_1 + 0x6f8)) {
      *(int *)(param_1 + 0x6f8) = iVar2;
    }
    if (*(char *)(*(int *)(param_1 + 0x5e0) + 0x59) == '\0') {
      *(undefined4 *)(param_1 + 0x6f4) = 0;
    }
    if (*(char *)(*(int *)(param_1 + 0x5e4) + 0x59) == '\0') {
      *(undefined4 *)(param_1 + 0x6f8) = 0;
    }
    FUN_00484e60(*(undefined4 *)(param_1 + 0x5e0),*(undefined4 *)(param_1 + 0x6f4));
    FUN_00484e60(*(undefined4 *)(param_1 + 0x5e4),*(undefined4 *)(param_1 + 0x6f8));
  }
  iVar2 = (param_5 + *(int *)(param_1 + 0x6f4)) * 100;
  iVar3 = iVar2 / *(int *)(param_1 + 0x710);
  if (*PTR_DAT_00781d9c != '\0') {
    iVar3 = FUN_00410538(PTR_DAT_007828c8,iVar2 % *(int *)(param_1 + 0x710));
    iVar3 = iVar3 * *(int *)PTR_DAT_007828c8;
  }
  iVar2 = (param_4 + *(int *)(param_1 + 0x6f8)) * 100;
  sVar1 = (short)(iVar2 / *(int *)(param_1 + 0x710));
  if (*PTR_DAT_00781d9c != '\0') {
    sVar1 = FUN_00410538(PTR_DAT_007827a8,iVar2 % *(int *)(param_1 + 0x710));
    sVar1 = sVar1 * (short)*(undefined4 *)PTR_DAT_007827a8;
  }
  FUN_00643fa4(param_1,param_3,iVar3,sVar1);
  return;
}
