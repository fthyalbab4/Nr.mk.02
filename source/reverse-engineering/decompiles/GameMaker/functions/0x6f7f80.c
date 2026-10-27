// rea decompile_all
// name: FUN_006f7f80
// address: 0x6f7f80
// body: available
// range: 0x6f7f80-0x6f7fa9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f7f80(int param_1)

{
  undefined4 extraout_ECX;
  undefined1 *puVar1;
  int iVar2;

  FUN_00715334(*(undefined4 *)(param_1 + 0x3dc));
  puVar1 = &LAB_006f9564;
  iVar2 = param_1;
  FUN_00714f58(*(undefined4 *)(param_1 + 0x3dc));
  FUN_006f9f70(param_1,param_1,extraout_ECX,puVar1,iVar2);
  return;
}
