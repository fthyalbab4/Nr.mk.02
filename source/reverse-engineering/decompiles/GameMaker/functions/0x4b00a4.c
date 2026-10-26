// rea decompile_all
// name: FUN_004b00a4
// address: 0x4b00a4
// body: available
// range: 0x4b00a4-0x4b015c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_004b00a4(int param_1,code *param_2,undefined4 param_3,char param_4)

{
  char cVar1;
  HWND hWnd;
  LRESULT LVar2;
  int iVar3;
  bool bVar4;
  undefined4 local_18;
  code *local_14;
  undefined4 local_10;
  undefined4 local_c;
  code *local_8;

  bVar4 = false;
  local_c = param_3;
  local_8 = param_2;
  cVar1 = FUN_004f7a54(param_1);
  if (cVar1 != '\0') {
    if (local_8 == (code *)0x0) {
      local_14 = FUN_004ac67c;
    }
    else {
      local_14 = local_8;
    }
    local_18 = 0xffff0000;
    local_10 = local_c;
    hWnd = (HWND)FUN_004f76a8(param_1);
    LVar2 = SendMessageW(hWnd,0x1115,0,(LPARAM)&local_18);
    bVar4 = LVar2 != 0;
    if (param_4 != '\0') {
      for (iVar3 = FUN_004ae56c(*(undefined4 *)(param_1 + 0x2d8)); iVar3 != 0;
          iVar3 = FUN_004ad12c(iVar3)) {
        cVar1 = FUN_004ad044(iVar3);
        if (cVar1 != '\0') {
          FUN_004ad934(iVar3,local_8,local_c,1);
        }
      }
    }
    FUN_004aebe0(*(undefined4 *)(param_1 + 0x2d8));
  }
  return bVar4;
}
