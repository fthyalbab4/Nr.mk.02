// rea decompile_all
// name: FUN_006655a4
// address: 0x6655a4
// body: available
// range: 0x6655a4-0x665645 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_006655a4(int param_1,char param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 local_14 [16];

  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00405fb0();
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  FUN_00678020(param_1,0,param_3);
  *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) & 0xfffffffd;
  FUN_0040c114(2,0,10,local_14,0);
  FUN_00679840(param_1,local_14);
  FUN_00679898(param_1,10);
  cVar1 = FUN_00405c98(param_3,&PTR_LAB_0065e290);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 500) = param_3;
  }
  iVar2 = GetSystemMetrics(0xf);
  *(int *)(param_1 + 0x20c) = iVar2;
  if (cVar3 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_30;
  }
  return param_1;
}
