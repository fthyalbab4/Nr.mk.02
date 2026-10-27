// rea decompile_all
// name: FUN_0048c070
// address: 0x48c070
// body: available
// range: 0x48c070-0x48c1cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x48c090 (push 0x48c1d0 followed by fs-segment stack chaining); handler 0x48c1d0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048c070(int param_1,undefined4 param_2,char param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  HWND hWnd;
  uint uVar6;
  uint uVar7;
  BOOL *in_FS_OFFSET;
  undefined4 uVar8;
  RECT *pRVar9;
  BOOL bErase;
  BOOL BStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  RECT local_1c;
  char local_9;
  BOOL local_8;

  puStack_2c = &stack0xfffffffc;
  local_8 = 0;
  puStack_30 = &LAB_0048c1d0;
  BStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = (BOOL)&BStack_34;
  bErase = 0x48c09a;
  local_9 = param_3;
  cVar2 = FUN_004c4988(param_1);
  if (cVar2 != '\0') {
    bErase = 0x48c0af;
    iVar3 = FUN_0048b9b8(*(undefined4 *)(param_1 + 0x270),param_2);
    if (local_9 == '\0') {
      *(undefined1 *)(iVar3 + 0x19) = 1;
      pRVar9 = &local_1c;
      uVar8 = 0;
      uVar4 = FUN_00439fcc(iVar3);
      uVar5 = FUN_004c45dc(param_1);
      FUN_0040f0c4(uVar5,0x40a,uVar4,uVar8,pRVar9);
      bErase = -1;
      pRVar9 = &local_1c;
      hWnd = (HWND)FUN_004c45dc(param_1);
      InvalidateRect(hWnd,pRVar9,bErase);
    }
    else if (*(char *)(iVar3 + 0x19) != '\0') {
      *(undefined1 *)(iVar3 + 0x19) = 0;
      uVar7 = 0;
      if (*(char *)(iVar3 + 0x15) == '\0') {
        uVar7 = 0x100;
      }
      else if (*(char *)(iVar3 + 0x15) == '\x02') {
        uVar7 = 0x200;
      }
      cVar2 = FUN_0048b890(iVar3);
      if (cVar2 != '\0') {
        uVar7 = uVar7 | 0x400;
      }
      if (*(char *)(iVar3 + 0x18) == '\x01') {
        uVar7 = uVar7 | 0x1000;
      }
      FUN_004081e8(&local_8,*(undefined4 *)(iVar3 + 0xc));
      cVar2 = FUN_0048b8a8(iVar3);
      if (cVar2 == '\0') {
        if (*(char *)(iVar3 + 0x14) == '\x01') {
          FUN_00408ac8(&DAT_0048c1fc,&local_8,1);
        }
        else if (*(char *)(iVar3 + 0x14) == '\x02') {
          FUN_00408ac8(&DAT_0048c1ec,&local_8,1);
        }
      }
      else {
        uVar4 = FUN_0048b8a8(iVar3);
        FUN_0048bd04(param_1,&local_8,*(undefined1 *)(iVar3 + 0x14),uVar4);
      }
      bErase = local_8;
      uVar6 = FUN_00439fcc(iVar3);
      uVar7 = uVar7 | uVar6;
      uVar4 = FUN_004c45dc(param_1);
      FUN_0040f050(uVar4,0x40b,uVar7);
    }
  }
  puVar1 = puStack_30;
  *in_FS_OFFSET = bErase;
  puStack_30 = &LAB_0048c1d7;
  BStack_34 = 0x48c1cf;
  thunk_FUN_004072d8(&local_8,bErase,puVar1);
  return;
}
