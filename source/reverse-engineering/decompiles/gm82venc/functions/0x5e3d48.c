// rea decompile_all
// name: FUN_005e3d48
// address: 0x5e3d48
// body: available
// range: 0x5e3d48-0x5e3e0c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5e3d62 (push 0x5e3e0d followed by fs-segment stack chaining); handler 0x5e3e0d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e3d48(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 *local_14;
  undefined1 local_10;
  undefined4 local_c;
  int local_8;

  puStack_20 = &stack0xfffffffc;
  local_c = 0;
  puStack_24 = &LAB_005e3e0d;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_00404358(param_1 + 0xd0,*(undefined4 *)(param_1 + 0xd8));
  FUN_0043ca88(*(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xd0),
               *(undefined4 *)(param_1 + 0xd8));
  FUN_0043ca88(*(undefined4 *)(param_1 + 0xb0),&local_8,4);
  local_8 = FUN_005d8d84(local_8);
  iVar2 = FUN_005cb808(*(undefined4 *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xd0),
                       *(undefined4 *)(param_1 + 0xd8));
  *(int *)(param_1 + 0xe0) = iVar2;
  if (iVar2 != local_8) {
    FUN_0040b9d0(PTR_LAB_006888d8,&local_c);
    local_14 = &LAB_005e3e28;
    local_10 = 0x11;
    FUN_005d8ba0(local_c,&local_14,0);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_005e3e14;
  puStack_24 = (undefined1 *)0x5e3e0c;
  thunk_FUN_004072d8(&local_c,uStack_28,puVar1);
  return;
}
