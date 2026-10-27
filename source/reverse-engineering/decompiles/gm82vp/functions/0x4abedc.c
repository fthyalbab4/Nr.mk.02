// rea decompile_all
// name: FUN_004abedc
// address: 0x4abedc
// body: available
// range: 0x4abedc-0x4abf52 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_004abedc(int *param_1,char param_2)

{
  int iVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;

  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00406510();
    cVar2 = extraout_DL;
  }
  FUN_004aa550(param_1,0);
  param_1[0x18] = -1;
  param_1[0x19] = -1;
  iVar1 = param_1[0xe];
  *(int **)(iVar1 + 0x8c) = param_1;
  *(undefined4 *)(iVar1 + 0x88) = *(undefined4 *)(*param_1 + 0x40);
  param_1[0xf] = *(int *)(*(int *)PTR_DAT_0068917c + 0x170);
  *(undefined1 *)((int)param_1 + 0x69) = 1;
  FUN_004abe98(DAT_0068f234,param_1);
  if (cVar2 != '\0') {
    FUN_00406568(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}
