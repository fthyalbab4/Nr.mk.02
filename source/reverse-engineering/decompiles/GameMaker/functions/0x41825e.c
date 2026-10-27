// rea decompile_all
// name: FUN_0041825e
// address: 0x41825e
// body: available
// range: 0x41825e-0x4182ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0041825e(uint param_1,undefined4 param_2,ushort *param_3)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  ushort *unaff_ESI;
  int unaff_EDI;

  if ((short)param_1 == 0x2a) {
    iVar1 = *(int *)(unaff_EBP + -0xc);
    if (iVar1 <= *(int *)(unaff_EBP + 8)) {
      *(int *)(unaff_EBP + -0xc) = *(int *)(unaff_EBP + -0xc) + 1;
    }
    if (unaff_ESI == param_3) {
LAB_004181b1:
      uVar2 = FUN_00418544((uint)(unaff_EDI - *(int *)(unaff_EBP + -8)) >> 1);
      return uVar2;
    }
    param_1 = CONCAT22((short)((uint)iVar1 >> 0x10),*unaff_ESI);
  }
  else {
    while ((0x2f < (ushort)param_1 && ((ushort)param_1 < 0x3a))) {
      if (unaff_ESI == param_3) goto LAB_004181b1;
      param_1 = (uint)*unaff_ESI;
      unaff_ESI = unaff_ESI + 1;
    }
  }
  return param_1;
}
