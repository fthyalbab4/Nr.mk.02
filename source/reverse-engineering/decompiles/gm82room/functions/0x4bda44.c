// rea decompile_all
// name: FUN_004bda44
// address: 0x4bda44
// body: available
// range: 0x4bda44-0x4bdaea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bda44(int *param_1,int param_2)

{
  int iVar1;

  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  if ((*(ushort *)(param_1 + 7) & 3) == 0) {
    iVar1 = param_1[0x1c];
    if ((*(int *)(iVar1 + 0xc) == 0) || (param_1[0x12] <= *(int *)(iVar1 + 0xc))) {
      if ((*(int *)(iVar1 + 0x14) != 0) && (param_1[0x12] < *(int *)(iVar1 + 0x14))) {
        *(int *)(iVar1 + 0x14) = param_1[0x12];
      }
    }
    else {
      *(int *)(iVar1 + 0xc) = param_1[0x12];
    }
    if ((*(int *)(iVar1 + 8) == 0) || (param_1[0x13] <= *(int *)(iVar1 + 8))) {
      if ((*(int *)(iVar1 + 0x10) != 0) && (param_1[0x13] < *(int *)(iVar1 + 0x10))) {
        *(int *)(iVar1 + 0x10) = param_1[0x13];
      }
    }
    else {
      *(int *)(iVar1 + 8) = param_1[0x13];
    }
    iVar1 = *(int *)(param_2 + 8);
    if ((((iVar1 != 0) && (param_1[0x24] != 0)) && ((*(byte *)((int)param_1 + 0x55) & 4) == 0)) &&
       ((((*(byte *)(iVar1 + 0x18) & 1) == 0 && (*(int *)(iVar1 + 0x10) != 0)) &&
        (*(int *)(iVar1 + 0x14) != 0)))) {
      FUN_004bcbcc(param_1);
    }
  }
  return;
}
