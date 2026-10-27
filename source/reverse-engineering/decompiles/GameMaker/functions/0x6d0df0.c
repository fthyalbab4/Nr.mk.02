// rea decompile_all
// name: FUN_006d0df0
// address: 0x6d0df0
// body: available
// range: 0x6d0df0-0x6d0e2d inclusive
// range: 0x6d0e5e-0x6d0f4f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6d0e0f (push 0x6d0f50 followed by fs-segment stack chaining); handler 0x6d0f50 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d0df0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_28 = &LAB_006d0f50;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  FUN_00407eb8(param_3,L"<unknown>");
  switch(param_1) {
  case 0:
    FUN_00407eb8(param_3,L"Create");
    break;
  case 1:
    FUN_00407eb8(param_3,L"Destroy");
    break;
  case 2:
    FUN_0041666c(param_2,&local_8);
    FUN_0040839c(param_3,L"Alarm ",local_8);
    break;
  case 3:
    FUN_006d0d48(param_2,param_3);
    break;
  case 4:
    FUN_0062cabc(param_2,&local_c);
    FUN_0040839c(param_3,L"Collision ",local_c);
    break;
  case 5:
    FUN_006bd168(param_2,param_3);
    break;
  case 6:
    FUN_006bd830(param_2,param_3);
    break;
  case 7:
    FUN_006be4cc(param_2,param_3);
    break;
  case 8:
    FUN_00407eb8(param_3,L"Draw");
    break;
  case 9:
    FUN_006bd168(param_2,&local_10);
    FUN_0040839c(param_3,L"Key Press ",local_10);
    break;
  case 10:
    FUN_006bd168(param_2,&local_14);
    FUN_0040839c(param_3,L"Key Release ",local_14);
    break;
  case 0xb:
    FUN_006bcce4(param_2,param_3);
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_006d0f57;
  puStack_28 = (undefined1 *)0x6d0f4f;
  thunk_FUN_00406e80(&local_14,4,puVar1);
  return;
}
