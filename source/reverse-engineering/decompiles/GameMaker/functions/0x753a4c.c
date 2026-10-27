// rea decompile_all
// name: FUN_00753a4c
// address: 0x753a4c
// body: available
// range: 0x753a4c-0x753b0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00753a4c(undefined4 *param_1,char param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int extraout_ECX;
  char extraout_DL;
  char cVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;

  cVar4 = '\0';
  if (param_2 != '\0') {
    param_1 = (undefined4 *)FUN_00405fb0();
    param_3 = extraout_ECX;
    cVar4 = extraout_DL;
  }
  FUN_00405a4c(param_1,0);
  uVar2 = FUN_00405a4c(&PTR_LAB_0042f444,1);
  param_1[3] = uVar2;
  uVar2 = FUN_0044d8a0(&LAB_0044ce38,1);
  param_1[4] = uVar2;
  uVar2 = FUN_0044d8a0(&LAB_0044ce38,1);
  param_1[5] = uVar2;
  uVar2 = FUN_0044d8a0(&LAB_0044ce38,1);
  param_1[6] = uVar2;
  uVar2 = FUN_00405a4c(&PTR_LAB_0042f444,1);
  param_1[7] = uVar2;
  FUN_0043ae88(param_1[3],0);
  param_1[2] = param_3;
  uVar2 = *(undefined4 *)(param_3 + 4);
  param_1[1] = uVar2;
  uVar3 = (*(code *)**(undefined4 **)param_1[2])();
  uVar1 = FUN_007541f4(*param_1,uVar2,uVar3);
  *(undefined1 *)(param_1 + 8) = uVar1;
  if (*(char *)(param_1 + 8) != '\0') {
    FUN_00753b88(param_1);
  }
  if (cVar4 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}
