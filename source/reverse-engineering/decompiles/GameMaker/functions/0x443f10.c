// rea decompile_all
// name: FUN_00443f10
// address: 0x443f10
// body: available
// range: 0x443f10-0x44406e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x443f2c (push 0x4440b9 followed by fs-segment stack chaining); handler 0x4440b9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x443f5b (push 0x444094 followed by fs-segment stack chaining); handler 0x444094 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x443fc4 (push 0x44406f followed by fs-segment stack chaining); handler 0x44406f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00443f10(undefined2 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int *local_c;
  undefined4 local_8;

  puStack_28 = &stack0xfffffffc;
  local_8 = 0;
  local_c = (int *)0x0;
  puStack_2c = &LAB_004440b9;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_34 = (undefined1 *)0x443f3c;
  FUN_004411f0(*(undefined4 *)(param_4 + -4),10);
  local_14 = 0;
  puStack_34 = (undefined1 *)0x443f4d;
  local_10 = FUN_00405a4c(&LAB_00433630,1);
  puStack_38 = &LAB_00444094;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_40 = (undefined1 *)0x443f6a;
  puStack_34 = &stack0xfffffffc;
  local_14 = FUN_00405a4c(&LAB_00433630,1);
  puStack_40 = (undefined1 *)0x443f80;
  FUN_00441780(*(undefined4 *)(param_4 + -4),&local_1c,4);
  puStack_40 = (undefined1 *)(local_1c >> 0x1f);
  puStack_44 = (undefined1 *)local_1c;
  uStack_48 = 0x443f8e;
  FUN_0043f2b8(local_10);
  puStack_40 = (undefined1 *)0x443fa2;
  FUN_00441780(*(undefined4 *)(param_4 + -4),*(undefined4 *)(local_10 + 4),local_1c);
  puStack_40 = (undefined1 *)0x400;
  puStack_44 = (undefined1 *)0x443fb6;
  local_18 = FUN_0044077c(&PTR_FUN_00435480,1,local_10);
  puStack_44 = &LAB_0044406f;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  puStack_40 = &stack0xfffffffc;
  FUN_004433b0(local_18,&local_8);
  FUN_00441780(local_18,&local_1c,4);
  FUN_0043f2b8(local_14);
  FUN_00441780(local_18,*(undefined4 *)(local_14 + 4),local_1c);
  cVar2 = FUN_0042ca1c(local_8,&local_20);
  if (cVar2 != '\0') {
    uVar3 = FUN_0040b140(&local_c);
    cVar2 = FUN_0041efb4(local_20,&DAT_004440c8,uVar3);
    if (cVar2 != '\0') goto LAB_00444042;
  }
  FUN_0041bfec(&PTR_LAB_0042ea5c,1,PTR_PTR_007826d8);
  FUN_00406618();
LAB_00444042:
  *param_1 = *(undefined2 *)(local_20 + 4);
  (**(code **)(*local_c + 0xc))(local_c,param_1,local_14);
  puVar1 = puStack_40;
  *in_FS_OFFSET = uStack_48;
  puStack_40 = &LAB_00444076;
  puStack_44 = (undefined1 *)0x44406e;
  FUN_00405a7c(local_18,uStack_48,puVar1);
  return;
}
