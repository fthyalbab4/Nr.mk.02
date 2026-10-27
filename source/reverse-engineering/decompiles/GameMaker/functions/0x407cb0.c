// rea decompile_all
// name: FUN_00407cb0
// address: 0x407cb0
// body: available
// range: 0x407cb0-0x407d2a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00407cb0(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;

  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + -4) >> 1;
  }
  if (uVar1 != 0) {
    uVar2 = 0;
    if (*param_1 != 0) {
      uVar2 = *(uint *)(*param_1 + -4) >> 1;
    }
    iVar3 = FUN_00407a50(uVar1 + uVar2);
    if (uVar2 != 0) {
      FUN_0040450c(*param_1,iVar3,uVar2 * 2);
    }
    FUN_0040450c(param_2,iVar3 + uVar2 * 2,uVar1 * 2);
    FUN_00407a68(param_1,iVar3);
  }
  return;
}
