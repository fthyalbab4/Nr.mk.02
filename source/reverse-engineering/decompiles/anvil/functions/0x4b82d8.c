// rea decompile_all
// name: FUN_004b82d8
// address: 0x4b82d8
// body: available
// range: 0x4b82d8-0x4b8358 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b82d8(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  HWND hWnd;
  HWND hWndParent;
  BOOL BVar5;
  int local_c;
  undefined4 local_8;

  local_8 = param_2;
  puVar2 = (undefined4 *)FUN_00404324(8);
  *puVar2 = local_8;
  uVar3 = FUN_004b82ac();
  puVar2[1] = uVar3;
  cVar1 = FUN_004b8274(param_1,uVar3,&local_c);
  if (cVar1 == '\0') {
    FUN_00438d04(param_1,puVar2);
  }
  else {
    puVar4 = (undefined4 *)FUN_00438ec4(param_1,local_c);
    hWnd = (HWND)FUN_004c45dc(*puVar4);
    hWndParent = (HWND)FUN_004c45dc(*puVar2);
    BVar5 = IsChild(hWndParent,hWnd);
    if (BVar5 != 0) {
      local_c = local_c + 1;
    }
    FUN_00438f7c(param_1,local_c,puVar2);
  }
  return;
}
