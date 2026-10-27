// rea decompile_all
// name: FUN_007060e8
// address: 0x7060e8
// body: available
// range: 0x7060e8-0x706199 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_007060e8(void)

{
  undefined *puVar1;

  puVar1 = PTR_DAT_00782150;
  if (((((*PTR_DAT_00782150 == '\0') && (puVar1 = PTR_DAT_007818e8, *PTR_DAT_007818e8 == '\0')) &&
       (puVar1 = PTR_DAT_00781e54, *PTR_DAT_00781e54 == '\0')) &&
      (((puVar1 = PTR_DAT_00781980, *PTR_DAT_00781980 == '\0' &&
        (puVar1 = PTR_DAT_00782450, *PTR_DAT_00782450 == '\0')) &&
       ((puVar1 = PTR_DAT_007817d4, *PTR_DAT_007817d4 == '\0' &&
        ((puVar1 = PTR_DAT_0078179c, *PTR_DAT_0078179c == '\0' &&
         (puVar1 = PTR_DAT_0078205c, *PTR_DAT_0078205c == '\0')))))))) &&
     ((puVar1 = PTR_DAT_00781b90, *PTR_DAT_00781b90 == '\0' &&
      (((((puVar1 = PTR_DAT_00781894, *PTR_DAT_00781894 == '\0' &&
          (puVar1 = PTR_DAT_00782448, *PTR_DAT_00782448 == '\0')) &&
         (puVar1 = PTR_DAT_007823fc, *PTR_DAT_007823fc == '\0')) &&
        ((puVar1 = PTR_DAT_0078214c, *PTR_DAT_0078214c == '\0' &&
         (puVar1 = PTR_DAT_00781e88, *PTR_DAT_00781e88 == '\0')))) &&
       ((puVar1 = PTR_DAT_00781c60, *PTR_DAT_00781c60 == '\0' &&
        (puVar1 = PTR_DAT_00782774, *PTR_DAT_00782774 == '\0')))))))) {
    return 0;
  }
  return CONCAT31((int3)((uint)puVar1 >> 8),1);
}
