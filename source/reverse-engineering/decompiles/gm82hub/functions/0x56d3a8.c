// rea decompile_all
// name: FUN_0056d3a8
// address: 0x56d3a8
// body: available
// range: 0x56d3a8-0x56d5c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0056d3a8(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;

  uVar3 = 0;
  FUN_0056d2a8();
  iVar1 = FUN_0050bbe0(param_1);
  if (799 < iVar1) {
    uVar3 = FUN_0050be9c(param_1);
    PTR_FUN_006869b4._0_1_ = FUN_0050bcd0(uVar3);
    PTR_FUN_006869b8._0_1_ = FUN_0050bcd0(uVar3);
    PTR_FUN_006869bc._0_1_ = FUN_0050bcd0(uVar3);
    DAT_006869c0 = FUN_0050bcd0(uVar3);
    DAT_006869c4 = FUN_0050bbe0(uVar3);
    PTR_FUN_006869c8._0_1_ = FUN_0050bcd0(uVar3);
    PTR_FUN_006869cc._0_1_ = FUN_0050bcd0(uVar3);
    DAT_006869d0 = FUN_0050bbe0(uVar3);
    PTR_FUN_006869d4._0_1_ = FUN_0050bcd0(uVar3);
    DAT_006869d8 = FUN_0050bbe0(uVar3);
    DAT_006869dc = FUN_0050bbe0(uVar3);
    DAT_006869e0 = FUN_0050bbe0(uVar3);
    PTR_FUN_006869e4._0_1_ = FUN_0050bcd0(uVar3);
    DAT_006869ec = FUN_0050bbe0(uVar3);
    DAT_006869f0 = FUN_0050bcd0(uVar3);
    DAT_006869f4 = FUN_0050bcd0(uVar3);
    DAT_006869f8 = FUN_0050bcd0(uVar3);
    DAT_006869fc = FUN_0050bcd0(uVar3);
    DAT_00686a00 = FUN_0050bcd0(uVar3);
    DAT_00686a04 = FUN_0050bcd0(uVar3);
    DAT_00686a08 = FUN_0050bcd0(uVar3);
    DAT_00686a0c = FUN_0050bbe0(uVar3);
    PTR_FUN_006869e8._0_1_ = FUN_0050bcd0(uVar3);
    DAT_00686a10 = FUN_0050bcd0(uVar3);
    if (DAT_00686a10 != '\0') {
      DAT_00845284 = FUN_0050bfc4(uVar3);
      DAT_00845280 = FUN_0050bfc4(uVar3);
    }
    DAT_00845288 = FUN_0050bfc4(uVar3);
    PTR_FUN_00686a14._0_1_ = FUN_0050bcd0(uVar3);
    DAT_00686a18 = FUN_0050bbe0(uVar3);
    DAT_00686a1c = FUN_0050bcd0(uVar3);
    DAT_00686a20 = FUN_0050bcd0(uVar3);
    PTR_FUN_00686a24._0_1_ = FUN_0050bcd0(uVar3);
    PTR_FUN_00686a28._0_1_ = FUN_0050bcd0(uVar3);
    uVar2 = FUN_0050bbe0(uVar3);
    if ((uVar2 & 1) == 1) {
      PTR_FUN_00686a2c._0_1_ = 1;
    }
    DAT_00686a30 = (uVar2 & 2) == 2;
    if (0x333 < iVar1) {
      _DAT_00686a34 = FUN_0050bbe0(uVar3);
      PTR_FUN_00686a38._0_1_ = FUN_0050bcd0(uVar3);
    }
    FUN_00405fdc(uVar3);
    uVar3 = 1;
  }
  return uVar3;
}
