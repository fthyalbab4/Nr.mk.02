// rea decompile_all
// name: FUN_00444484
// address: 0x444484
// body: available
// range: 0x444484-0x4444fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4444a7 (push 0x4444fb followed by fs-segment stack chaining); handler 0x4444fb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00444484(undefined4 param_1,undefined4 param_2,undefined4 param_3,code *param_4,
                 undefined4 param_5)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  undefined4 *local_8;

  puStack_14 = (undefined1 *)0x444499;
  local_8 = (undefined4 *)FUN_00405a4c(&LAB_00433630,1);
  puStack_18 = &LAB_004444fb;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  (*param_4)(param_5,local_8);
  FUN_0044699c(param_1,10);
  local_c = (**(code **)*local_8)();
  FUN_00444438(param_1,&local_c,4);
  FUN_00444438(param_1,local_8[1],local_c);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00444502;
  puStack_18 = (undefined1 *)0x4444fa;
  FUN_00405a7c(local_8,uStack_1c,puVar1);
  return;
}
