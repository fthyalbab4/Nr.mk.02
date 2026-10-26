// rea decompile_all
// name: FUN_005caa4c
// address: 0x5caa4c
// body: available
// range: 0x5caa4c-0x5cab45 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005caa4c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar3 = *param_1;
  iVar2 = *(int *)((int)param_1 + 0x192);
  *(undefined4 *)(iVar3 + 0x14) = 0x75;
  *(int *)(iVar3 + 0x18) = iVar2;
  *(int *)(iVar3 + 0x1c) = param_2;
  (**(code **)(*param_1 + 4))(param_1,0xffffffff);
  while( true ) {
    if (iVar2 < 0xc0) {
      iVar3 = 2;
    }
    else if ((iVar2 < 0xd0) || (0xd7 < iVar2)) {
      iVar3 = 3;
    }
    else if ((iVar2 == (param_2 + 1U & 7) + 0xd0) || (iVar2 == (param_2 + 2U & 7) + 0xd0)) {
      iVar3 = 3;
    }
    else if ((iVar2 == (param_2 - 1U & 7) + 0xd0) || (iVar2 == (param_2 - 2U & 7) + 0xd0)) {
      iVar3 = 2;
    }
    else {
      iVar3 = 1;
    }
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x60;
    *(int *)(iVar1 + 0x18) = iVar2;
    *(int *)(iVar1 + 0x1c) = iVar3;
    (**(code **)(*param_1 + 4))(param_1,4);
    if (iVar3 == 1) break;
    if (iVar3 == 2) {
      iVar3 = FUN_005ca514(param_1);
      if (iVar3 == 0) {
        return 0;
      }
      iVar2 = *(int *)((int)param_1 + 0x192);
    }
    else if (iVar3 == 3) {
      return 1;
    }
  }
  *(undefined4 *)((int)param_1 + 0x192) = 0;
  return 1;
}
