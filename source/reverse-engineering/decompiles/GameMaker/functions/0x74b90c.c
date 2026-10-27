// rea decompile_all
// name: FUN_0074b90c
// address: 0x74b90c
// body: available
// range: 0x74b90c-0x74b9c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0074b90c(int param_1,char param_2,undefined4 param_3,undefined1 param_4,undefined2 param_5,
                undefined2 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;

  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00405fb0();
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00405a4c(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_3;
  FUN_00407eb8(param_1 + 0x18,param_9);
  FUN_00407eb8(param_1 + 0xc,param_8);
  *(undefined4 *)(param_1 + 4) = param_7;
  *(undefined2 *)(param_1 + 0x14) = param_6;
  *(undefined2 *)(param_1 + 0x1c) = param_5;
  *(undefined1 *)(param_1 + 0x1e) = param_4;
  iVar1 = FUN_0041db58(&DAT_0074b9d0,*(undefined4 *)(param_1 + 0xc));
  if (iVar1 < 1) {
    FUN_00407eb8(param_1 + 0x10,0);
  }
  else {
    iVar3 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0xc) + -4);
    }
    FUN_004086a8(*(undefined4 *)(param_1 + 0xc),iVar1 + 1,iVar3 - iVar1,param_1 + 0x10);
  }
  if (cVar2 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_24;
  }
  return param_1;
}
