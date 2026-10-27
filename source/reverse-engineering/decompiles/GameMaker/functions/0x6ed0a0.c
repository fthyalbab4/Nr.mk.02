// rea decompile_all
// name: FUN_006ed0a0
// address: 0x6ed0a0
// body: available
// range: 0x6ed0a0-0x6ed17f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ed0a0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;

  if (0 < DAT_00790164) {
    if (-1 < DAT_00790164 + -1) {
      puVar1 = &DAT_00790124;
      iVar2 = DAT_00790164;
      do {
        FUN_00405a7c(*puVar1);
        puVar1 = puVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (DAT_00790164 < 0x10) {
      puVar1 = &DAT_00790124 + DAT_00790164;
      iVar2 = DAT_00790164;
      do {
        (&DAT_00790124)[iVar2 - DAT_00790164] = *puVar1;
        iVar2 = iVar2 + 1;
        puVar1 = puVar1 + 1;
      } while (iVar2 != 0x10);
    }
    iVar2 = 0x10 - DAT_00790164;
    if (iVar2 < 0x10) {
      puVar1 = &DAT_00790124 + iVar2;
      do {
        *puVar1 = 0;
        iVar2 = iVar2 + 1;
        puVar1 = puVar1 + 1;
      } while (iVar2 != 0x10);
    }
    DAT_00790168 = DAT_00790168 - DAT_00790164;
    DAT_00790164 = 0;
  }
  DAT_00790124 = DAT_00790160;
  iVar2 = -0xf;
  puVar1 = &DAT_0079015c;
  do {
    puVar1[1] = *puVar1;
    puVar1 = puVar1 + -1;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0);
  if (DAT_00790124 == 0) {
    DAT_00790124 = FUN_006e6650(&LAB_006e56d8,1);
  }
  FUN_006e68d8(DAT_00790124,*(undefined4 *)(param_1 + 0x5e8));
  if (DAT_00790168 < 0xf) {
    DAT_00790168 = DAT_00790168 + 1;
  }
  *(undefined1 *)(param_1 + 0x5f4) = 1;
  *(undefined1 *)(param_1 + 0x5f5) = 0;
  return;
}
