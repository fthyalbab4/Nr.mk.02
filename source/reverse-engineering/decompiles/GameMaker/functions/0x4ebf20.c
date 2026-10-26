// rea decompile_all
// name: FUN_004ebf20
// address: 0x4ebf20
// body: available
// range: 0x4ebf20-0x4ebfbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004ebf20(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_8;

  local_8 = 0;
  iVar1 = *(int *)(DAT_00788270 + 0x14);
  if ((((iVar1 != 0) && (*(char *)(iVar1 + 0x1eb) != '\0')) && (*(int *)(iVar1 + 0x1c4) != 0)) &&
     (iVar2 = FUN_004f5dcc(iVar1), iVar2 != 0)) {
    iVar2 = FUN_004f5dcc(iVar1);
    if ((iVar2 == 1) &&
       (iVar2 = FUN_0043b048(*(undefined4 *)(iVar1 + 0x1c4),0),
       iVar2 == *(int *)(DAT_00788270 + 0x40))) {
      return 0;
    }
    iVar2 = FUN_004ec9b4(DAT_00788270 + 0xc,0);
    while( true ) {
      if (iVar2 == 0) {
        return 0;
      }
      if (iVar1 == iVar2) {
        return 0;
      }
      iVar3 = FUN_0043b0b0(*(undefined4 *)(iVar1 + 0x1c4),iVar2);
      if (iVar3 != -1) break;
      iVar2 = *(int *)(iVar2 + 0x34);
    }
    local_8 = FUN_004f5de0(iVar1,iVar3);
  }
  return local_8;
}
