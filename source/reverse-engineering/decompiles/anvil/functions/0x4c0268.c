// rea decompile_all
// name: FUN_004c0268
// address: 0x4c0268
// body: available
// range: 0x4c0268-0x4c036e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c027f (push 0x4c036f followed by fs-segment stack chaining); handler 0x4c036f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c0268(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  HCURSOR pHVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_004c036f;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00404f38(param_2,0xcc,0);
  *param_2 = param_1[0x5d];
  param_2[1] = 0x44000000;
  FUN_004c0200(param_1,param_2 + 2);
  if ((*(byte *)(param_1 + 0x14) & 1) != 0) {
    param_2[1] = param_2[1] | 0x2000000;
    param_2[2] = param_2[2] | 0x10000;
  }
  if ((*(byte *)(param_1 + 7) & 0x10) == 0) {
    cVar2 = (**(code **)(*param_1 + 0x5c))();
    if (cVar2 == '\0') {
      param_2[1] = param_2[1] | 0x8000000;
    }
  }
  if ((char)param_1[0x7a] != '\0') {
    param_2[1] = param_2[1] | 0x10000;
  }
  param_2[3] = param_1[0x10];
  param_2[4] = param_1[0x11];
  param_2[5] = param_1[0x12];
  param_2[6] = param_1[0x13];
  if (param_1[0xd] == 0) {
    param_2[7] = param_1[0x75];
  }
  else {
    iVar3 = FUN_004c45dc(param_1[0xd]);
    param_2[7] = iVar3;
  }
  param_2[9] = 0xb;
  pHVar4 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
  param_2[0xf] = (int)pHVar4;
  param_2[0x10] = 0;
  param_2[0xd] = DAT_0068cc40;
  param_2[10] = (int)DefWindowProcW;
  FUN_00405eb4(*param_1,&local_8);
  FUN_00417744(param_2 + 0x13,local_8);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004c0376;
  puStack_1c = (undefined1 *)0x4c036e;
  thunk_FUN_004072d8(&local_8,uStack_20,puVar1);
  return;
}
