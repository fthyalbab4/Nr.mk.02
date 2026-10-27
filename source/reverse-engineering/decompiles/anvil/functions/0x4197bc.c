// rea decompile_all
// name: FUN_004197bc
// address: 0x4197bc
// body: available
// range: 0x4197bc-0x419804 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004197bc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_34;
  undefined1 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined1 local_24 [32];

  local_30 = 0;
  local_28 = 0;
  local_34 = param_2;
  local_2c = param_1;
  uVar1 = FUN_00417be4(local_24,0x10,&DAT_0067cc5c,1,&local_34,4);
  FUN_00419704(local_24,uVar1);
  return;
}
