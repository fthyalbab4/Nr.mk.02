// rea decompile_all
// name: FUN_005b6484
// address: 0x5b6484
// body: available
// range: 0x5b6484-0x5b64de inclusive
// range: 0x5b6546-0x5b6563 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5b64a5 (push 0x5b6564 followed by fs-segment stack chaining); handler 0x5b6564 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5b64b3 (push 0x5b64df followed by fs-segment stack chaining); handler 0x5b64df lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b6484(IID *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  LPVOID *ppv;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_48;
  undefined *puStack_44;
  undefined1 *puStack_40;
  undefined4 local_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24 [5];
  undefined4 local_10;
  IID *local_c;

  puStack_34 = &stack0xfffffffc;
  puStack_40 = &stack0xfffffffc;
  local_10 = 0;
  local_24[0] = 0;
  puStack_38 = &LAB_005b6564;
  local_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_3c;
  puStack_44 = &DAT_005b64df;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  local_c = param_1;
  ppv = (LPVOID *)FUN_0040b140(param_2);
  CoCreateInstance(local_c,(LPUNKNOWN)0x0,5,(IID *)&DAT_005b6574,ppv);
  FUN_005b641c();
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStack_48;
  *in_FS_OFFSET = local_3c;
  puStack_34 = &LAB_005b656b;
  puStack_38 = (undefined1 *)0x5b655b;
  thunk_FUN_00406e5c(local_24,local_3c,puVar1);
  puStack_38 = (undefined1 *)0x5b6563;
  thunk_FUN_00406e5c(&local_10);
  return;
}
