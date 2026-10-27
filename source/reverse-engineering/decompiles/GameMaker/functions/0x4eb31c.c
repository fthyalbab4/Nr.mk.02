// rea decompile_all
// name: FUN_004eb31c
// address: 0x4eb31c
// body: available
// range: 0x4eb31c-0x4eb39c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004eb31c(undefined4 param_1,undefined4 param_2)

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
  puVar2 = (undefined4 *)FUN_0040431c(8);
  *puVar2 = local_8;
  uVar3 = FUN_004eb2f0();
  puVar2[1] = uVar3;
  cVar1 = FUN_004eb2b8(param_1,uVar3,&local_c);
  if (cVar1 == '\0') {
    FUN_0043ae88(param_1,puVar2);
  }
  else {
    puVar4 = (undefined4 *)FUN_0043b048(param_1,local_c);
    hWnd = (HWND)FUN_004f76a8(*puVar4);
    hWndParent = (HWND)FUN_004f76a8(*puVar2);
    BVar5 = IsChild(hWndParent,hWnd);
    if (BVar5 != 0) {
      local_c = local_c + 1;
    }
    FUN_0043b100(param_1,local_c,puVar2);
  }
  return;
}
