// rea decompile_all
// name: FUN_006007fc
// address: 0x6007fc
// body: available
// range: 0x6007fc-0x6008a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x600818 (push 0x6008c6 followed by fs-segment stack chaining); handler 0x6008c6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x600870 (push 0x6008a9 followed by fs-segment stack chaining); handler 0x6008a9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006007fc(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 *local_10;
  undefined4 local_c;

  puStack_28 = &stack0xfffffffc;
  local_1c = 0;
  puStack_2c = &LAB_006008c6;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_34 = (undefined4 *)0x600822;
  cVar2 = FUN_00416e40(param_2);
  if (cVar2 == '\0') {
    local_14 = 0x11;
    puStack_34 = &local_18;
    puStack_38 = (undefined1 *)0x0;
    puStack_3c = (undefined1 *)0x600840;
    local_18 = param_2;
    FUN_0040b75c(PTR_PTR_00781ce8,&local_1c);
    puStack_3c = (undefined1 *)0x60084f;
    FUN_0041bef4(&PTR_LAB_005faa58,1,local_1c);
    puStack_3c = (undefined1 *)0x600854;
    FUN_00406618();
  }
  puStack_34 = (undefined4 *)0x600862;
  local_10 = (undefined4 *)FUN_005e0380(&PTR_LAB_005dfd48,1,param_2);
  puStack_38 = &LAB_006008a9;
  puStack_3c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_3c;
  uVar3 = 0;
  puStack_34 = (undefined4 *)&stack0xfffffffc;
  (**(code **)(*param_1 + 0x9c))(param_1,local_10,0,0,0);
  local_c = (**(code **)*local_10)();
  puVar1 = puStack_3c;
  *in_FS_OFFSET = uVar3;
  puStack_3c = &LAB_006008b0;
  FUN_0041ef80(&local_10,uVar3,puVar1);
  return;
}
