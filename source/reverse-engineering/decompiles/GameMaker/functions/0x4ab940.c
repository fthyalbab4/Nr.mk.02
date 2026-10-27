// rea decompile_all
// name: FUN_004ab940
// address: 0x4ab940
// body: available
// range: 0x4ab940-0x4ab9f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_004ab940(int *param_1,char param_2)

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
  FUN_004f1a14(param_1,0);
  param_1[0x14] = 0x2000ca;
  FUN_004ee858(param_1,0xff00000f);
  FUN_004edd14(param_1,0x13);
  FUN_004ed948(param_1,2);
  iVar1 = (**(code **)(*param_1 + 0xf0))();
  param_1[0x9c] = iVar1;
  iVar1 = FUN_0045bf68(&PTR_FUN_004e0850,1);
  param_1[0x9d] = iVar1;
  FUN_004ecd38(iVar1,param_1);
  *(undefined1 *)((int)param_1 + 0x27d) = 1;
  FUN_004ee7d4(param_1,0);
  *(undefined1 *)((int)param_1 + 0x27f) = 1;
  FUN_004abf34(param_1);
  if (cVar2 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}
