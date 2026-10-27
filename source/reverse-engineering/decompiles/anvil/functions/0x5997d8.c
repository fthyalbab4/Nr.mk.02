// rea decompile_all
// name: FUN_005997d8
// address: 0x5997d8
// body: available
// range: 0x5997d8-0x599966 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005997d8(int param_1,char param_2)

{
  int iVar1;
  HDC pHVar2;
  int x;
  int iVar3;
  LPPOINT ptVar4;
  LPSIZE ptVar5;

  if (param_2 == '\0') {
    iVar1 = 8;
    pHVar2 = (HDC)FUN_0045d4ec(*(undefined4 *)(param_1 + 0x270));
    SetMapMode(pHVar2,iVar1);
    ptVar4 = (LPPOINT)0x0;
    iVar3 = 0;
    iVar1 = 0;
    pHVar2 = (HDC)FUN_0045d4ec(*(undefined4 *)(param_1 + 0x270));
    SetWindowOrgEx(pHVar2,iVar1,iVar3,ptVar4);
    ptVar5 = (LPSIZE)0x0;
    iVar1 = FUN_004baf84(param_1);
    iVar3 = FUN_004baf44(param_1);
    pHVar2 = (HDC)FUN_0045d4ec(*(undefined4 *)(param_1 + 0x270));
    SetViewportExtEx(pHVar2,iVar3,iVar1,ptVar5);
    ptVar5 = (LPSIZE)0x0;
    iVar1 = FUN_004baf84(param_1);
    iVar3 = FUN_004baf44(param_1,iVar1 >> 0x1f);
    pHVar2 = (HDC)FUN_0045d4ec(*(undefined4 *)(param_1 + 0x270),iVar3 >> 0x1f);
    SetWindowExtEx(pHVar2,iVar3,iVar1,ptVar5);
  }
  else {
    iVar1 = FUN_004baf44(param_1);
    iVar3 = 8;
    pHVar2 = (HDC)FUN_0045d4ec(*(undefined4 *)(param_1 + 0x270));
    SetMapMode(pHVar2,iVar3);
    ptVar4 = (LPPOINT)0x0;
    iVar3 = 0;
    pHVar2 = (HDC)FUN_0045d4ec(*(undefined4 *)(param_1 + 0x270));
    SetWindowOrgEx(pHVar2,iVar1,iVar3,ptVar4);
    ptVar5 = (LPSIZE)0x0;
    iVar1 = FUN_004baf84(param_1);
    iVar3 = FUN_004baf44(param_1);
    pHVar2 = (HDC)FUN_0045d4ec(*(undefined4 *)(param_1 + 0x270));
    SetViewportExtEx(pHVar2,iVar3,iVar1,ptVar5);
    ptVar5 = (LPSIZE)0x0;
    iVar1 = FUN_004baf84(param_1);
    iVar3 = FUN_004baf44(param_1,iVar1 >> 0x1f);
    x = (int)-(longlong)iVar3;
    pHVar2 = (HDC)FUN_0045d4ec(*(undefined4 *)(param_1 + 0x270),
                               (int)((ulonglong)-(longlong)iVar3 >> 0x20));
    SetWindowExtEx(pHVar2,x,iVar1,ptVar5);
  }
  return;
}
