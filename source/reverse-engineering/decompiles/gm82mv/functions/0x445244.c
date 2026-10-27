// rea decompile_all
// name: FUN_00445244
// address: 0x445244
// body: available
// range: 0x445244-0x445320 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x44526f (push 0x445321 followed by fs-segment stack chaining); handler 0x445321 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00445244(int param_1,char param_2,char param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  DWORD DVar4;
  HANDLE pvVar5;
  char extraout_CL;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined1 local_5;

  local_14 = 0;
  local_5 = 0;
  if (param_2 != '\0') {
    puStack_30 = (undefined1 *)0x44525d;
    param_1 = FUN_00406510();
    local_5 = extraout_DL;
    param_3 = extraout_CL;
  }
  puStack_34 = &LAB_00445321;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  FUN_00405fac(param_1,0);
  if ((param_3 == '\0') || (*(char *)(param_1 + 0x3c) != '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 0xe) = uVar2;
  if ((param_3 == '\0') || (*(char *)(param_1 + 0x3c) != '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 0xc) = uVar2;
  if (*(char *)(param_1 + 0x3c) == '\0') {
    iVar3 = FUN_0040725c(0,0,&LAB_00445190,param_1 + 8,4,param_1);
    *(int *)(param_1 + 4) = iVar3;
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      FUN_0041b234(DVar4,&local_14);
      local_10 = local_14;
      local_c = 0x11;
      FUN_0041bf50(&LAB_00434c40,1,PTR_LAB_006894dc,0,&local_10);
      FUN_00406ab4();
    }
  }
  else {
    pvVar5 = GetCurrentThread();
    *(HANDLE *)(param_1 + 4) = pvVar5;
    DVar4 = GetCurrentThreadId();
    *(DWORD *)(param_1 + 8) = DVar4;
  }
  puVar1 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_00445328;
  puStack_34 = (undefined1 *)0x445320;
  thunk_FUN_004072d8(&local_14,uStack_38,puVar1);
  return;
}
