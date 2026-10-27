// rea decompile_all
// name: FUN_004fc934
// address: 0x4fc934
// body: available
// range: 0x4fc934-0x4fca1c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fc934(int param_1)

{
  int iVar1;
  HGDIOBJ pvVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;

  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 != 0) {
    if (*(char *)(*(int *)(iVar1 + 0x14) + 0x10) == '\x01') {
      local_18 = FUN_004fa524(iVar1,2);
      local_14 = (int)*(uint *)(param_1 + 0xc) >> 1;
      if (local_14 < 0) {
        local_14 = local_14 + (uint)((*(uint *)(param_1 + 0xc) & 1) != 0);
      }
      local_14 = *(int *)(param_1 + 0x54) - local_14;
      local_10 = FUN_004fa5a8(*(undefined4 *)(param_1 + 0x60),2);
      local_10 = local_10 + local_18;
      local_c = local_14 + *(int *)(param_1 + 0xc);
    }
    else {
      local_18 = (int)*(uint *)(param_1 + 0xc) >> 1;
      if (local_18 < 0) {
        local_18 = local_18 + (uint)((*(uint *)(param_1 + 0xc) & 1) != 0);
      }
      local_18 = *(int *)(param_1 + 0x50) - local_18;
      local_14 = FUN_004fa524(iVar1,1);
      local_10 = local_18 + *(int *)(param_1 + 0xc);
      local_c = FUN_004fa5a8(*(undefined4 *)(param_1 + 0x60),1);
      local_c = local_c + local_14;
    }
    pvVar2 = (HGDIOBJ)FUN_0045bc84(*(undefined4 *)(param_1 + 0x10));
    pvVar2 = SelectObject(*(HDC *)(param_1 + 0x58),pvVar2);
    PatBlt(*(HDC *)(param_1 + 0x58),local_18,local_14,local_10 - local_18,local_c - local_14,
           0x5a0049);
    SelectObject(*(HDC *)(param_1 + 0x58),pvVar2);
  }
  return;
}
