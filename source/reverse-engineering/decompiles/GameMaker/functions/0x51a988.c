// rea decompile_all
// name: FUN_0051a988
// address: 0x51a988
// body: available
// range: 0x51a988-0x51aa6c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x51a9ad (push 0x51aa7e followed by fs-segment stack chaining); handler 0x51aa7e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x51aa19 (push 0x51aa6d followed by fs-segment stack chaining); handler 0x51aa6d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051a988(int *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  HWND hWnd;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  int nIndex;
  undefined4 uVar6;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined1 local_18 [16];
  int *local_8;

  puStack_28 = (undefined1 *)0x51a99f;
  local_8 = (int *)FUN_00462144(&PTR_FUN_004587d4,1);
  puStack_2c = &LAB_0051aa7e;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_34 = (undefined1 *)0x51a9b7;
  puStack_28 = &stack0xfffffffc;
  uVar2 = FUN_004edf8c(param_1);
  puStack_34 = (undefined1 *)0x51a9c1;
  (**(code **)(*local_8 + 0x44))(local_8,uVar2);
  puStack_34 = (undefined1 *)0x51a9c8;
  uVar2 = FUN_004edfcc(param_1);
  puStack_34 = (undefined1 *)0x51a9d2;
  (**(code **)(*local_8 + 0x38))(local_8,uVar2);
  puStack_34 = (undefined1 *)0x51a9da;
  uVar2 = FUN_00462a64(local_8);
  puStack_34 = (undefined1 *)0x51a9e5;
  FUN_0045cd3c(uVar2,param_1[0x70]);
  puStack_34 = (undefined1 *)0x51a9ef;
  (**(code **)(*param_1 + 0x54))(param_1,local_18);
  puStack_34 = local_18;
  puStack_38 = (undefined1 *)0x51a9fb;
  piVar3 = (int *)FUN_00462a64(local_8);
  puVar1 = puStack_34;
  puStack_34 = (undefined1 *)0x51aa01;
  (**(code **)(*piVar3 + 0x4c))(piVar3,puVar1);
  puStack_34 = (undefined1 *)0x51aa09;
  FUN_00462a64(local_8);
  puStack_34 = (undefined1 *)0x51aa0e;
  FUN_0045be3c();
  puStack_38 = &LAB_0051aa6d;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  nIndex = -0x10;
  puStack_34 = &stack0xfffffffc;
  hWnd = (HWND)FUN_004f76a8(param_1);
  uVar4 = GetWindowLongW(hWnd,nIndex);
  if ((uVar4 & 0x800000) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  uVar6 = uVar2;
  FUN_00462a64(local_8);
  uVar5 = FUN_0045ce2c();
  FUN_004f4f50(param_1,uVar5,uVar2);
  puVar1 = puStack_38;
  *in_FS_OFFSET = uVar6;
  puStack_38 = &LAB_0051aa74;
  uStack_3c = 0x51aa67;
  FUN_00462a64(local_8,uVar6,puVar1);
  uStack_3c = 0x51aa6c;
  FUN_0045bf40();
  return;
}
