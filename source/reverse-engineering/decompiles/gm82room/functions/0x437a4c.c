// rea decompile_all
// name: FUN_00437a4c
// address: 0x437a4c
// body: available
// range: 0x437a4c-0x437abc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00437a4c(int param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;

  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00406510();
    cVar3 = extraout_DL;
  }
  FUN_00405fac(param_1,0);
  uVar1 = FUN_00405fac(&PTR_LAB_0042e000,1);
  *(undefined4 *)(param_1 + 4) = uVar1;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  iVar2 = FUN_0043754c(&DAT_00436b8c,1,&PTR_FUN_0042eb04);
  FUN_00438d04(*(undefined4 *)(param_1 + 4),iVar2);
  *(undefined1 *)(iVar2 + 0x10) = 1;
  if (cVar3 != '\0') {
    FUN_00406568(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}
