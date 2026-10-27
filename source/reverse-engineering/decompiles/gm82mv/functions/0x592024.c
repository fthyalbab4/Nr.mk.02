// rea decompile_all
// name: FUN_00592024
// address: 0x592024
// body: available
// range: 0x592024-0x592145 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x592044 (push 0x592146 followed by fs-segment stack chaining); handler 0x592146 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00592024(int *param_1,undefined4 param_2)

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
  puStack_28 = &LAB_00592146;
  iStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_2c;
  cVar2 = FUN_00592154(param_1);
  if ((cVar2 == '\0') || ((char)param_1[0x9f] != '\0')) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  else {
    piVar3 = (int *)FUN_004820b4();
    (**(code **)(*piVar3 + 0x18))();
    uVar4 = FUN_004820b4();
    FUN_00481af8(uVar4,&local_8);
    piVar3 = (int *)FUN_004820b4();
    (**(code **)(*piVar3 + 0x14))();
    iStack_2c = 0x592097;
    FUN_00592358(param_1,&local_10,&local_14);
    iStack_2c = 0x5920a1;
    FUN_00591da0(param_1,&local_c);
    iStack_2c = local_14 - local_10;
    FUN_005937c8(param_1,&local_c,local_10);
    iStack_2c = 0x5920bf;
    FUN_00591d38(param_1,local_c);
    iStack_2c = local_10;
    local_10 = FUN_00593868(param_1,&local_c,local_8);
    FUN_00591d38(param_1,local_c);
    FUN_005923a0(param_1,local_10);
    cVar2 = FUN_004c4988(param_1);
    if (cVar2 != '\0') {
      pHVar5 = (HWND)FUN_004c45dc(param_1);
      pHVar5 = GetParent(pHVar5);
      hWnd = (HWND)FUN_004c45dc(param_1);
      uVar6 = GetDlgCtrlID(hWnd);
      lParam = FUN_004c45dc(param_1);
      SendMessageW(pHVar5,0x111,uVar6 & 0xffff | 0x3000000,lParam);
    }
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = iStack_2c;
  puStack_24 = &LAB_0059214d;
  puStack_28 = (undefined1 *)0x592145;
  thunk_FUN_004072fc(&local_c,2,puVar1);
  return;
}
