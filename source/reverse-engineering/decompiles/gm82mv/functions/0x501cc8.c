// rea decompile_all
// name: FUN_00501cc8
// address: 0x501cc8
// body: available
// range: 0x501cc8-0x501db0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x501cfb (push 0x501de2 followed by fs-segment stack chaining); handler 0x501de2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x501d3b (push 0x501db1 followed by fs-segment stack chaining); handler 0x501db1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00501cc8(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  bool bVar3;
  undefined4 uStack_29c;
  undefined1 *puStack_298;
  undefined1 *puStack_294;
  undefined4 uStack_290;
  undefined1 *puStack_28c;
  undefined1 *puStack_288;
  undefined4 local_27c;
  int local_278;
  undefined1 local_274 [16];
  uint local_264;
  undefined4 local_260;

  local_27c = 0;
  puStack_288 = (undefined1 *)0x501cf0;
  FUN_00408ff8(local_274,&DAT_00410798);
  puStack_28c = &LAB_00501de2;
  uStack_290 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_290;
  local_278 = 0;
  puStack_294 = (undefined1 *)0x501d18;
  puStack_288 = &stack0xfffffffc;
  FUN_00500354(param_2,&DAT_00501e04,&local_27c);
  puStack_294 = (undefined1 *)0x501d2e;
  iVar2 = FUN_00416d4c(local_27c,0x10,local_274);
  puStack_298 = &LAB_00501db1;
  uStack_29c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_29c;
  puVar1 = &stack0xfffffffc;
  while (iVar2 == 0) {
    bVar3 = (local_264 & 0x10) == 0x10;
    puStack_294 = puVar1;
    if (((bVar3) && (FUN_0040891c(local_260,&DAT_00501e18), !bVar3)) &&
       (FUN_0040891c(local_260,&DAT_00501e28), !bVar3)) {
      (**(code **)(*param_3 + 0x38))(param_3,local_260);
      local_278 = local_278 + 1;
    }
    iVar2 = FUN_00416d9c(local_274);
    puVar1 = puStack_294;
  }
  *in_FS_OFFSET = uStack_29c;
  puStack_294 = &LAB_00501db8;
  puStack_298 = (undefined1 *)0x501db0;
  FUN_00416dc0(local_274,uStack_29c,puVar1);
  return;
}
