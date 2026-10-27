// rea decompile_all
// name: FUN_00649ad4
// address: 0x649ad4
// body: available
// range: 0x649ad4-0x649b29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00649ad4(int *param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = *param_1;
  iVar2 = param_1[1];
  if (DAT_0077f1a8 != 0) {
    FUN_00702e40(*(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x704),iVar1,iVar2,0,
                 (param_1[3] - iVar2) + 1,(param_1[2] - iVar1) + 1,iVar2,iVar1,DAT_0077f1a8);
  }
  return;
}
