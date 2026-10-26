// rea decompile_all
// name: FUN_00418b5f
// address: 0x418b5f
// body: available
// range: 0x418b5f-0x418bd1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00418b5f(void)

{
  short sVar1;
  int iVar2;
  int extraout_ECX;
  uint uVar3;
  uint extraout_EDX;
  int extraout_EDX_00;
  int iVar4;
  int unaff_EBP;
  short *unaff_EDI;
  short *psVar5;
  short *psVar6;
  byte bVar7;

  bVar7 = 0;
  uVar3 = *(uint *)(unaff_EBP + 8);
  if (0x11 < uVar3) {
    uVar3 = 0x12;
  }
  iVar2 = (int)*(short *)(unaff_EBP + -0x26);
  if (iVar2 < 1) {
    psVar5 = unaff_EDI + 1;
    *unaff_EDI = 0x30;
  }
  else {
    iVar4 = 0;
    if (*(char *)(unaff_EBP + 0x10) != '\x02') {
      iVar4 = (byte)((ushort)(iVar2 + -1) % 3) + 1;
    }
    while( true ) {
      sVar1 = FUN_00418a95();
      psVar5 = unaff_EDI + (uint)bVar7 * -2 + 1;
      *unaff_EDI = sVar1;
      iVar2 = 0;
      uVar3 = extraout_EDX;
      if (extraout_ECX == 1) break;
      iVar4 = iVar4 + -1;
      unaff_EDI = psVar5;
      if ((iVar4 == 0) && (*(short *)(unaff_EBP + -0xc) != 0)) {
        unaff_EDI = psVar5 + (uint)bVar7 * -2 + 1;
        *psVar5 = *(short *)(unaff_EBP + -0xc);
        iVar4 = 3;
      }
    }
  }
  if (uVar3 != 0) {
    psVar6 = psVar5;
    if (*(short *)(unaff_EBP + -10) != 0) {
      psVar6 = psVar5 + (uint)bVar7 * -2 + 1;
      *psVar5 = *(short *)(unaff_EBP + -10);
    }
    for (; iVar2 != 0; iVar2 = iVar2 + 1) {
      *psVar6 = 0x30;
      uVar3 = uVar3 - 1;
      if (uVar3 == 0) {
        return;
      }
      psVar6 = psVar6 + (uint)bVar7 * -2 + 1;
    }
    do {
      sVar1 = FUN_00418a95();
      *psVar6 = sVar1;
      psVar6 = psVar6 + (uint)bVar7 * -2 + 1;
    } while (extraout_EDX_00 != 1);
  }
  return;
}
