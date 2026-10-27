// rea decompile_all
// name: FUN_004d27d8
// address: 0x4d27d8
// body: available
// range: 0x4d27d8-0x4d2896 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004d27d8(int param_1,char param_2)

{
  undefined4 uVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;

  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00405fb0();
    cVar2 = extraout_DL;
  }
  FUN_00448e88(param_1,0);
  uVar1 = FUN_0043d09c(&LAB_004ccd60,1,param_1,&LAB_004cc818);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined1 *)(param_1 + 0x40) = 9;
  uVar1 = FUN_0046475c(&PTR_LAB_00459100,1);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  uVar1 = FUN_0046475c(&PTR_LAB_00459100,1);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined2 *)(param_1 + 0x5c) = 8;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 3;
  uVar1 = FUN_004d1e5c(&PTR_FUN_004cc2a0,1,param_1);
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  uVar1 = FUN_0043d09c(&LAB_004ccd60,1,param_1,&LAB_004cca4c);
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  if (cVar2 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}
