// rea decompile_all
// name: FUN_00480230
// address: 0x480230
// body: available
// range: 0x480230-0x4802be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00480230(int *param_1,char param_2)

{
  int iVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;

  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00405fb0();
    cVar2 = extraout_DL;
  }
  FUN_0047f0e0(param_1,0);
  iVar1 = (**(code **)(*param_1 + 0x120))();
  iVar1 = (**(code **)(iVar1 + 0x90))(iVar1,1);
  param_1[0xab] = iVar1;
  *(int **)(iVar1 + 0x1c) = param_1;
  *(undefined1 *)((int)param_1 + 0x2e6) = 0;
  param_1[0xb7] = 0;
  *(undefined1 *)(param_1 + 0xb6) = 1;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  param_1[0xc1] = 500;
  FUN_00407eb8(param_1 + 0xc2,0);
  if (cVar2 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}
