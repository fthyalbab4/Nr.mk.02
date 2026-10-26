// rea decompile_all
// name: FUN_0058fa14
// address: 0x58fa14
// body: available
// range: 0x58fa14-0x58faec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058fa14(int param_1,undefined4 param_2,undefined4 param_3,float param_4,float param_5)

{
  undefined1 uVar1;
  int iVar2;
  int local_8;

  if (0.0 < param_5) {
    *(float *)(param_1 + 0xc) = param_5;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  }
  if (0.0 < param_4) {
    *(float *)(param_1 + 0x10) = param_4;
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0x400ccccd;
  }
  if (*(byte *)(param_1 + 5) < 8) {
    local_8 = (1 << (*(byte *)(param_1 + 6) & 0x1f)) + -1;
  }
  else {
    local_8 = 0xff;
  }
  if (-1 < local_8) {
    local_8 = local_8 + 1;
    iVar2 = 0;
    do {
      FUN_00410570();
      uVar1 = FUN_00404878();
      *(undefined1 *)(param_1 + 0x14 + iVar2) = uVar1;
      iVar2 = iVar2 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}
