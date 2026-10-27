// rea decompile_all
// name: FUN_004216e8
// address: 0x4216e8
// body: available
// range: 0x4216e8-0x4217d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42170e (push 0x4217da followed by fs-segment stack chaining); handler 0x4217da lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004216e8(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_10;
  undefined1 local_c;
  int local_8;

  puStack_20 = (undefined1 *)0x421703;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_24 = &LAB_004217da;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  if (param_3 < 1) {
    local_c = 0;
    puStack_20 = &stack0xfffffffc;
    local_10 = param_3;
    FUN_0041c0bc(&PTR_LAB_00414218,1,PTR_PTR_0078242c,0,&local_10);
    FUN_00406618();
  }
  if (param_4 < 0) {
    local_10 = param_4;
    local_c = 0;
    FUN_0041c0bc(&PTR_LAB_00414218,1,PTR_PTR_00781e58,0,&local_10);
    FUN_00406618();
  }
  iVar2 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar2 = FUN_00407048(&local_8,local_8);
  }
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
  }
  if ((iVar3 - param_3) + 1 < param_4) {
    local_10 = param_4;
    local_c = 0;
    FUN_0041c0bc(&PTR_LAB_00414218,1,PTR_PTR_00781e58,0,&local_10);
    FUN_00406618();
  }
  (**(code **)*param_1)(param_1,local_8 + -2 + param_3 * 2,param_4);
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004217e1;
  puStack_24 = (undefined1 *)0x4217d9;
  thunk_FUN_00406e5c(&local_8,uStack_28,puVar1);
  return;
}
