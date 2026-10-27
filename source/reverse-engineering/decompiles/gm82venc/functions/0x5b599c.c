// rea decompile_all
// name: FUN_005b599c
// address: 0x5b599c
// body: available
// range: 0x5b599c-0x5b5a4d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_005b599c(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;

  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00406510();
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00476a18(param_1,0,param_3);
  iVar1 = FUN_004d36b0(&PTR_FUN_004b5340,1,param_3);
  param_1[0x74] = iVar1;
  *(undefined1 *)(param_1 + 0x75) = 0;
  *(undefined1 *)((int)param_1 + 0x1d5) = 0;
  *(undefined2 *)(param_1 + 0x77) = 0;
  FUN_0045b790(param_1[0x19],0xffffff);
  param_1[0x76] = *(int *)(param_1[0x19] + 0x18);
  FUN_00477274(param_1,2);
  FUN_0047736c(param_1,1);
  FUN_00477324(param_1,1);
  (**(code **)(*param_1 + 0x6c))(param_1,0);
  FUN_0045bb58(param_1[0x19],1);
  if (cVar2 != '\0') {
    FUN_00406568(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}
