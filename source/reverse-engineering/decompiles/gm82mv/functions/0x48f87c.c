// rea decompile_all
// name: FUN_0048f87c
// address: 0x48f87c
// body: available
// range: 0x48f87c-0x48f8ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x48f89a (push 0x48f8ed followed by fs-segment stack chaining); handler 0x48f8ed lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048f87c(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_0048f8ed;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_2;
  puVar2 = (undefined4 *)FUN_004095b8(8,&DAT_004873c0);
  FUN_0041da7c(param_1,&local_c);
  FUN_00408194(puVar2 + 1,local_c);
  *puVar2 = local_8;
  FUN_00438d04(DAT_0068f194,puVar2);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0048f8f4;
  puStack_20 = (undefined1 *)0x48f8ec;
  thunk_FUN_004072d8(&local_c,uStack_24,puVar1);
  return;
}
