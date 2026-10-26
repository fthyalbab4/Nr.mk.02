// rea decompile_all
// name: FUN_0053591c
// address: 0x53591c
// body: available
// range: 0x53591c-0x535a3a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0053591c(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 fVar5;
  float10 in_ST7;
  undefined1 local_18;
  int local_14;

  local_18 = 0;
  iVar2 = FUN_0052f024(param_2);
  if ((iVar2 == 0x1a4) || (iVar2 == 0x212)) {
    uVar3 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    if (iVar2 == 0x1a4) {
      iVar4 = FUN_0052f024(param_2);
      *(bool *)(param_1 + 0x10) = iVar4 == 2;
    }
    else {
      uVar1 = FUN_0052f114(param_2);
      *(undefined1 *)(param_1 + 0x10) = uVar1;
    }
    uVar3 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    if (iVar2 == 0x1a4) {
      *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x2c) = 0x10;
      *(undefined4 *)(param_1 + 0x30) = 0x10;
    }
    else {
      uVar3 = FUN_0052f024(param_2);
      *(undefined4 *)(param_1 + 0x28) = uVar3;
      uVar3 = FUN_0052f024(param_2);
      *(undefined4 *)(param_1 + 0x2c) = uVar3;
      uVar3 = FUN_0052f024(param_2);
      *(undefined4 *)(param_1 + 0x30) = uVar3;
    }
    uVar3 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 8) = uVar3;
    FUN_00409be0(param_1 + 4,&DAT_00534870,1,uVar3);
    local_14 = *(int *)(param_1 + 8);
    if (-1 < local_14 + -1) {
      iVar2 = 0;
      do {
        FUN_0052f038(param_2);
        *(double *)(*(int *)(param_1 + 4) + iVar2 * 0x18) = (double)in_ST0;
        in_ST0 = in_ST3;
        in_ST3 = in_ST6;
        fVar5 = in_ST7;
        FUN_0052f038(param_2);
        *(double *)(*(int *)(param_1 + 4) + 8 + iVar2 * 0x18) = (double)in_ST1;
        in_ST1 = in_ST4;
        in_ST4 = in_ST7;
        in_ST6 = fVar5;
        FUN_0052f038(param_2);
        *(double *)(*(int *)(param_1 + 4) + 0x10 + iVar2 * 0x18) = (double)in_ST2;
        iVar2 = iVar2 + 1;
        local_14 = local_14 + -1;
        in_ST2 = in_ST5;
        in_ST5 = fVar5;
        in_ST7 = in_ST6;
      } while (local_14 != 0);
    }
    FUN_0053578c(param_1);
    local_18 = 1;
  }
  return local_18;
}
