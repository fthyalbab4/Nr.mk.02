// rea decompile_all
// name: FUN_007324e8
// address: 0x7324e8
// body: available
// range: 0x7324e8-0x7325a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x73251a (push 0x7325a8 followed by fs-segment stack chaining); handler 0x7325a8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_007324e8(int param_1,char param_2,undefined4 param_3)

{
  DWORD DVar1;
  undefined4 extraout_ECX;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined4 local_c;
  undefined1 local_5;

  local_20 = 0;
  local_24 = 0;
  local_c = 0;
  local_5 = 0;
  if (param_2 != '\0') {
    puStack_44 = (undefined1 *)0x732508;
    param_1 = FUN_00405fb0();
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  puStack_48 = &LAB_007325a8;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  puStack_44 = &stack0xfffffffc;
  DVar1 = GetLastError();
  *(DWORD *)(param_1 + 0x18) = DVar1;
  FUN_0041b4f0(DVar1,&local_c);
  FUN_00407eb8(param_1 + 0x1c,local_c);
  local_1c = *(undefined4 *)(param_1 + 0x1c);
  local_18 = 0x11;
  local_14 = *(undefined4 *)(param_1 + 0x18);
  local_10 = 0;
  puVar5 = &local_1c;
  uVar4 = 1;
  puVar3 = &LAB_007325dc;
  FUN_0040b75c(PTR_PTR_00781c28,&local_24);
  uVar2 = local_24;
  FUN_00408480(&local_20,3);
  FUN_0041bef4(param_1,0,local_20,uVar2,puVar3,param_3,uVar4,puVar5);
  *in_FS_OFFSET = uVar2;
  thunk_FUN_00406e80(&local_24,2,param_3,&LAB_007325af);
  thunk_FUN_00406e5c(&local_c);
  return;
}
