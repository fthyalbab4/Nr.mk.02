// rea decompile_all
// name: FUN_00441050
// address: 0x441050
// body: available
// range: 0x441050-0x4411ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x44106c (push 0x4411f9 followed by fs-segment stack chaining); handler 0x4411f9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x44109b (push 0x4411d4 followed by fs-segment stack chaining); handler 0x4411d4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x441104 (push 0x4411af followed by fs-segment stack chaining); handler 0x4411af lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00441050(undefined2 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
  puStack_2c = &LAB_004411f9;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_34 = (undefined1 *)0x44107c;
  FUN_0043e330(*(undefined4 *)(param_4 + -4),10);
  local_14 = 0;
  puStack_34 = (undefined1 *)0x44108d;
  local_10 = FUN_00405fac(&LAB_004319cc,1);
  puStack_38 = &LAB_004411d4;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_40 = (undefined1 *)0x4410aa;
  puStack_34 = &stack0xfffffffc;
  local_14 = FUN_00405fac(&LAB_004319cc,1);
  puStack_40 = (undefined1 *)0x4410c0;
  FUN_0043e8c0(*(undefined4 *)(param_4 + -4),&local_1c,4);
  puStack_40 = (undefined1 *)(local_1c >> 0x1f);
  puStack_44 = (undefined1 *)local_1c;
  uStack_48 = 0x4410ce;
  FUN_0043c8b8(local_10);
  puStack_40 = (undefined1 *)0x4410e2;
  FUN_0043e8c0(*(undefined4 *)(param_4 + -4),*(undefined4 *)(local_10 + 4),local_1c);
  puStack_40 = (undefined1 *)0x400;
  puStack_44 = (undefined1 *)0x4410f6;
  local_18 = FUN_0043d8bc(&PTR_FUN_0043332c,1,local_10);
  puStack_44 = &LAB_004411af;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  puStack_40 = &stack0xfffffffc;
  FUN_004404f0(local_18,&local_8);
  FUN_0043e8c0(local_18,&local_1c,4);
  FUN_0043c8b8(local_14);
  FUN_0043e8c0(local_18,*(undefined4 *)(local_14 + 4),local_1c);
  cVar2 = FUN_0042b61c(local_8,&local_20);
  if (cVar2 != '\0') {
    uVar3 = FUN_0040b268(&local_c);
    cVar2 = FUN_0041f1e0(local_20,&DAT_00441208,uVar3);
    if (cVar2 != '\0') goto LAB_00441182;
  }
  FUN_0041be80(&LAB_0042d618,1,PTR_LAB_00689488);
  FUN_00406ab4();
LAB_00441182:
  *param_1 = *(undefined2 *)(local_20 + 4);
  (**(code **)(*local_c + 0xc))(local_c,param_1,local_14);
  puVar1 = puStack_40;
  *in_FS_OFFSET = uStack_48;
  puStack_40 = &LAB_004411b6;
  puStack_44 = (undefined1 *)0x4411ae;
  FUN_00405fdc(local_18,uStack_48,puVar1);
  return;
}
