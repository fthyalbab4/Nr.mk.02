// rea decompile_all
// name: FUN_00662f8c
// address: 0x662f8c
// body: available
// range: 0x662f8c-0x6630b6 inclusive
// range: 0x6630d0-0x66310e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x662fa8 (push 0x66310f followed by fs-segment stack chaining); handler 0x66310f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x663034 (push 0x6630b7 followed by fs-segment stack chaining); handler 0x6630b7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00662f8c(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  DWORD DVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  char local_9;
  int local_8;

  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_0066310f;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if ((*(char *)(*(int *)PTR_DAT_00782280 + 0x88) != '\0') &&
     (puVar1 = &stack0xfffffffc, *(int *)(param_1 + 0x31c) == 0)) {
    puStack_2c = (undefined1 *)0x662fd3;
    FUN_00520a88(*(undefined4 *)PTR_DAT_00782280);
    puVar1 = puStack_20;
  }
  puStack_20 = puVar1;
  puStack_2c = (undefined1 *)0x662fdb;
  iVar3 = FUN_006619bc(local_8);
  if (iVar3 != 0) {
    puStack_2c = (undefined1 *)0x662fe7;
    FUN_006619bc(local_8);
    puStack_2c = (undefined1 *)0x662fec;
    iVar3 = FUN_00673fd0();
    if (iVar3 != 0) {
      puStack_2c = (undefined1 *)0x662ff8;
      FUN_006619bc(local_8);
      puStack_2c = (undefined1 *)0x662ffd;
      iVar3 = FUN_00673fd0();
      puStack_2c = (undefined1 *)0x663008;
      FUN_004eaf74(*(undefined4 *)(iVar3 + 0x7c),&local_10);
      puStack_2c = (undefined1 *)0x663017;
      FUN_00520670(*(undefined4 *)PTR_DAT_00782280,local_10);
      goto LAB_00663025;
    }
  }
  puStack_2c = (undefined1 *)0x663025;
  FUN_00520a88(*(undefined4 *)PTR_DAT_00782280);
LAB_00663025:
  local_9 = '\x01';
  puStack_30 = &LAB_006630b7;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  if (*(short *)(*(int *)PTR_DAT_00782280 + 0x132) != 0) {
    puStack_2c = &stack0xfffffffc;
    (**(code **)(*(int *)PTR_DAT_00782280 + 0x130))
              (*(undefined4 *)(*(int *)PTR_DAT_00782280 + 0x134),local_8,&local_9);
  }
  if (local_9 != '\0') {
    if (*(int *)(*(int *)PTR_DAT_00782280 + 0xc0) < 1) {
      FUN_00662ec4(local_8);
    }
    else if (*(char *)(*(int *)(local_8 + 0x308) + 0x48) == '\0') {
      FUN_0048e1f4(*(int *)(local_8 + 0x308),*(int *)(*(int *)PTR_DAT_00782280 + 0xc0),
                   PTR_DAT_00782280);
      FUN_0048e1e4(*(undefined4 *)(local_8 + 0x308),1);
    }
  }
  *in_FS_OFFSET = uStack_34;
  puStack_2c = (undefined1 *)0x6630d5;
  DVar4 = GetCurrentThreadId();
  if (DVar4 == *(DWORD *)PTR_DAT_0078296c) {
    puStack_2c = (undefined1 *)0x6630e6;
    cVar2 = FUN_00447d90(0);
    if (cVar2 != '\0') {
      local_9 = '\0';
    }
  }
  if (local_9 != '\0') {
    puStack_2c = (undefined1 *)0x6630f9;
    WaitMessage();
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00663116;
  puStack_24 = (undefined1 *)0x66310e;
  thunk_FUN_00406e5c(&local_10,uStack_28,puVar1);
  return;
}
