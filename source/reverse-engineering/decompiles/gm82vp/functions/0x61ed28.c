// rea decompile_all
// name: FUN_0061ed28
// address: 0x61ed28
// body: available
// range: 0x61ed28-0x61edde inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0061ed28(void)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;

  if (DAT_006886a8 != (int *)0x0) {
    uVar6 = 1;
    uVar5 = 0x1b;
    piVar4 = DAT_006886a8;
    (**(code **)(*DAT_006886a8 + 200))();
    uVar3 = 1;
    uVar2 = 0x8f;
    piVar1 = DAT_006886a8;
    (**(code **)(*DAT_006886a8 + 200))();
    FUN_0061eb40(PTR_FUN_006886b0._0_1_);
    FUN_0061eb08(DAT_006886e8,DAT_006886ec,extraout_ECX,piVar1,uVar2,uVar3,piVar4,uVar5,uVar6);
    FUN_0061e934(PTR_FUN_006886ac._0_1_);
    FUN_0061e970(DAT_006886d4);
    FUN_0061e8a0(DAT_006886cc);
    FUN_0061e9a4(PTR_FUN_006886d8._0_1_,DAT_006886dc,extraout_ECX_00,DAT_006886e4,DAT_006886e0);
    FUN_0061eb80(DAT_006886bc);
    FUN_0061ebec(DAT_006886c0);
    FUN_0061ecac(PTR_FUN_006886c4._0_1_);
  }
  return;
}
