// rea decompile_all
// name: FUN_00405540
// address: 0x405540
// body: available
// range: 0x405540-0x405586 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00405540(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_c;

  if ((*(byte *)(param_1 + 6) & 1) == 0) {
    local_c = CONCAT31((int3)((uint)param_3 >> 8),10);
    uVar1 = FUN_00405470(param_1,&local_c,1);
  }
  else {
    local_c = CONCAT22((short)((uint)param_3 >> 0x10),0xa0d);
    uVar1 = FUN_00405470(param_1,&local_c,2);
  }
  FUN_00404c58(param_1);
  return uVar1;
}
