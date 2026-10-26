// rea decompile_all
// name: FUN_0051150c
// address: 0x51150c
// body: available
// range: 0x51150c-0x51162b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0051150c(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int local_14;

  for (iVar2 = 0; (iVar2 < DAT_006840b4 && (*(char *)(DAT_0068fda0 + iVar2 * 0x14) != '\0'));
      iVar2 = iVar2 + 1) {
  }
  if (iVar2 == DAT_006840b4) {
    FUN_00409dfc(&DAT_0068fda0,&DAT_005113fc,1,DAT_006840b4 + 1);
    DAT_006840b4 = DAT_006840b4 + 1;
  }
  if (DAT_006840ac == (int *)0x0) {
    param_1 = 3;
  }
  *(undefined1 *)(DAT_0068fda0 + iVar2 * 0x14) = 1;
  *(int *)(DAT_0068fda0 + 4 + iVar2 * 0x14) = param_1;
  FUN_0040b268(DAT_0068fda0 + 8 + iVar2 * 0x14);
  FUN_0040b268(DAT_0068fda0 + 0xc + iVar2 * 0x14);
  local_14 = param_3;
  if (DAT_0068fda8 == '\0') {
    if ((param_1 == 0) || (param_1 == 1)) {
      FUN_0040b268(DAT_0068fda0 + 0xc + iVar2 * 0x14);
      uVar1 = (**(code **)(*DAT_006840ac + 0xc4))();
      if ((uVar1 & 0x80000000) != 0) {
        param_1 = 3;
      }
    }
    if (param_1 == 2) {
      FUN_0040b268(DAT_0068fda0 + 0xc + iVar2 * 0x14);
      uVar1 = (**(code **)(*DAT_006840ac + 0xc4))();
      if ((uVar1 & 0x80000000) != 0) {
        param_1 = 3;
      }
    }
    local_14 = iVar2;
    if (param_1 == 3) {
      *(undefined4 *)(DAT_0068fda0 + 4 + iVar2 * 0x14) = 3;
    }
  }
  return local_14;
}
