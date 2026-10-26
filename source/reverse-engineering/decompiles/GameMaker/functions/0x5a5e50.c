// rea decompile_all
// name: FUN_005a5e50
// address: 0x5a5e50
// body: available
// range: 0x5a5e50-0x5a5ece inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a5e50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_10;

  local_10 = param_3;
  FUN_005a5de4(param_1,0xd);
  local_10 = FUN_00405a4c(&LAB_0052e8fc,1);
  FUN_005a5de4(&local_10,0x49484452);
  FUN_005a5de4(&local_10,param_2);
  FUN_005a5de4(&local_10,param_3);
  FUN_005a5de4(&local_10,0x8060000);
  FUN_005a5dd0(&local_10,0);
  FUN_005a5d48(param_1,&local_10);
  uVar1 = FUN_005a5d08(local_10);
  FUN_005a5de4(param_1,uVar1);
  FUN_00405a7c(local_10);
  return;
}
