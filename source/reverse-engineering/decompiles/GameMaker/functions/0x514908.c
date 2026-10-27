// rea decompile_all
// name: FUN_00514908
// address: 0x514908
// body: available
// range: 0x514908-0x514a58 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00514908(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int iStack_20;
  int iStack_1c;
  undefined1 auStack_18 [8];

  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0x54))(param_2,&local_30);
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x278) + 0x1a);
    local_30 = local_30 - uVar2;
    local_28 = local_28 + uVar2;
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x288) + 0x1a);
    local_2c = local_2c - uVar2;
    local_24 = local_24 + uVar2;
    FUN_004ee09c(param_2,&local_30,auStack_18);
    FUN_004ee1d0(param_1,auStack_18,&iStack_20);
    local_30 = iStack_20;
    local_2c = iStack_1c;
    FUN_004ee09c(param_2,&local_28,auStack_18);
    FUN_004ee1d0(param_1,auStack_18,&iStack_20);
    iVar1 = local_30;
    local_28 = iStack_20;
    local_24 = iStack_1c;
    if (local_30 < 0) {
      FUN_00514018(*(int *)(param_1 + 0x278),*(int *)(*(int *)(param_1 + 0x278) + 0xc) + local_30);
    }
    else {
      iVar3 = FUN_004edf8c(param_1);
      iVar4 = local_28;
      if (iVar3 < local_28) {
        iVar3 = FUN_004edf8c(param_1);
        if (iVar3 < iVar4 - iVar1) {
          local_28 = FUN_004edf8c(param_1);
          local_28 = local_28 + local_30;
        }
        iVar1 = *(int *)(param_1 + 0x278);
        iVar4 = FUN_004edf8c(param_1);
        FUN_00514018(iVar1,(*(int *)(iVar1 + 0xc) + local_28) - iVar4);
      }
    }
    iVar1 = local_2c;
    if (local_2c < 0) {
      FUN_00514018(*(int *)(param_1 + 0x288),*(int *)(*(int *)(param_1 + 0x288) + 0xc) + local_2c);
    }
    else {
      iVar3 = FUN_004edfcc(param_1);
      iVar4 = local_24;
      if (iVar3 < local_24) {
        iVar3 = FUN_004edfcc(param_1);
        if (iVar3 < iVar4 - iVar1) {
          local_24 = FUN_004edfcc(param_1);
          local_24 = local_24 + local_2c;
        }
        iVar1 = *(int *)(param_1 + 0x288);
        iVar4 = FUN_004edfcc(param_1);
        FUN_00514018(iVar1,(*(int *)(iVar1 + 0xc) + local_24) - iVar4);
      }
    }
  }
  return;
}
