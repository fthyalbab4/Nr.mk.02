// rea decompile_all
// name: FUN_005631e0
// address: 0x5631e0
// body: available
// range: 0x5631e0-0x563224 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005631e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 local_1c;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined4 local_10;
  undefined4 local_c [2];

  puVar2 = &local_1c;
  puVar1 = local_18;
  FUN_004ca46c(*(undefined4 *)PTR_DAT_00689560,local_14,param_3,puVar1,&local_1c);
  FUN_004ca46c(*(undefined4 *)PTR_DAT_00689560,local_c);
  FUN_00562a80(param_1,local_c[0],local_10,puVar1,puVar2);
  return local_1c;
}
