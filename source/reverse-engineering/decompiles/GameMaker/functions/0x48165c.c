// rea decompile_all
// name: FUN_0048165c
// address: 0x48165c
// body: available
// range: 0x48165c-0x48175a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0048165c(int param_1,char param_2)

{
  int iVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;

  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00405fb0();
    cVar2 = extraout_DL;
  }
  FUN_0048134c(param_1,0);
  *(undefined4 *)(param_1 + 0x50) = 0xa0;
  FUN_004edce0(param_1,0x4b);
  FUN_004edd14(param_1,0x19);
  FUN_004f7984(param_1,1);
  iVar1 = FUN_00405a4c(&DAT_00505230,1);
  *(int *)(param_1 + 0x298) = iVar1;
  *(int *)(iVar1 + 0xc) = param_1;
  *(code **)(iVar1 + 8) = FUN_0048212c;
  iVar1 = FUN_00405a4c(&PTR_FUN_004761f4,1);
  *(int *)(param_1 + 0x2a0) = iVar1;
  *(int *)(iVar1 + 0x1c) = param_1;
  *(undefined1 **)(iVar1 + 0x18) = &LAB_00482148;
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  FUN_00407eb8(param_1 + 0x27c,0);
  *(undefined4 *)(param_1 + 0x284) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x28c) = 0;
  *(undefined4 *)(param_1 + 0x290) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x294) = 0;
  *(undefined4 *)(param_1 + 0x29c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2b0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2b4) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x2b8) = 0;
  if (cVar2 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}
