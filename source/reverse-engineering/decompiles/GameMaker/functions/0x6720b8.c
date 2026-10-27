// rea decompile_all
// name: FUN_006720b8
// address: 0x6720b8
// body: available
// range: 0x6720b8-0x672130 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006720b8(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  byte extraout_DL;

  iVar3 = FUN_00406058();
  uVar1 = *(undefined4 *)(iVar3 + 0x1c);
  *(undefined4 *)(iVar3 + 0x1c) = 0;
  FUN_00405a7c(uVar1);
  piVar2 = *(int **)(iVar3 + 0xc);
  if ((piVar2 != (int *)0x0) && ((*(byte *)(piVar2 + 7) & 8) == 0)) {
    (**(code **)(*piVar2 + 0x140))(piVar2,0);
  }
  FUN_00672280(iVar3);
  if (*(int *)(iVar3 + 0x10) != 0) {
    uVar1 = *(undefined4 *)(iVar3 + 0x10);
    *(undefined4 *)(iVar3 + 0x10) = 0;
    FUN_00405a7c(uVar1);
  }
  FUN_0067228c(iVar3);
  FUN_0043c8c0(iVar3,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00406000(iVar3);
  }
  return;
}
