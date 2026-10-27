// rea decompile_all
// name: FUN_00440854
// address: 0x440854
// body: available
// range: 0x440854-0x44088a inclusive
// range: 0x4408e8-0x4409f8 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x44086d (push 0x4409f9 followed by fs-segment stack chaining); handler 0x4409f9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00440854(undefined4 param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_10 = &stack0xfffffffc;
  local_c = 0;
  puStack_14 = &LAB_004409f9;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  local_8 = param_1;
  uVar2 = FUN_00440718(param_1);
  switch(uVar2 & 0x7f) {
  case 1:
    FUN_00440794();
    break;
  case 2:
    FUN_00441008(local_8,1);
    break;
  case 3:
    FUN_00441008(local_8,2);
    break;
  case 4:
    FUN_00441008(local_8,4);
    break;
  case 5:
    FUN_00441008(local_8,10);
    break;
  case 6:
  case 7:
    FUN_00440460(local_8,&local_c);
    break;
  case 10:
    FUN_004407c0(1);
    break;
  case 0xb:
    FUN_0044074c(local_8);
    break;
  case 0xc:
    FUN_004407c0(1);
    break;
  case 0xe:
    FUN_004407f0();
    break;
  case 0xf:
    FUN_00441008(local_8,4);
    break;
  case 0x10:
    FUN_00441008(local_8,8);
    break;
  case 0x11:
    FUN_00441008(local_8,8);
    break;
  case 0x12:
    FUN_004407c0(2);
    break;
  case 0x13:
    FUN_00441008(local_8,8);
    break;
  case 0x14:
    FUN_004407c0(1);
    break;
  case 0x15:
    FUN_00441008(local_8,8);
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00440a00;
  puStack_14 = (undefined1 *)0x4409f8;
  thunk_FUN_004072d8(&local_c,uStack_18,puVar1);
  return;
}
