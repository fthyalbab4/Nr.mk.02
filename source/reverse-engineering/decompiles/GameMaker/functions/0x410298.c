// rea decompile_all
// name: FUN_00410298
// address: 0x410298
// body: available
// range: 0x410298-0x410322 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00410298(uint param_1)

{
  char cVar1;
  undefined4 uVar2;
  ushort uVar3;

  cVar1 = FUN_0041028c(param_1);
  if (cVar1 == '\0') {
    if (DAT_00785c68 == 0) {
      FUN_004103f8();
    }
    uVar2 = FUN_00410270(*(undefined1 *)
                          (DAT_00785c68 +
                          (uint)*(ushort *)
                                 (DAT_00785c64 +
                                 ((uint)*(ushort *)(DAT_00785c60 + ((param_1 & 0xffff) >> 8) * 2) +
                                 ((param_1 & 0xffff) >> 4 & 0xf)) * 2) + (param_1 & 0xf)));
    return uVar2;
  }
  cVar1 = FUN_0041038c(param_1);
  if (cVar1 == '\0') {
    uVar2 = FUN_00410270((&DAT_00773a58)[param_1 & 0xff]);
  }
  else {
    uVar3 = (ushort)param_1 | 0x20;
    if ((uVar3 < 0x61) || (0x7a < uVar3)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}
