// rea decompile_all
// name: FUN_00523048
// address: 0x523048
// body: available
// range: 0x523048-0x5231c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1
FUN_00523048(int param_1,uint param_2,uint param_3,byte *param_4,byte *param_5,byte *param_6,
            byte param_7)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar2 = **(int **)(param_1 + 0x2c) + 0x10;
  if (iVar2 < 0) {
    iVar2 = **(int **)(param_1 + 0x2c) + 0x2f;
  }
  iVar2 = (param_2 & 0xff) + (iVar2 >> 5);
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0xff < iVar2) {
    iVar2 = 0xff;
  }
  iVar3 = **(int **)(param_1 + 0x30) + 0x10;
  if (iVar3 < 0) {
    iVar3 = **(int **)(param_1 + 0x30) + 0x2f;
  }
  iVar3 = (param_3 & 0xff) + (iVar3 >> 5);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0xff < iVar3) {
    iVar3 = 0xff;
  }
  iVar4 = **(int **)(param_1 + 0x34) + 0x10;
  if (iVar4 < 0) {
    iVar4 = **(int **)(param_1 + 0x34) + 0x2f;
  }
  iVar4 = (uint)param_7 + (iVar4 >> 5);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0xff < iVar4) {
    iVar4 = 0xff;
  }
  uVar1 = FUN_00521b30(param_1,iVar2,iVar3,param_4,param_5,param_6,iVar4);
  FUN_00522ff8(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x38),
               iVar2 - (uint)*param_6,&stack0xfffffffc);
  FUN_00522ff8(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x3c),
               iVar3 - (uint)*param_5,&stack0xfffffffc);
  FUN_00522ff8(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x40),
               iVar4 - (uint)*param_4,&stack0xfffffffc);
  if (*(int *)(param_1 + 4) == 1) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 4;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 4;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 4;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 4;
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 4;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 4;
  }
  else {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -4;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -4;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -4;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -4;
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -4;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -4;
  }
  return uVar1;
}
