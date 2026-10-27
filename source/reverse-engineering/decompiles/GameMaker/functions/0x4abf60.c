// rea decompile_all
// name: FUN_004abf60
// address: 0x4abf60
// body: available
// range: 0x4abf60-0x4ac0bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4abf80 (push 0x4ac0c0 followed by fs-segment stack chaining); handler 0x4ac0c0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004abf60(int param_1,undefined4 param_2,char param_3)

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
  puStack_30 = &LAB_004ac0c0;
  BStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = (BOOL)&BStack_34;
  bErase = 0x4abf8a;
  local_9 = param_3;
  cVar2 = FUN_004f7a54(param_1);
  if (cVar2 != '\0') {
    bErase = 0x4abf9f;
    iVar3 = FUN_004ab8a8(*(undefined4 *)(param_1 + 0x270),param_2);
    if (local_9 == '\0') {
      *(undefined1 *)(iVar3 + 0x19) = 1;
      pRVar9 = &local_1c;
      uVar8 = 0;
      uVar4 = FUN_0043c914(iVar3);
      uVar5 = FUN_004f76a8(param_1);
      FUN_0040efd0(uVar5,0x40a,uVar4,uVar8,pRVar9);
      bErase = -1;
      pRVar9 = &local_1c;
      hWnd = (HWND)FUN_004f76a8(param_1);
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
      cVar2 = FUN_004ab780(iVar3);
      if (cVar2 != '\0') {
        uVar7 = uVar7 | 0x400;
      }
      if (*(char *)(iVar3 + 0x18) == '\x01') {
        uVar7 = uVar7 | 0x1000;
      }
      FUN_00407f0c(&local_8,*(undefined4 *)(iVar3 + 0xc));
      cVar2 = FUN_004ab798(iVar3);
      if (cVar2 == '\0') {
        if (*(char *)(iVar3 + 0x14) == '\x01') {
          FUN_004087ec(&DAT_004ac0ec,&local_8,1);
        }
        else if (*(char *)(iVar3 + 0x14) == '\x02') {
          FUN_004087ec(&DAT_004ac0dc,&local_8,1);
        }
      }
      else {
        uVar4 = FUN_004ab798(iVar3);
        FUN_004abbf4(param_1,&local_8,*(undefined1 *)(iVar3 + 0x14),uVar4);
      }
      bErase = local_8;
      uVar6 = FUN_0043c914(iVar3);
      uVar7 = uVar7 | uVar6;
      uVar4 = FUN_004f76a8(param_1);
      FUN_0040ef5c(uVar4,0x40b,uVar7);
    }
  }
  puVar1 = puStack_30;
  *in_FS_OFFSET = bErase;
  puStack_30 = &LAB_004ac0c7;
  BStack_34 = 0x4ac0bf;
  thunk_FUN_00406e5c(&local_8,bErase,puVar1);
  return;
}
