// rea decompile_all
// name: FUN_0053e3b8
// address: 0x53e3b8
// body: available
// range: 0x53e3b8-0x53e4b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0053e3b8(int param_1,char param_2)

{
  undefined4 uVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;

  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00405fb0();
    cVar2 = extraout_DL;
  }
  FUN_0053e300(param_1,0);
  uVar1 = FUN_0040431c((*(int *)(param_1 + 0x10) + 2) * 4);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = FUN_0040431c((*(int *)(param_1 + 0x10) + 2) * 4);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = FUN_0040431c((*(int *)(param_1 + 0x10) + 2) * 4);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  FUN_00404f08(*(undefined4 *)(param_1 + 0x14),(*(int *)(param_1 + 0x10) + 2) * 4,0);
  FUN_00404f08(*(undefined4 *)(param_1 + 0x18),(*(int *)(param_1 + 0x10) + 2) * 4,0);
  FUN_00404f08(*(undefined4 *)(param_1 + 0x1c),(*(int *)(param_1 + 0x10) + 2) * 4,0);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x2c);
  if (cVar2 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}
