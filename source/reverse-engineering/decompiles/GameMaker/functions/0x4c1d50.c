// rea decompile_all
// name: FUN_004c1d50
// address: 0x4c1d50
// body: available
// range: 0x4c1d50-0x4c1e34 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c1d75 (push 0x4c1e35 followed by fs-segment stack chaining); handler 0x4c1e35 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c1d50(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  int iVar3;
  int *piVar4;
  int x;
  HDC hdcDst;
  HIMAGELIST himl;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  int i;
  int y;
  UINT fStyle;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 local_1c [16];
  int *local_c;
  undefined4 local_8;

  puStack_2c = (undefined1 *)0x4c1d67;
  local_c = (int *)FUN_00462144(&PTR_FUN_004587d4,1);
  puStack_30 = &LAB_004c1e35;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  iVar3 = FUN_00507098(param_1);
  (**(code **)(*local_c + 0x44))(local_c,iVar3 * *(int *)(param_1 + 0x38));
  (**(code **)(*local_c + 0x38))(local_c,*(undefined4 *)(param_1 + 0x34));
  FUN_0040c114(0,0,*(undefined4 *)(*(int *)(param_4 + -4) + 0x48),local_1c,
               *(undefined4 *)(*(int *)(param_4 + -4) + 0x4c));
  piVar4 = (int *)FUN_00462a64(local_c);
  FUN_0045bc24(piVar4[0x12],0xff00000f);
  (**(code **)(*piVar4 + 0x4c))(piVar4,local_1c);
  iVar3 = FUN_00507098(param_1);
  if (-1 < iVar3 + -1) {
    iVar5 = 0;
    do {
      fStyle = 1;
      y = 0;
      lVar1 = (longlong)*(int *)(param_1 + 0x38) * (longlong)iVar5;
      x = (int)lVar1;
      FUN_00462a64(local_c,(int)((ulonglong)lVar1 >> 0x20));
      hdcDst = (HDC)FUN_0045ce2c();
      i = iVar5;
      himl = (HIMAGELIST)FUN_00506bcc(param_1);
      ImageList_Draw(himl,i,hdcDst,x,y,fStyle);
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  local_8 = FUN_00464298(local_c);
  puVar2 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_004c1e3c;
  puStack_30 = (undefined1 *)0x4c1e34;
  FUN_00405a7c(local_c,uStack_34,puVar2);
  return;
}
