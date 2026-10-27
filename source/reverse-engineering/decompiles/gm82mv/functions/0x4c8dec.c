// rea decompile_all
// name: FUN_004c8dec
// address: 0x4c8dec
// body: available
// range: 0x4c8dec-0x4c8e44 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c8dec(int param_1,int param_2,undefined1 *param_3)

{
  int extraout_EDX;
  int iVar1;

  if (param_2 != 0) {
    iVar1 = param_2;
    if (*(int *)(param_2 + 8) != 0) {
      FUN_004c8db8();
      param_3 = &stack0xfffffffc;
      iVar1 = extraout_EDX;
    }
    if (*(int *)(param_2 + 0x18) == 0) {
      if (*(int *)(param_2 + 0x14) != 0) {
        iVar1 = *(int *)(param_2 + 0xc);
        *(int *)(*(int *)(param_2 + 0x14) + 8) = iVar1;
      }
    }
    else {
      iVar1 = *(int *)(param_2 + 0xc);
      *(int *)(*(int *)(param_2 + 0x18) + 0xc) = iVar1;
    }
    if (*(int *)(param_2 + 0xc) != 0) {
      iVar1 = *(int *)(param_2 + 0x18);
      *(int *)(*(int *)(param_2 + 0xc) + 0x18) = iVar1;
    }
    if (param_2 == *(int *)(param_1 + 100)) {
      *(undefined4 *)(param_1 + 100) = 0;
    }
    FUN_00405fdc(param_2,iVar1,param_3);
  }
  return;
}
