// rea decompile_all
// name: FUN_00644610
// address: 0x644610
// body: available
// range: 0x644610-0x6446ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00644610(int param_1)

{
  undefined4 *puVar1;
  int iVar2;

  if (0 < DAT_0078a150) {
    if (-1 < DAT_0078a150 + -1) {
      puVar1 = &DAT_0078a110;
      iVar2 = DAT_0078a150;
      do {
        FUN_00405a7c(*puVar1);
        puVar1 = puVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (DAT_0078a150 < 0x10) {
      puVar1 = &DAT_0078a110 + DAT_0078a150;
      iVar2 = DAT_0078a150;
      do {
        (&DAT_0078a110)[iVar2 - DAT_0078a150] = *puVar1;
        iVar2 = iVar2 + 1;
        puVar1 = puVar1 + 1;
      } while (iVar2 != 0x10);
    }
    iVar2 = 0x10 - DAT_0078a150;
    if (iVar2 < 0x10) {
      puVar1 = &DAT_0078a110 + iVar2;
      do {
        *puVar1 = 0;
        iVar2 = iVar2 + 1;
        puVar1 = puVar1 + 1;
      } while (iVar2 != 0x10);
    }
    DAT_0078a154 = DAT_0078a154 - DAT_0078a150;
    DAT_0078a150 = 0;
  }
  DAT_0078a110 = DAT_0078a14c;
  iVar2 = -0xf;
  puVar1 = &DAT_0078a148;
  do {
    puVar1[1] = *puVar1;
    puVar1 = puVar1 + -1;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0);
  if (DAT_0078a110 == 0) {
    DAT_0078a110 = FUN_00701bf8(&DAT_00700d94,1);
  }
  FUN_007022dc(DAT_0078a110,*(undefined4 *)(param_1 + 0x704));
  if (DAT_0078a154 < 0xf) {
    DAT_0078a154 = DAT_0078a154 + 1;
  }
  *(undefined1 *)(param_1 + 0x740) = 1;
  *(undefined1 *)(param_1 + 0x741) = 0;
  return;
}
