// rea decompile_all
// name: FUN_004e29c4
// address: 0x4e29c4
// body: available
// range: 0x4e29c4-0x4e2a58 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e29c4(undefined4 param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  HWND pHVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint dwNewLong;
  uint local_10;

  local_10 = param_3;
  FUN_004e0e74(param_1);
  cVar1 = FUN_004c4988(param_1);
  if (cVar1 != '\0') {
    iVar5 = -0x14;
    pHVar2 = (HWND)FUN_004c45dc(param_1);
    local_10 = GetWindowLongW(pHVar2,iVar5);
    local_10 = local_10 & 0xffff8fff;
    FUN_004c0200(param_1,&local_10);
    iVar5 = -0x14;
    dwNewLong = local_10;
    pHVar2 = (HWND)FUN_004c45dc(param_1);
    SetWindowLongW(pHVar2,iVar5,dwNewLong);
  }
  iVar5 = FUN_00446a40(param_1);
  if (-1 < iVar5 + -1) {
    iVar4 = 0;
    do {
      uVar3 = FUN_00446a14(param_1,iVar4);
      cVar1 = FUN_004061f8(uVar3,&PTR_FUN_004a3d9c);
      if (cVar1 != '\0') {
        FUN_00446a14(param_1,iVar4);
        FUN_004ab560();
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}
