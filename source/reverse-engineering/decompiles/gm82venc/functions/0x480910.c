// rea decompile_all
// name: FUN_00480910
// address: 0x480910
// body: available
// range: 0x480910-0x480984 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x480926 (push 0x480985 followed by fs-segment stack chaining); handler 0x480985 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00480910(int param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_00480985;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00480258(param_1,0);
  FUN_004809cc(param_1);
  if (*(int *)(param_1 + 0x2c) == 0) {
    FUN_0040b9d0(PTR_LAB_00689668,&local_8);
    FUN_0047fa64(local_8);
  }
  FUN_00480128(param_1,0);
  puVar1 = puStack_14;
  *(undefined2 *)(*(int *)(param_1 + 0x28) + 0x4c) =
       *(undefined2 *)(&DAT_00681374 + (param_2 & 0xff) * 4);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0048098c;
  puStack_18 = (undefined1 *)0x480984;
  thunk_FUN_004072d8(&local_8,uStack_1c,puVar1);
  return;
}
