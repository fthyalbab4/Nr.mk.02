// rea decompile_all
// name: FUN_0052ea1c
// address: 0x52ea1c
// body: available
// range: 0x52ea1c-0x52eadf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0052ea1c(int param_1,char param_2)

{
  undefined4 uVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;

  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00406510();
    cVar2 = extraout_DL;
  }
  FUN_0045ea7c(param_1,0);
  uVar1 = FUN_00524d00(&PTR_FUN_0051d2b0,1,param_1);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = FUN_00525318(&PTR_FUN_0051ace0,1,param_1);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = FUN_0043980c(&DAT_0042e714,1);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined2 *)(param_1 + 0x3c) = DAT_006844e8;
  *(undefined1 *)(param_1 + 0x3e) = DAT_006844ec;
  *(undefined4 *)(param_1 + 0x40) = DAT_006844f0;
  *(undefined1 *)(param_1 + 0x44) = PTR_FUN_006844f4._0_1_;
  *(undefined1 *)(param_1 + 0x45) = PTR_FUN_006844f8._0_1_;
  *(undefined1 *)(param_1 + 0x58) = DAT_006844fc;
  *(undefined4 *)(param_1 + 0x5c) = DAT_00684500;
  *(undefined4 *)(param_1 + 0x60) = 0x1fffffff;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  FUN_0052ebf0(param_1);
  if (cVar2 != '\0') {
    FUN_00406568(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}
