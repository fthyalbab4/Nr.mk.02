// rea decompile_all
// name: FUN_00484848
// address: 0x484848
// body: available
// range: 0x484848-0x484919 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00484848(int *param_1,char param_2)

{
  char cVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;

  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00406510();
    cVar2 = extraout_DL;
  }
  FUN_004c7138(param_1,0);
  param_1[0x14] = 0x2808eb;
  FUN_004d08e8();
  cVar1 = FUN_004d09f4();
  if (cVar1 != '\0') {
    param_1[0x14] = param_1[0x14] & 0xffffffbfU | 0x40000;
  }
  FUN_004bac98(param_1,0xb9);
  FUN_004baccc(param_1,0x29);
  *(undefined1 *)(param_1 + 0x9e) = 2;
  *(undefined1 *)((int)param_1 + 0x289) = 2;
  FUN_00484d14(param_1,2);
  FUN_00484d30(param_1,1);
  *(undefined1 *)(param_1 + 0xa1) = 0;
  FUN_004bb810(param_1,0xff00000f);
  *(undefined1 *)((int)param_1 + 0x285) = 1;
  FUN_004c4918(param_1,1);
  (**(code **)(*param_1 + 0xd8))(param_1,1);
  *(undefined1 *)(param_1 + 0xa2) = 1;
  if (cVar2 != '\0') {
    FUN_00406568(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}
