// rea decompile_all
// name: FUN_004bb484
// address: 0x4bb484
// body: available
// range: 0x4bb484-0x4bb4c3 inclusive
// range: 0x4bb4dc-0x4bb5f9 inclusive
// range: 0x4bb613-0x4bb619 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4bb49d (push 0x4bb5fa followed by fs-segment stack chaining); handler 0x4bb5fa lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bb484(int *param_1,UINT *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  UINT UVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  tagRECT local_18;
  int *local_8;

  puStack_28 = &stack0xfffffffc;
  puStack_2c = &LAB_004bb5fa;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  UVar3 = *param_2;
  local_8 = param_1;
  if ((int)UVar3 < 0xb04e) {
    if (UVar3 == 0xb04d) {
      puVar1 = &stack0xfffffffc;
      if ((char)param_1[0xc4] != '\0') {
        puStack_28 = &stack0xfffffffc;
        GetWindowRect((HWND)param_1[0xb2],&local_18);
        MapWindowPoints((HWND)0x0,(HWND)local_8[0xb2],(LPPOINT)&local_18,2);
        FUN_004eb00c(local_8[0xb2],&local_18);
        *(undefined1 *)(local_8 + 0xc4) = 0;
        *in_FS_OFFSET = uStack_30;
        return;
      }
    }
    else {
      puVar1 = &stack0xfffffffc;
      switch(UVar3) {
      case 0x100:
      case 0x104:
        puStack_28 = &stack0xfffffffc;
        cVar2 = FUN_004f61e0(param_1,param_2);
        puVar1 = puStack_28;
        if (cVar2 != '\0') {
          *in_FS_OFFSET = uStack_30;
          return;
        }
        break;
      case 0x101:
      case 0x105:
        puStack_28 = &stack0xfffffffc;
        cVar2 = FUN_004f6318(param_1,param_2);
        puVar1 = puStack_28;
        if (cVar2 != '\0') {
          *in_FS_OFFSET = uStack_30;
          return;
        }
        break;
      case 0x102:
        puStack_28 = &stack0xfffffffc;
        cVar2 = FUN_004f63ec(param_1,param_2);
        puVar1 = puStack_28;
        if (cVar2 != '\0') {
          *in_FS_OFFSET = uStack_30;
          return;
        }
      }
    }
  }
  else if ((((UVar3 == 0xbd00) || (UVar3 == 0xbd02)) || (UVar3 == 0xbd04)) ||
          (puVar1 = &stack0xfffffffc, UVar3 == 0xbd06)) {
    (**(code **)(*param_1 + 0x84))(param_1,param_2);
    *in_FS_OFFSET = uStack_30;
    return;
  }
  puStack_28 = puVar1;
  UVar3 = CallWindowProcW((WNDPROC)local_8[0xb0],(HWND)local_8[0xb2],*param_2,param_2[1],param_2[2])
  ;
  param_2[3] = UVar3;
  *in_FS_OFFSET = uStack_30;
  return;
}
