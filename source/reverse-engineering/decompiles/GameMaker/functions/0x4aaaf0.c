// rea decompile_all
// name: FUN_004aaaf0
// address: 0x4aaaf0
// body: available
// range: 0x4aaaf0-0x4aab42 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004aaaf0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined4 param_6)

{
  HWND hWnd;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  LONG aLStackY_17f0 [1521];
  tagRECT *lpRect;
  tagRECT local_14;

  bVar4 = 0;
  lpRect = &local_14;
  hWnd = (HWND)FUN_004f76a8(param_1);
  GetWindowRect(hWnd,lpRect);
  puVar2 = (undefined4 *)(param_2 + 0x50 + (uint)bVar4 * -8);
  *(LONG *)(param_2 + 0x4c) = local_14.left;
  puVar3 = puVar2 + (uint)bVar4 * -2 + 1;
  puVar1 = (undefined4 *)((int)&local_14 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  *puVar2 = *(undefined4 *)((int)&local_14 + (uint)bVar4 * -8 + 4);
  *puVar3 = *puVar1;
  puVar3[(uint)bVar4 * -2 + 1] = puVar1[(uint)bVar4 * -2 + 1];
  FUN_00405d08(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}
