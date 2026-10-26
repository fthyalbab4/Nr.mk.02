// rea decompile_all
// name: FUN_0047e940
// address: 0x47e940
// body: available
// range: 0x47e940-0x47e9e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0047e940(int *param_1,char param_2)

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
  FUN_0047d724(param_1,0);
  FUN_004edce0(param_1,0xb9);
  FUN_004edd14(param_1,0x59);
  (**(code **)(*param_1 + 0x6c))(param_1,0);
  *(undefined1 *)((int)param_1 + 0x2a5) = 1;
  *(undefined1 *)((int)param_1 + 0x2a6) = 1;
  iVar1 = FUN_00405a4c(&PTR_FUN_0047c040,1);
  param_1[0xa8] = iVar1;
  *(int **)(iVar1 + 0x1c) = param_1;
  (**(code **)(*param_1 + 0xd8))(param_1,0);
  iVar1 = param_1[0x2b];
  *(undefined1 *)(iVar1 + 0x10) = 0x12;
  *(undefined1 *)(iVar1 + 0x11) = 0x1e;
  if (cVar2 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}
