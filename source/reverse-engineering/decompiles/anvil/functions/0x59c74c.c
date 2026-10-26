// rea decompile_all
// name: FUN_0059c74c
// address: 0x59c74c
// body: available
// range: 0x59c74c-0x59ca5e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x59c770 (push 0x59ca5f followed by fs-segment stack chaining); handler 0x59ca5f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059c74c(int param_1,char param_2,undefined2 param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  HWND pHVar3;
  undefined4 *in_FS_OFFSET;
  UINT_PTR UVar4;
  undefined4 uStack_9c;
  undefined1 *puStack_98;
  undefined1 *puStack_94;
  undefined1 local_84 [48];
  undefined1 local_54 [48];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  undefined2 local_b;
  char local_9;
  int local_8;

  puStack_94 = &stack0xfffffffc;
  puStack_98 = &LAB_0059ca5f;
  uStack_9c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_9c;
  cVar1 = *(char *)(param_1 + 0x318);
  local_b = param_3;
  local_9 = param_2;
  local_8 = param_1;
  if (cVar1 == '\x01') {
    FUN_00406268(param_1,param_3,param_5,param_4);
    UVar4 = 1;
    pHVar3 = (HWND)FUN_004c45dc(local_8);
    KillTimer(pHVar3,UVar4);
    FUN_0059d37c(local_8);
    FUN_00406268(local_8);
  }
  else if ((byte)(cVar1 - 2U) < 2) {
    puStack_94 = &stack0xfffffffc;
    FUN_005992f4(param_1,local_84);
    FUN_00599d18(local_8,local_84);
    if (*(char *)(local_8 + 0x318) == '\x03') {
      cVar1 = FUN_00406268(local_8);
      if (cVar1 != '\0') {
        iVar2 = FUN_004baf44(local_8);
        *(int *)(local_8 + 0x2d4) = iVar2 - *(int *)(local_8 + 0x2d4);
      }
    }
    if (*(char *)(local_8 + 0x318) == '\x03') {
      iVar2 = FUN_0059c6f4(local_84);
      if (1 < iVar2) {
        FUN_0059cd48(local_8,*(undefined4 *)(local_8 + 0x2d0),iVar2);
        FUN_0059dc90(local_8);
      }
    }
    else {
      iVar2 = FUN_0059c6f4(local_54);
      if (1 < iVar2) {
        FUN_0059d170(local_8,*(undefined4 *)(local_8 + 0x2d0),iVar2);
        FUN_0059dc90(local_8);
      }
    }
  }
  else if (cVar1 == '\x04') {
    puStack_94 = &stack0xfffffffc;
    FUN_0059a27c(param_1);
    UVar4 = 1;
    pHVar3 = (HWND)FUN_004c45dc(local_8);
    KillTimer(pHVar3,UVar4);
    local_24 = param_5;
    local_20 = param_4;
    cVar1 = FUN_00406268(local_8,local_8 + 0x2dc,local_8 + 0x2e0,&local_24);
    if (cVar1 != '\0') {
      if (*(int *)(local_8 + 0x2e0) != *(int *)(local_8 + 0x2dc)) {
        FUN_0059833c(local_8,*(int *)(local_8 + 0x2dc),*(int *)(local_8 + 0x2e0));
        FUN_0059dc90(local_8);
      }
    }
    FUN_0059d37c(local_8);
  }
  else if (cVar1 == '\x05') {
    puStack_94 = &stack0xfffffffc;
    FUN_0059a27c(param_1);
    UVar4 = 1;
    pHVar3 = (HWND)FUN_004c45dc(local_8);
    KillTimer(pHVar3,UVar4);
    local_1c = param_5;
    local_18 = param_4;
    cVar1 = FUN_00406268(local_8,local_8 + 0x2dc,local_8 + 0x2e0,&local_1c);
    if (cVar1 != '\0') {
      if (*(int *)(local_8 + 0x2e0) != *(int *)(local_8 + 0x2dc)) {
        FUN_00598264(local_8,*(int *)(local_8 + 0x2dc),*(int *)(local_8 + 0x2e0));
        FUN_0059dc90(local_8);
      }
    }
    FUN_0059d37c(local_8);
  }
  else {
    puStack_94 = &stack0xfffffffc;
    FUN_0059d37c(param_1);
    FUN_005983c4(local_8,param_5,param_4,&local_14);
    if ((((local_9 == '\0') && (*(int *)(local_8 + 0x328) != -1)) &&
        (*(int *)(local_8 + 0x32c) != -1)) &&
       (((((*(byte *)(local_8 + 0x2b5) & 0x80) != 0 && (local_14 < *(int *)(local_8 + 0x29c))) &&
         (-1 < local_14)) ||
        ((((*(byte *)(local_8 + 0x2b6) & 1) != 0 && (local_10 < *(int *)(local_8 + 0x2a0))) &&
         (-1 < local_10)))))) {
      FUN_00406268(local_8,local_14,local_10);
    }
  }
  FUN_004bd878(local_8,local_9,local_b,param_4,param_5);
  *in_FS_OFFSET = uStack_9c;
  puStack_94 = &LAB_0059ca66;
  *(undefined1 *)(local_8 + 0x318) = 0;
  *(undefined1 *)(local_8 + 0x330) = 0;
  puStack_98 = (undefined1 *)0x59ca5e;
  FUN_0059a704(local_8,*(undefined4 *)(local_8 + 0x328),*(undefined4 *)(local_8 + 0x32c));
  return;
}
