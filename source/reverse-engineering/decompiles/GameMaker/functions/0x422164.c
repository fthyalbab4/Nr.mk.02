// rea decompile_all
// name: FUN_00422164
// address: 0x422164
// body: available
// range: 0x422164-0x4221de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00422164(int param_1,char param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  BOOL BVar1;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  _cpinfo local_18;

  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00405fb0();
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 0x10) = param_5;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  BVar1 = GetCPInfo(*(UINT *)(param_1 + 0xc),&local_18);
  if (BVar1 == 0) {
    FUN_0041bfec(&PTR_LAB_00414218,1,PTR_PTR_00782368);
    FUN_00406618();
  }
  *(UINT *)(param_1 + 8) = local_18.MaxCharSize;
  *(bool *)(param_1 + 4) = local_18.MaxCharSize == 1;
  if (cVar2 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_30;
  }
  return param_1;
}
