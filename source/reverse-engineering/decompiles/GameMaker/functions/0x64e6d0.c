// rea decompile_all
// name: FUN_0064e6d0
// address: 0x64e6d0
// body: available
// range: 0x64e6d0-0x64e7dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0064e6d0(int param_1)

{
  uint uVar1;
  int iVar2;

  for (iVar2 = 0; (iVar2 < DAT_0077f2ac && (*(char *)(DAT_0078a1ac + iVar2 * 0x14) != '\0'));
      iVar2 = iVar2 + 1) {
  }
  if (iVar2 == DAT_0077f2ac) {
    FUN_00409be0(&DAT_0078a1ac,&DAT_0064e5c0,1,DAT_0077f2ac + 1);
    DAT_0077f2ac = DAT_0077f2ac + 1;
  }
  if (DAT_0077f2a4 == (int *)0x0) {
    param_1 = 3;
  }
  *(undefined1 *)(DAT_0078a1ac + iVar2 * 0x14) = 1;
  *(int *)(DAT_0078a1ac + 4 + iVar2 * 0x14) = param_1;
  FUN_0040b140(DAT_0078a1ac + 8 + iVar2 * 0x14);
  FUN_0040b140(DAT_0078a1ac + 0xc + iVar2 * 0x14);
  if ((param_1 == 0) || (param_1 == 1)) {
    FUN_0040b140(DAT_0078a1ac + 0xc + iVar2 * 0x14);
    uVar1 = (**(code **)(*DAT_0077f2a4 + 0xc4))();
    if ((uVar1 & 0x80000000) != 0) {
      param_1 = 3;
    }
  }
  if (param_1 == 2) {
    FUN_0040b140(DAT_0078a1ac + 0xc + iVar2 * 0x14);
    uVar1 = (**(code **)(*DAT_0077f2a4 + 0xc4))();
    if ((uVar1 & 0x80000000) != 0) {
      param_1 = 3;
    }
  }
  if (param_1 == 3) {
    *(undefined4 *)(DAT_0078a1ac + 4 + iVar2 * 0x14) = 3;
  }
  return iVar2;
}
