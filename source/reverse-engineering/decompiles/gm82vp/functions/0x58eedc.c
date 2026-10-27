// rea decompile_all
// name: FUN_0058eedc
// address: 0x58eedc
// body: available
// range: 0x58eedc-0x58f135 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058eedc(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  iVar6 = DAT_0084f020;
  iVar5 = DAT_0084f01c;
  if ((((*(int *)PTR_DAT_00689244 != 0) && (*PTR_DAT_00689498 == '\0')) &&
      (*(int *)(PTR_DAT_00689404 + 4) == 0)) && (*(int *)PTR_DAT_00689404 == 0)) {
    uVar1 = *PTR_PTR_00689134;
    uVar2 = *PTR_PTR_00689264;
    uVar3 = *PTR_PTR_00689474;
    FUN_00563a60(0);
    FUN_0061e934(0);
    FUN_0061eb40(0);
    FUN_00563d70();
    iVar4 = *(int *)PTR_DAT_00688d20;
    if (iVar4 == 0) {
      FUN_00624b78(*(undefined4 *)PTR_DAT_00689244,0,0xffffff,0,0x3fd00000,0,0,0,0x3ff00000,0,
                   0x3ff00000,0,0x40400000,0,0x40400000);
    }
    else if (iVar4 == 1) {
      FUN_00624b78(*(undefined4 *)PTR_DAT_00689244,0,0xffffff,0,0x3fd00000,0,0,0,0x3ff00000,0,
                   0x3ff00000,0,0x40400000,(double)(iVar5 + -0x80));
    }
    else if (iVar4 == 2) {
      FUN_00624b78(*(undefined4 *)PTR_DAT_00689244,0,0xffffff,0,0x3fd00000,0,0,0,0x3ff00000,0,
                   0x3ff00000,(double)(iVar6 + -0x80),0,0x40400000);
    }
    else if (iVar4 == 3) {
      FUN_00624b78(*(undefined4 *)PTR_DAT_00689244,0,0xffffff,0,0x3fd00000,0,0,0,0x3ff00000,0,
                   0x3ff00000,(double)(iVar6 + -0x80),(double)(iVar5 + -0x80));
    }
    else {
      FUN_00624b78(*(undefined4 *)PTR_DAT_00689244,0,0xffffff,0,0x3fd00000,0,0,0,0x3ff00000,0,
                   0x3ff00000,0,0x40400000,0,0x40400000);
    }
    FUN_0061e934(uVar2);
    FUN_00563a60(uVar1);
    FUN_0061eb40(uVar3);
  }
  return;
}
