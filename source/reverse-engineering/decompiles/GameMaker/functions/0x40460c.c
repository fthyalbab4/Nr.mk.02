// rea decompile_all
// name: FUN_0040460c
// address: 0x40460c
// body: available
// range: 0x40460c-0x4046c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040460c(ushort *param_1,int *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;

  while( true ) {
    for (; (*param_1 != 0 && (*param_1 < 0x21)); param_1 = param_1 + 1) {
    }
    if ((*param_1 != 0x22) || (param_1[1] != 0x22)) break;
    param_1 = param_1 + 2;
  }
  iVar5 = 0;
  puVar3 = param_1;
  while (0x20 < *puVar3) {
    puVar2 = puVar3;
    if (*puVar3 == 0x22) {
      while( true ) {
        puVar3 = puVar2 + 1;
        if ((*puVar3 == 0) || (*puVar3 == 0x22)) break;
        iVar5 = iVar5 + 1;
        puVar2 = puVar3;
      }
      if (*puVar3 != 0) {
        puVar3 = puVar2 + 2;
      }
    }
    else {
      iVar5 = iVar5 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  FUN_00408244(param_2,iVar5);
  iVar5 = *param_2;
  iVar4 = 0;
  while (uVar1 = *param_1, 0x20 < uVar1) {
    puVar3 = param_1;
    if (uVar1 == 0x22) {
      while( true ) {
        param_1 = puVar3 + 1;
        uVar1 = *param_1;
        if ((uVar1 == 0) || (uVar1 == 0x22)) break;
        *(ushort *)(iVar5 + iVar4 * 2) = uVar1;
        iVar4 = iVar4 + 1;
        puVar3 = param_1;
      }
      if (*param_1 != 0) {
        param_1 = puVar3 + 2;
      }
    }
    else {
      *(ushort *)(iVar5 + iVar4 * 2) = uVar1;
      param_1 = param_1 + 1;
      iVar4 = iVar4 + 1;
    }
  }
  return;
}
