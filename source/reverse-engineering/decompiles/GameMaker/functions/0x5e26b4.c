// rea decompile_all
// name: FUN_005e26b4
// address: 0x5e26b4
// body: available
// range: 0x5e26b4-0x5e2781 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5e26d1 (push 0x5e2782 followed by fs-segment stack chaining); handler 0x5e2782 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e26b4(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined1 *puVar1;
  int iVar2;
  int *in_FS_OFFSET;
  undefined4 *puStack_28;
  int iStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_10 = 0;
  puStack_20 = &LAB_005e2782;
  iStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_24;
  local_c = param_1;
  FUN_00407f0c(&local_8,param_1);
  if (param_3 < 1) {
    FUN_00406d88(L"Assertion failure",L"C:\\Builds\\TP\\indysockets\\lib\\System\\IdGlobal.pas",
                 0x1112);
  }
  FUN_00407058(&local_8);
  iVar2 = FUN_00408238();
  iVar2 = (iVar2 - param_3) + 1;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if ((-1 < param_2) && (param_2 < iVar2)) {
    iVar2 = param_2;
  }
  if (iVar2 < 1) {
    puStack_28 = (undefined4 *)0x0;
    FUN_00409be0(param_4,&DAT_004108f8,1);
  }
  else {
    if (param_5 == 0) {
      param_5 = FUN_004213b8();
    }
    puStack_28 = &local_10;
    FUN_004086a8(local_c,param_3,iVar2);
    FUN_004219a0(param_5,local_10,param_4);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = (int)puStack_28;
  puStack_20 = &LAB_005e2789;
  iStack_24 = 0x5e2779;
  thunk_FUN_00406e5c(&local_10,puStack_28,puVar1);
  iStack_24 = 0x5e2781;
  thunk_FUN_00406e5c(&local_8);
  return;
}
