// rea decompile_all
// name: FUN_005c5ba0
// address: 0x5c5ba0
// body: available
// range: 0x5c5ba0-0x5c5c05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005c5ba0(int param_1,char param_2,int param_3)

{
  int extraout_ECX;
  char extraout_DL;
  char cVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;

  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00405fb0();
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  do {
    iVar2 = param_3;
    param_3 = *(int *)(iVar2 + 0x24);
  } while (*(int *)(iVar2 + 0x24) != 0);
  uVar3 = *(undefined4 *)(iVar2 + 0x1c);
  FUN_005c5adc(param_1,0,*(undefined4 *)(iVar2 + 0x20),uVar3,*(undefined4 *)(iVar2 + 0x28));
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(int *)(param_1 + 0x24) = iVar2;
  FUN_005c7b84(iVar2,param_1);
  if (cVar1 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uVar3;
  }
  return param_1;
}
