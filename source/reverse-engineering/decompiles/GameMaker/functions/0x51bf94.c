// rea decompile_all
// name: FUN_0051bf94
// address: 0x51bf94
// body: available
// range: 0x51bf94-0x51bfe9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051bf94(int param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_1c [16];

  FUN_004f6bbc(param_1,param_2);
  if (*(int *)(param_2 + 8) == 0) {
    FUN_004efb90(param_1,0xb039,0,*(undefined4 *)(param_2 + 4));
    iVar1 = *(int *)(param_2 + 4);
    if (param_1 == *(int *)(iVar1 + 0x90)) {
      FUN_004edf30(iVar1,auStack_1c);
      FUN_00405d08(iVar1,0xffffffff,auStack_1c);
    }
  }
  return;
}
