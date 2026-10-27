// rea decompile_all
// name: FUN_005003f0
// address: 0x5003f0
// body: available
// range: 0x5003f0-0x5004f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x50040e (push 0x5004f7 followed by fs-segment stack chaining); handler 0x5004f7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005003f0(int *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  HDC hdc;
  int iVar4;
  uint format;
  LPCWSTR lpchText;
  int cchText;
  int *in_FS_OFFSET;
  tagRECT *lprc;
  int iStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  tagRECT local_18;
  int local_8;

  puStack_2c = &stack0xfffffffc;
  local_1c = 0;
  local_8 = 0;
  puStack_30 = &LAB_005004f7;
  iStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_34;
  piVar1 = (int *)param_1[0x6a];
  (**(code **)(*param_1 + 0x54))(param_1,&local_18);
  cVar3 = FUN_004772d4(param_1);
  if (cVar3 == '\0') {
    FUN_0045c2e4(piVar1[0x12],param_1[0x1b]);
    FUN_0045c464(piVar1[0x12],0);
    (**(code **)(*piVar1 + 0x4c))(piVar1,&local_18);
  }
  FUN_0045c464(piVar1[0x12],1);
  FUN_004bb658(param_1,&local_1c);
  FUN_005005d4(local_1c,param_1[0x6a],local_18.right - local_18.left);
  hdc = (HDC)FUN_0045d4ec(param_1[0x6a]);
  iVar4 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar4 = FUN_00407488(&local_8,local_8);
  }
  cchText = 0;
  if (iVar4 != 0) {
    cchText = *(int *)(iVar4 + -4);
  }
  format = (uint)(*(ushort *)(&DAT_00681de4 + (uint)*(byte *)(param_1 + 0x6d) * 2) | 0x800);
  lprc = &local_18;
  lpchText = (LPCWSTR)FUN_00408220(local_8);
  DrawTextW(hdc,lpchText,cchText,lprc,format);
  puVar2 = puStack_30;
  *in_FS_OFFSET = (int)&local_8;
  puStack_30 = &LAB_005004fe;
  iStack_34 = 0x5004ee;
  thunk_FUN_004072d8(&local_1c,&local_8,puVar2);
  iStack_34 = 0x5004f6;
  thunk_FUN_004072d8(&local_8);
  return;
}
