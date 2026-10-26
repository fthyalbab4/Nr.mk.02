// rea decompile_all
// name: FUN_004f816c
// address: 0x4f816c
// body: available
// range: 0x4f816c-0x4f826d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f816c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  int iVar2;
  COLORREF color;
  HPALETTE h;
  UINT UVar3;
  undefined1 local_15;

  iVar2 = FUN_004f6500(param_1);
  color = FUN_0045b0f4(param_4);
  h = (HPALETTE)(**(code **)(*param_1 + 0x28))();
  UVar3 = GetNearestPaletteIndex(h,color);
  local_15 = *(byte *)(iVar2 + 0x460);
  if (8 < local_15) {
    local_15 = 8;
  }
  iVar2 = FUN_004f7b90(param_1,param_3);
  pbVar1 = (byte *)(iVar2 + param_2 / (int)(8 / (ulonglong)local_15));
  *pbVar1 = *pbVar1 & ~(*(char *)((uint)local_15 * 4 + 0x681d2c) <<
                       (('\b' - local_15) -
                        (char)(param_2 % (int)(8 / (ulonglong)local_15)) * local_15 & 0x1f));
  *pbVar1 = *pbVar1 | (char)UVar3 <<
                      (('\b' - local_15) -
                       (char)(param_2 % (int)(8 / (ulonglong)local_15)) * local_15 & 0x1f);
  return;
}
