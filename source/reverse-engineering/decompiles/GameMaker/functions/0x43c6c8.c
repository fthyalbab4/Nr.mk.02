// rea decompile_all
// name: FUN_0043c6c8
// address: 0x43c6c8
// body: available
// range: 0x43c6c8-0x43c705 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043c6c8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  FUN_00405d74(param_1);
  iVar1 = FUN_00405d08(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_00405d08(param_1);
    uVar3 = FUN_0040b140(param_1 + 4);
    FUN_00405b44(uVar2,&DAT_0043c708,uVar3);
  }
  return;
}
