// rea decompile_all
// name: FUN_006113b0
// address: 0x6113b0
// body: available
// range: 0x6113b0-0x6114d1 inclusive
// range: 0x6114dc-0x611530 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6113d5 (push 0x611531 followed by fs-segment stack chaining); handler 0x611531 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x611442 (push 0x6114d2 followed by fs-segment stack chaining); handler 0x6114d2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006113b0(undefined4 param_1,char param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_300;
  undefined1 *puStack_2fc;
  undefined1 *puStack_2f8;
  undefined4 uStack_2f4;
  undefined1 *puStack_2f0;
  undefined1 *puStack_2ec;
  undefined1 local_2dc [723];
  char local_9;
  undefined4 local_8;

  puStack_2ec = (undefined1 *)0x6113ca;
  local_9 = param_2;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_2f0 = &LAB_00611531;
  uStack_2f4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2f4;
  puStack_2f8 = (undefined1 *)0x6113e0;
  puStack_2ec = &stack0xfffffffc;
  FUN_00561704(local_8);
  if ((char)PTR_FUN_00688674 == '\0') {
    if (*PTR_PTR_006894b4 != '\0') {
      local_9 = '\x01';
    }
    if (*PTR_DAT_006892f4 != '\0') {
      if (local_9 == '\0') {
        puStack_2f8 = (undefined1 *)0x611421;
        local_9 = FUN_0061118c(local_8,1);
      }
      else {
        puStack_2f8 = (undefined1 *)0x611415;
        FUN_0061118c(local_8,0);
      }
    }
    puStack_2f8 = (undefined1 *)0x611429;
    FUN_005f6964();
    if (*PTR_PTR_006890f0 != '\0') {
      puStack_2fc = &LAB_006114d2;
      uStack_300 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_300;
      puStack_2f8 = &stack0xfffffffc;
      FUN_00404be0(local_2dc,&PTR_DAT_0061154c);
      if (DAT_00688670 == '\0') {
        FUN_00404978(local_2dc);
        FUN_0040448c();
      }
      else {
        FUN_0040496c(local_2dc);
        FUN_0040448c();
      }
      FUN_00408c44(local_2dc,local_8);
      FUN_00405968();
      FUN_0040448c();
      FUN_00405968(local_2dc);
      FUN_0040448c();
      FUN_00405968(local_2dc);
      FUN_0040448c();
      FUN_00404ca4(local_2dc);
      FUN_0040448c();
      *in_FS_OFFSET = uStack_300;
      DAT_00688670 = '\0';
    }
    puStack_2f8 = (undefined1 *)0x6114f0;
    FUN_00408194(&DAT_00688668,local_8);
    PTR_FUN_0068866c._0_1_ = 1;
    if (local_9 != '\0') {
      PTR_FUN_00688674._0_1_ = '\x01';
      *(undefined4 *)PTR_DAT_00688c4c = 0xfffffe70;
      puStack_2f8 = (undefined1 *)0x61151b;
      FUN_004ebab0(*(undefined4 *)PTR_DAT_0068917c);
    }
  }
  puVar1 = puStack_2ec;
  *in_FS_OFFSET = uStack_2f4;
  puStack_2ec = &LAB_00611538;
  puStack_2f0 = (undefined1 *)0x611530;
  thunk_FUN_004072d8(&local_8,uStack_2f4,puVar1);
  return;
}
