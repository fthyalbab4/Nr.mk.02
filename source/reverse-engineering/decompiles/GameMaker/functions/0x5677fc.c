// rea decompile_all
// name: FUN_005677fc
// address: 0x5677fc
// body: available
// range: 0x5677fc-0x56791d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x56781c (push 0x56791e followed by fs-segment stack chaining); handler 0x56791e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005677fc(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  HWND pHVar5;
  HWND hWnd;
  uint uVar6;
  LPARAM lParam;
  int *in_FS_OFFSET;
  int iStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_28 = &LAB_0056791e;
  iStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_2c;
  cVar2 = FUN_0056792c(param_1);
  if ((cVar2 == '\0') || ((char)param_1[0x9f] != '\0')) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  else {
    piVar3 = (int *)FUN_004895b4();
    (**(code **)(*piVar3 + 0x18))();
    uVar4 = FUN_004895b4();
    FUN_00488ff8(uVar4,&local_8);
    piVar3 = (int *)FUN_004895b4();
    (**(code **)(*piVar3 + 0x14))();
    iStack_2c = 0x56786f;
    FUN_00567b30(param_1,&local_10,&local_14);
    iStack_2c = 0x567879;
    FUN_00567578(param_1,&local_c);
    iStack_2c = local_14 - local_10;
    FUN_00568fa0(param_1,&local_c,local_10);
    iStack_2c = 0x567897;
    FUN_00567510(param_1,local_c);
    iStack_2c = local_10;
    local_10 = FUN_00569040(param_1,&local_c,local_8);
    FUN_00567510(param_1,local_c);
    FUN_00567b78(param_1,local_10);
    cVar2 = FUN_004f7a54(param_1);
    if (cVar2 != '\0') {
      pHVar5 = (HWND)FUN_004f76a8(param_1);
      pHVar5 = GetParent(pHVar5);
      hWnd = (HWND)FUN_004f76a8(param_1);
      uVar6 = GetDlgCtrlID(hWnd);
      lParam = FUN_004f76a8(param_1);
      SendMessageW(pHVar5,0x111,uVar6 & 0xffff | 0x3000000,lParam);
    }
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = iStack_2c;
  puStack_24 = &LAB_00567925;
  puStack_28 = (undefined1 *)0x56791d;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
