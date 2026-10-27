// rea decompile_all
// name: FUN_004ae2a0
// address: 0x4ae2a0
// body: available
// range: 0x4ae2a0-0x4ae410 inclusive
// range: 0x4ae428-0x4ae43d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4ae2be (push 0x4ae43e followed by fs-segment stack chaining); handler 0x4ae43e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4ae2e3 (push 0x4ae411 followed by fs-segment stack chaining); handler 0x4ae411 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ae2a0(int param_1,int param_2,int param_3,byte param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  HWND hWnd;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  undefined4 uStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined4 local_40;
  undefined1 local_3c [43];
  undefined1 local_11;
  undefined4 local_10;
  int local_c;
  int local_8;

  puStack_50 = &stack0xfffffffc;
  local_40 = 0;
  puStack_54 = &LAB_004ae43e;
  uStack_58 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_58;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_3;
  if (param_2 == 0) {
    puStack_5c = (undefined1 *)0x4ae2d0;
    local_c = (**(code **)(**(int **)(param_1 + 4) + 0xec))();
    puVar1 = puStack_50;
  }
  puStack_50 = puVar1;
  puStack_60 = &LAB_004ae411;
  uStack_64 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_64;
  uVar4 = 0;
  local_10 = 0;
  iVar5 = 0;
  local_11 = (&DAT_00778444)[param_4];
  puStack_5c = &stack0xfffffffc;
  if (local_8 != 0) {
    if (param_4 < 2) {
      puStack_5c = &stack0xfffffffc;
      iVar5 = FUN_004ad0f0(local_8);
      if (iVar5 != 0) {
        uVar4 = *(undefined4 *)(iVar5 + 0x10);
      }
    }
    else if ((byte)(param_4 - 2) < 2) {
      uVar4 = *(undefined4 *)(local_8 + 0x10);
      iVar5 = local_8;
      puStack_5c = &stack0xfffffffc;
    }
    else {
      puStack_5c = &stack0xfffffffc;
      if ((byte)(param_4 - 2) == 2) {
        puStack_5c = &stack0xfffffffc;
        iVar5 = FUN_004ad0f0(local_8);
        if (iVar5 != 0) {
          uVar4 = *(undefined4 *)(iVar5 + 0x10);
        }
        local_8 = FUN_004ad168(local_8);
        if (local_8 == 0) {
          local_11 = 0;
        }
        else {
          local_10 = *(undefined4 *)(local_8 + 0x10);
        }
      }
    }
  }
  FUN_004ac9b4(local_c,param_5);
  FUN_004ac910(local_c,param_6);
  FUN_004ae4c8(param_1,local_c,local_3c);
  iVar3 = FUN_004ae4ec(param_1,uVar4,local_10,local_11,local_3c);
  if (iVar3 == 0) {
    FUN_0040b75c(PTR_PTR_00782100,&local_40);
    FUN_0041beb8(&PTR_LAB_0042efc8,1,local_40);
    FUN_00406618();
  }
  *(int *)(local_c + 0x10) = iVar3;
  if ((*(int *)(param_1 + 8) == 0) && (cVar2 = FUN_004ad800(local_c), cVar2 != '\0')) {
    lParam = 0;
    wParam = 1;
    Msg = 0xb;
    hWnd = (HWND)FUN_004ae118(param_1);
    SendMessageW(hWnd,Msg,wParam,lParam);
  }
  FUN_004ae4a8(param_1,iVar5);
  if (*(char *)(param_1 + 0x14) == '\0') {
    FUN_00405d08(*(undefined4 *)(param_1 + 4),local_c);
  }
  puVar1 = puStack_50;
  *in_FS_OFFSET = uStack_64;
  *in_FS_OFFSET = uStack_58;
  puStack_50 = &LAB_004ae445;
  puStack_54 = (undefined1 *)0x4ae43d;
  thunk_FUN_00406e5c(&local_40,uStack_58,puVar1);
  return;
}
