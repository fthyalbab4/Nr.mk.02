// rea decompile_all
// name: FUN_004bfb58
// address: 0x4bfb58
// body: available
// range: 0x4bfb58-0x4bfd47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bfb58(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int local_10;

  if (((((param_2 == *(int *)(param_1 + 0x40)) && (param_3 == *(int *)(param_1 + 0x44))) &&
       (param_5 == *(int *)(param_1 + 0x48))) && (param_4 == *(int *)(param_1 + 0x4c))) ||
     (((*(int *)(param_1 + 0x1c8) != 0 || ((*(byte *)(param_1 + 0x1c) & 1) != 0)) ||
      (*(int *)(param_1 + 0x1cc) == 0)))) {
    FUN_004eda30(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    local_10 = FUN_004c056c(param_1);
    iVar3 = FUN_004c27bc(*(undefined4 *)(param_1 + 0x1cc),local_10,param_2,param_3);
    bVar4 = iVar3 != local_10;
    if (bVar4) {
      bVar2 = false;
      iVar3 = FUN_004c056c(param_1);
      if (iVar3 < local_10) {
        local_10 = FUN_004c056c(param_1);
      }
    }
    else if (((byte)(*(char *)(param_1 + 0x1c6) - 3U) < 2) && (param_5 != *(int *)(param_1 + 0x48)))
    {
      bVar2 = true;
      bVar4 = bVar2;
    }
    else {
      bVar2 = false;
      bVar4 = bVar2;
    }
    if ((*(char *)(param_1 + 0x1c6) == '\x02') &&
       ((iVar3 = FUN_004a8960(), 0x40046 < iVar3 ||
        (*(char *)(*(int *)(param_1 + 0x1cc) + 0x2aa) == '\0')))) {
      param_5 = (param_5 + *(int *)(*(int *)(param_1 + 0x1cc) + 0x280)) - *(int *)(param_1 + 0x48);
    }
    if (((byte)(*(char *)(param_1 + 0x1c6) - 3U) < 2) ||
       (param_5 == *(int *)(*(int *)(param_1 + 0x1cc) + 0x280))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    bVar5 = param_4 != *(int *)(*(int *)(param_1 + 0x1cc) + 0x284);
    if (bVar2) {
      FUN_004eda30(param_1,param_2,param_3,param_4,param_5);
    }
    if ((*(byte *)(param_1 + 0x1c) & 0x10) != 0) {
      if (bVar1) {
        FUN_004c1184(*(undefined4 *)(param_1 + 0x1cc),param_5);
      }
      if (bVar5) {
        FUN_004c114c(*(undefined4 *)(param_1 + 0x1cc),param_4);
      }
    }
    if (((!bVar4) || (bVar1)) || (bVar5)) {
      FUN_004c0e9c(*(undefined4 *)(param_1 + 0x1cc),local_10);
    }
    else {
      if (bVar2) {
        if ((byte)(*(char *)(param_1 + 0x1c6) - 3U) < 2) {
          FUN_004c17f8(*(undefined4 *)(param_1 + 0x1cc),local_10);
        }
        else {
          FUN_004c1904(*(undefined4 *)(param_1 + 0x1cc),local_10);
        }
      }
      FUN_004c262c(*(undefined4 *)(param_1 + 0x1cc));
      FUN_004c1000(*(undefined4 *)(param_1 + 0x1cc),0);
    }
  }
  return;
}
