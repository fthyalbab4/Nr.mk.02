// rea decompile_all
// name: FUN_0058b88c
// address: 0x58b88c
// body: available
// range: 0x58b88c-0x58b9c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058b88c(int param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;

  cVar3 = FUN_0058ba8c(param_1);
  iVar2 = DAT_00686b28;
  if (cVar3 != '\0') {
    iVar1 = DAT_00686b28 + param_1 * 0x120;
    *param_2 = 1;
    *(int *)(param_2 + 4) = param_1;
    *(undefined4 *)(param_2 + 0x10) = param_6;
    *(undefined4 *)(param_2 + 0x14) = param_7;
    *(undefined4 *)(param_2 + 0x18) = param_4;
    *(undefined4 *)(param_2 + 0x1c) = param_5;
    *(undefined4 *)(param_2 + 0x20) = param_6;
    *(undefined4 *)(param_2 + 0x24) = param_7;
    *(undefined4 *)(param_2 + 0x28) = param_4;
    *(undefined4 *)(param_2 + 0x2c) = param_5;
    FUN_0058b2d0(0,iVar2,extraout_ECX,*(undefined4 *)(iVar1 + 0x60),*(undefined4 *)(iVar1 + 100),
                 *(undefined4 *)(iVar1 + 0x58),*(undefined4 *)(iVar1 + 0x5c));
    *(double *)(param_2 + 0x30) = (double)in_ST0;
    FUN_0058b2d0(0);
    *(double *)(param_2 + 0x38) = (double)in_ST1;
    FUN_0058b2d0(0);
    *(double *)(param_2 + 0x40) = (double)in_ST2;
    FUN_0058b2d0(0);
    uVar4 = FUN_004048b8();
    *(undefined4 *)(param_2 + 0xc) = uVar4;
    *(undefined4 *)(param_2 + 8) = 0;
    FUN_0058b5a8(param_2);
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(iVar1 + 0x100);
    *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(iVar1 + 0x104);
    FUN_0058b2d0(0);
    *(double *)(param_2 + 0x58) = (double)in_ST3;
    if (*(char *)(iVar1 + 10) == '\0') {
      *(undefined4 *)(param_2 + 0x60) = 0;
    }
    else {
      uVar4 = FUN_004047b8(10000);
      *(undefined4 *)(param_2 + 0x60) = uVar4;
    }
    uVar4 = FUN_004047b8(100000);
    *(undefined4 *)(param_2 + 100) = uVar4;
  }
  return;
}
