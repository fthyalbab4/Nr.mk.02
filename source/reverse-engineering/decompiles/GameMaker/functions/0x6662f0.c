// rea decompile_all
// name: FUN_006662f0
// address: 0x6662f0
// body: available
// range: 0x6662f0-0x66637a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006662f0(int *param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;

  FUN_004f08c0(param_1,param_2,param_3,param_4,param_5);
  if ((param_1[0x6d] == 0) || (*(int *)(param_1[0x6d] + 0x18) == 0)) {
    uVar2 = (**(code **)(*param_1 + 0x4c))();
    cVar1 = FUN_00405c98(uVar2,&PTR_FUN_00509914);
    if (cVar1 != '\0') {
      iVar3 = (**(code **)(*param_1 + 0x4c))();
      if ((0 < *(int *)(iVar3 + 0x6c)) && (*(char *)(iVar3 + 0x95) == '\0')) {
        FUN_0050ade8(iVar3,1);
      }
    }
    cVar1 = (**(code **)(*param_1 + 0xe4))();
    if (cVar1 == '\0') {
      wParam = 0;
      Msg = 0xb403;
      hWnd = (HWND)FUN_004f76a8(param_1[0xd]);
      PostMessageW(hWnd,Msg,wParam,(LPARAM)param_1);
    }
  }
  return;
}
