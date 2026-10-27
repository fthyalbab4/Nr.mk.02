// rea decompile_all
// name: FUN_00416328
// address: 0x416328
// body: available
// range: 0x416328-0x41636b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00416328(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  int iVar6;
  ushort *unaff_ESI;
  ushort *puVar7;
  short sVar5;

  puVar7 = unaff_ESI;
  do {
    uVar1 = (ulonglong)param_1;
    param_1 = param_1 / 10;
    sVar5 = (short)(uVar1 % 10);
    uVar4 = sVar5 + 0x30;
    puVar7 = puVar7 + -1;
    if (0x39 < uVar4) {
      uVar4 = sVar5 + 0x37;
    }
    *puVar7 = uVar4;
  } while (param_1 != 0);
  uVar3 = (uint)((int)unaff_ESI - (int)puVar7) >> 1;
  iVar6 = param_2 - uVar3;
  if (uVar3 <= param_2 && iVar6 != 0) {
    iVar2 = -iVar6;
    while (iVar6 = iVar6 + -1, iVar6 != 0) {
      (puVar7 + iVar2)[iVar6] = 0x30;
    }
    puVar7[iVar2] = 0x30;
  }
  return;
}
