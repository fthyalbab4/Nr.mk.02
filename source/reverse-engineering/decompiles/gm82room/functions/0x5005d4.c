// rea decompile_all
// name: FUN_005005d4
// address: 0x5005d4
// body: available
// range: 0x5005d4-0x500730 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5005f7 (push 0x500731 followed by fs-segment stack chaining); handler 0x500731 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005005d4(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int *in_FS_OFFSET;
  bool bVar4;
  int *piStack_30;
  int iStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int *local_10;
  int local_c;
  int local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = (int *)0x0;
  puStack_28 = &LAB_00500731;
  iStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_2c;
  FUN_00408194(param_4,param_1);
  FUN_00417028(*param_4,&local_c);
  FUN_004172fc(*param_4,&local_10);
  iVar2 = local_c;
  if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
    iVar2 = FUN_00407488(&local_c,local_c);
  }
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
  }
  if (iVar3 < 2) {
    bVar4 = false;
  }
  else {
    iVar2 = local_c;
    if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
      iVar2 = FUN_00407488(&local_c,local_c);
    }
    bVar4 = *(short *)(iVar2 + 2) == 0x3a;
  }
  if (bVar4) {
    piStack_30 = &local_8;
    FUN_00408984(local_c,1,2);
    FUN_00408a54(&local_c,1,2);
  }
  else {
    piStack_30 = (int *)0x5006a3;
    FUN_004081e8(&local_8,0);
  }
  while ((local_c != 0 || (local_8 != 0))) {
    iVar2 = FUN_0045c584(param_2,*param_4);
    bVar4 = iVar2 == param_3;
    if (iVar2 <= param_3) break;
    FUN_0040891c(local_c,L"\\...\\");
    if (bVar4) {
      FUN_004081e8(&local_8,0);
      FUN_004081e8(&local_c,L"...\\");
    }
    else if (local_c == 0) {
      FUN_004081e8(&local_8,0);
    }
    else {
      FUN_00500508(&local_c);
    }
    piStack_30 = local_10;
    FUN_0040875c(param_4,3);
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = (int)piStack_30;
  puStack_28 = &LAB_00500738;
  iStack_2c = 0x500730;
  thunk_FUN_004072fc(&local_10,3,puVar1);
  return;
}
