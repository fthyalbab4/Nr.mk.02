// rea decompile_all
// name: FUN_004fcbfc
// address: 0x4fcbfc
// body: available
// range: 0x4fcbfc-0x4fcd32 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fcbfc(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar2 = *(int *)(param_1 + 0x14);
  if ((iVar2 != 0) && (iVar2 != *(int *)(*(int *)(param_4 + -4) + 100))) {
    iVar2 = FUN_004fa438(iVar2);
    if (iVar2 == 1) {
      FUN_004fcbfc(*(undefined4 *)(param_1 + 0x14));
    }
  }
  iVar2 = FUN_004fa438(*(undefined4 *)(param_1 + 0x14));
  if ((iVar2 == 1) || (*(int *)(param_1 + 0x24) == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    iVar2 = *(int *)(*(int *)(param_4 + -4) + 0x18) + *(int *)(*(int *)(param_4 + -4) + 0xc) + 0xe;
    iVar3 = FUN_004faa64(param_1);
    if (iVar3 == 0) {
      iVar3 = FUN_004faa58(param_1);
      if (iVar3 != 0) {
        FUN_004faa58(param_1);
        iVar3 = FUN_004fa980();
        if (iVar3 - *(int *)(param_1 + 0x24) < iVar2) {
          bVar1 = true;
        }
        else {
          iVar2 = FUN_004fa494(param_1);
          *(int *)(param_1 + 0x20) = iVar2 + *(int *)(param_1 + 0x24);
          FUN_004faa58(param_1);
          FUN_004fa9f8();
        }
      }
    }
    else {
      iVar3 = FUN_004faa64(param_1);
      iVar4 = FUN_004fa980(iVar3);
      iVar5 = FUN_004fa494(iVar3);
      if ((iVar4 - iVar5) - *(int *)(param_1 + 0x24) < iVar2) {
        bVar1 = true;
      }
      else {
        iVar2 = FUN_004fa980(iVar3);
        *(int *)(iVar3 + 0x20) = iVar2 - *(int *)(param_1 + 0x24);
        iVar2 = FUN_004fa980(iVar3);
        *(int *)(param_1 + 0x20) = iVar2 + *(int *)(param_1 + 0x24);
        FUN_004faa64(param_1);
        FUN_004fa9f8();
      }
    }
  }
  if (bVar1) {
    FUN_004fa660(*(undefined4 *)(param_1 + 0x14));
  }
  FUN_004fad3c(*(undefined4 *)(param_4 + -4),*(undefined4 *)(param_1 + 0x14));
  return;
}
