// rea decompile_all
// name: FUN_00562764
// address: 0x562764
// body: available
// range: 0x562764-0x5627e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00562764(int param_1,char param_2)

{
  int iVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;

  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00405fb0();
    cVar2 = extraout_DL;
  }
  FUN_00409be0(param_1 + 0x30,&DAT_005621bc,1,0);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  iVar1 = FUN_00506834(&PTR_FUN_004e8384,1,0);
  *(int *)(param_1 + 0x38) = iVar1;
  *(undefined4 *)(iVar1 + 0x3c) = 0x10;
  FUN_00506b18(iVar1,0x18);
  FUN_00506b54(*(undefined4 *)(param_1 + 0x38),0x18);
  FUN_005627ec(param_1);
  if (cVar2 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}
