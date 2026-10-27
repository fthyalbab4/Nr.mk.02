// rea decompile_all
// name: FUN_004c038c
// address: 0x4c038c
// body: available
// range: 0x4c038c-0x4c03d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c038c(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;

  if (param_2 != *(byte *)(param_1 + 0x1b8)) {
    if (param_2 != 0) {
      FUN_004c0238(param_1,0);
    }
    *(byte *)(param_1 + 0x1b8) = param_2;
    iVar1 = *(int *)(param_1 + 0x1cc);
    if (iVar1 != 0) {
      uVar2 = (uint)param_2;
      uVar3 = FUN_004c056c(param_1);
      FUN_004efb90(iVar1,0x405,uVar3,uVar2);
    }
  }
  return;
}
