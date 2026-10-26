// rea decompile_all
// name: FUN_00521f04
// address: 0x521f04
// body: available
// range: 0x521f04-0x52210a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00521f04(int param_1,char param_2)

{
  undefined4 uVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;

  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00406510();
    cVar2 = extraout_DL;
  }
  FUN_00521adc(param_1,0);
  uVar1 = FUN_00404324((*(int *)(param_1 + 0x10) + 4) * 4);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = FUN_00404324((*(int *)(param_1 + 0x10) + 4) * 4);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = FUN_00404324((*(int *)(param_1 + 0x10) + 4) * 4);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = FUN_00404324((*(int *)(param_1 + 0x10) + 4) * 4);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = FUN_00404324((*(int *)(param_1 + 0x10) + 4) * 4);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = FUN_00404324((*(int *)(param_1 + 0x10) + 4) * 4);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = FUN_00404324((*(int *)(param_1 + 0x10) + 4) * 4);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = FUN_00404324((*(int *)(param_1 + 0x10) + 4) * 4);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = FUN_00404324((*(int *)(param_1 + 0x10) + 4) * 4);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  FUN_00404f38(*(undefined4 *)(param_1 + 0x14),(*(int *)(param_1 + 0x10) + 4) * 4,0);
  FUN_00404f38(*(undefined4 *)(param_1 + 0x18),(*(int *)(param_1 + 0x10) + 4) * 4,0);
  FUN_00404f38(*(undefined4 *)(param_1 + 0x1c),(*(int *)(param_1 + 0x10) + 4) * 4,0);
  FUN_00404f38(*(undefined4 *)(param_1 + 0x20),(*(int *)(param_1 + 0x10) + 4) * 4,0);
  FUN_00404f38(*(undefined4 *)(param_1 + 0x24),(*(int *)(param_1 + 0x10) + 4) * 4,0);
  FUN_00404f38(*(undefined4 *)(param_1 + 0x28),(*(int *)(param_1 + 0x10) + 4) * 4,0);
  FUN_00404f38(*(undefined4 *)(param_1 + 0x2c),(*(int *)(param_1 + 0x10) + 4) * 4,0);
  FUN_00404f38(*(undefined4 *)(param_1 + 0x30),(*(int *)(param_1 + 0x10) + 4) * 4,0);
  FUN_00404f38(*(undefined4 *)(param_1 + 0x34),(*(int *)(param_1 + 0x10) + 4) * 4,0);
  *(undefined4 *)(param_1 + 0x60) = 1;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 4) * 2;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x14) + 8;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x18) + 8;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x1c) + 8;
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x20) + 8;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x24) + 8;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x28) + 8;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x2c) + 8;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x30) + 8;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x34) + 8;
  if (cVar2 != '\0') {
    FUN_00406568(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}
