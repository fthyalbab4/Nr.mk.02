// rea decompile_all
// name: FUN_005e3484
// address: 0x5e3484
// body: available
// range: 0x5e3484-0x5e3550 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5e34aa (push 0x5e3551 followed by fs-segment stack chaining); handler 0x5e3551 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e3484(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined1 *puVar1;
  int iVar2;
  int *in_FS_OFFSET;
  undefined4 *in_stack_ffffffd0;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_24 = &LAB_005e3551;
  puStack_28 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_28;
  FUN_00409ce0(&local_8,&DAT_004108f8);
  FUN_00407f0c(&local_c,param_2);
  if (param_5 < 1) {
    FUN_00406d88(L"Assertion failure",L"C:\\Builds\\TP\\indysockets\\lib\\System\\IdGlobal.pas",
                 0x1112);
  }
  FUN_00407058(&local_c);
  iVar2 = FUN_00408238();
  iVar2 = (iVar2 - param_5) + 1;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if ((-1 < param_3) && (param_3 < iVar2)) {
    iVar2 = param_3;
  }
  if (0 < iVar2) {
    in_stack_ffffffd0 = &local_8;
    FUN_005e26b4(param_2,iVar2,param_5,in_stack_ffffffd0,param_4);
    FUN_005df9bc(&LAB_005df694,param_1,local_8,0,0xffffffff);
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = (int)in_stack_ffffffd0;
  puStack_28 = &LAB_005e3558;
  thunk_FUN_00406e5c(&local_c,in_stack_ffffffd0,puVar1);
  FUN_00409ce0(&local_8,&DAT_004108f8);
  return;
}
