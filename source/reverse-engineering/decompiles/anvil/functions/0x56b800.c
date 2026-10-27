// rea decompile_all
// name: FUN_0056b800
// address: 0x56b800
// body: available
// range: 0x56b800-0x56b8b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0056b800(void)

{
  uint uVar1;
  undefined4 uVar2;
  int *piStack_18;
  int iStack_14;
  undefined4 uStack_10;

  uVar2 = 0;
  if ((*(int *)PTR_DAT_00689570 != 0) && (DAT_006869a8 != 0)) {
    uStack_10 = DAT_006869ac;
    iStack_14 = DAT_006869a8;
    piStack_18 = *(int **)PTR_DAT_00689570;
    uVar1 = (**(code **)(*piStack_18 + 0x7c))();
    if ((uVar1 & 0x80000000) == 0) {
      FUN_0061fc40(&piStack_18,&iStack_14);
      FUN_0061fc50(0,0,piStack_18,iStack_14);
      FUN_0061fc94();
      FUN_0040b268(&DAT_006869a8);
      FUN_0040b268(&DAT_006869ac);
      DAT_006869b0 = 0xffffffff;
      uVar2 = 1;
    }
  }
  return uVar2;
}
