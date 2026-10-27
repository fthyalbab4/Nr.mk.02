// rea decompile_all
// name: FUN_006f9cd8
// address: 0x6f9cd8
// body: available
// range: 0x6f9cd8-0x6f9dec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6f9cfb (push 0x6f9ded followed by fs-segment stack chaining); handler 0x6f9ded lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f9cd8(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  HANDLE h;
  HFONT h_00;
  HDC pHVar4;
  HGDIOBJ pvVar5;
  undefined4 *in_FS_OFFSET;
  int iVar6;
  LOGFONTW *pv;
  undefined4 uStack_84;
  undefined1 *puStack_80;
  undefined1 *puStack_7c;
  LOGFONTW local_6c;
  HGDIOBJ local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_7c = &stack0xfffffffc;
  local_8 = 0;
  puStack_80 = &LAB_006f9ded;
  uStack_84 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_84;
  local_c = param_3;
  (**(code **)(**(int **)(param_2 + 0x270) + 0x4c))(*(int **)(param_2 + 0x270),param_5);
  iVar6 = *(int *)(param_1 + 0x3dc);
  uVar3 = FUN_004aad0c(iVar6,local_c);
  FUN_004ee6a0(uVar3,&local_8);
  cVar1 = *(char *)(iVar6 + 0x28e);
  if ((cVar1 == '\0') || (cVar1 == '\x01')) {
    uVar3 = local_8;
    (**(code **)(**(int **)(param_2 + 0x270) + 0x88))
              (*(int **)(param_2 + 0x270),*param_5 + 4,param_5[1] + 4);
  }
  else {
    pv = &local_6c;
    iVar6 = 0x5c;
    h = (HANDLE)FUN_0045b10c(*(undefined4 *)(*(int *)(param_2 + 0x270) + 0x40));
    GetObjectW(h,iVar6,pv);
    local_6c.lfEscapement = 0xa8c;
    local_6c.lfOrientation = 0xa8c;
    h_00 = CreateFontIndirectW(&local_6c);
    pHVar4 = (HDC)FUN_0045ce2c(*(undefined4 *)(param_2 + 0x270));
    local_10 = SelectObject(pHVar4,h_00);
    uVar3 = local_8;
    (**(code **)(**(int **)(param_2 + 0x270) + 0x88))
              (*(int **)(param_2 + 0x270),param_5[2] + -4,param_5[1] + 4);
    pvVar5 = local_10;
    pHVar4 = (HDC)FUN_0045ce2c(*(undefined4 *)(param_2 + 0x270));
    pvVar5 = SelectObject(pHVar4,pvVar5);
    DeleteObject(pvVar5);
  }
  puVar2 = puStack_80;
  *in_FS_OFFSET = uVar3;
  puStack_80 = &LAB_006f9df4;
  uStack_84 = 0x6f9dec;
  thunk_FUN_00406e5c(&local_8,uVar3,puVar2);
  return;
}
