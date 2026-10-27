// rea decompile_all
// name: FUN_0045d0a8
// address: 0x45d0a8
// body: available
// range: 0x45d0a8-0x45d17c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x45d0cb (push 0x45d17d followed by fs-segment stack chaining); handler 0x45d17d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045d0a8(int *param_1,int param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  LPCWSTR lpString;
  UINT c;
  undefined4 *in_FS_OFFSET;
  INT *lpDx;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;

  puStack_18 = (undefined1 *)0x45d0c0;
  thunk_FUN_00407ad0(param_4);
  puStack_1c = &LAB_0045d17d;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  (**(code **)(*param_1 + 0x28))();
  (**(code **)(*param_1 + 0x2c))(param_1,0xb);
  cVar2 = (**(code **)(*param_1 + 0xc))();
  local_8 = param_2;
  if (cVar2 == '\x01') {
    iVar3 = FUN_0045c584(param_1,param_4);
    local_8 = param_2 + iVar3 + 1;
  }
  iVar3 = param_4;
  if ((param_4 != 0) && (*(short *)(param_4 + -10) != 2)) {
    iVar3 = FUN_00407488(&param_4,param_4);
  }
  c = 0;
  if (iVar3 != 0) {
    c = *(UINT *)(iVar3 + -4);
  }
  lpDx = (INT *)0x0;
  lpString = (LPCWSTR)FUN_00408220(param_4);
  ExtTextOutW((HDC)param_1[0xe],local_8,param_3,param_1[6],(RECT *)0x0,lpString,c,lpDx);
  iVar3 = FUN_0045c584(param_1,param_4);
  (**(code **)(*param_1 + 0x5c))(param_1,iVar3 + local_8,param_3);
  (**(code **)(*param_1 + 0x24))();
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0045d184;
  puStack_1c = (undefined1 *)0x45d17c;
  thunk_FUN_004072d8(&param_4,uStack_20,puVar1);
  return;
}
