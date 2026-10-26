// rea decompile_all
// name: FUN_004ac910
// address: 0x4ac910
// body: available
// range: 0x4ac910-0x4ac9b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004ac910(uint param_1,undefined4 param_2)

{
  uint uVar1;
  HWND hWnd;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_20;

  bVar4 = *(char *)(param_1 + 0x24) == '\0';
  uVar1 = param_1;
  if (bVar4) {
    uVar1 = FUN_00408640(param_2,*(undefined4 *)(param_1 + 8));
    if (!bVar4) {
      FUN_00407eb8(param_1 + 8,param_2);
      local_30 = 1;
      local_2c = *(undefined4 *)(param_1 + 0x10);
      local_20 = 0xffffffff;
      hWnd = (HWND)FUN_004ac860(param_1);
      SendMessageW(hWnd,0x113f,0,(LPARAM)&local_30);
      iVar2 = FUN_004ac874(param_1);
      uVar1 = (uint)(byte)(*(char *)(iVar2 + 0x2c7) - 4);
      if (((byte)(*(char *)(iVar2 + 0x2c7) - 2U) < 2) && (*(char *)(param_1 + 0x25) != '\0')) {
        iVar2 = FUN_004ad0f0(param_1);
        if (iVar2 == 0) {
          uVar3 = FUN_004ac874(param_1);
          uVar1 = FUN_004b0098(uVar3,0);
        }
        else {
          uVar3 = FUN_004ad0f0(param_1);
          uVar1 = FUN_004ad928(uVar3,0);
        }
      }
    }
  }
  return uVar1;
}
