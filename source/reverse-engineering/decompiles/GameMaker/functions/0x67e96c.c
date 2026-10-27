// rea decompile_all
// name: FUN_0067e96c
// address: 0x67e96c
// body: available
// range: 0x67e96c-0x67ea09 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0067e96c(int param_1,char param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;

  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00405fb0();
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  FUN_0043c888(param_1,0,param_3);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  uVar1 = FUN_0045f540(&PTR_LAB_00457450,1);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  *(undefined1 *)(param_1 + 0x38) = 1;
  *(undefined1 *)(param_1 + 0x20) = 0;
  uVar1 = FUN_0043f190(&PTR_FUN_00432364,1);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  FUN_0040b75c(PTR_PTR_00781d54,param_1 + 0x40);
  iVar2 = *(int *)(param_1 + 0x14);
  *(int *)(iVar2 + 0x34) = param_1;
  *(undefined1 **)(iVar2 + 0x30) = &LAB_0067ea0c;
  iVar2 = FUN_0043f190(&PTR_FUN_00432364,1);
  *(int *)(param_1 + 0x24) = iVar2;
  *(int *)(iVar2 + 0x34) = param_1;
  *(undefined1 **)(iVar2 + 0x30) = &LAB_0067ea0c;
  if (cVar3 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}
