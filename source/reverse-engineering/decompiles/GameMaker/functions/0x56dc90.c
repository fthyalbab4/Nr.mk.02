// rea decompile_all
// name: FUN_0056dc90
// address: 0x56dc90
// body: available
// range: 0x56dc90-0x56dcea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056dc90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 int param_5)

{
  char cVar1;
  undefined4 uVar2;

  cVar1 = FUN_00405d08(param_1);
  if (cVar1 == '\0') {
    uVar2 = FUN_0056dba8(param_5,param_2);
    *param_4 = uVar2;
  }
  else {
    uVar2 = FUN_0056dc10(param_5,param_2);
    *param_4 = uVar2;
  }
  uVar2 = FUN_0056dba8(param_5 + 0x30,param_3);
  param_4[1] = uVar2;
  return;
}
