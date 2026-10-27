// rea decompile_all
// name: FUN_0056f2b8
// address: 0x56f2b8
// body: available
// range: 0x56f2b8-0x56f2d7 inclusive
// range: 0x56f2f8-0x56f3ee inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0056f2b8(int param_1,int param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  switch(*(undefined4 *)(param_4 + -0x74)) {
  case 0:
    param_1 = param_1 - param_2;
    break;
  case 1:
    param_1 = param_1 + param_2;
    break;
  case 2:
    iVar2 = FUN_0056f204();
    param_1 = param_1 - iVar2 * param_2;
    break;
  case 3:
    iVar2 = FUN_0056f264();
    param_1 = param_1 + iVar2 * param_2;
    break;
  case 4:
  case 5:
    if (((*(byte *)(*(int *)(param_4 + -8) + 0x2b5) & 0x40) != 0) ||
       (*(int *)(param_4 + -0x74) == 4)) {
      cVar1 = FUN_00405d08(*(undefined4 *)(param_4 + -8));
      if ((cVar1 == '\0') || (param_2 == 1)) {
        iVar4 = 0x7f;
        iVar2 = FUN_0056f1e8();
        iVar3 = FUN_0056f1c0();
        param_1 = MulDiv(*(int *)(param_4 + 0xc),iVar2 - iVar3,iVar4);
        iVar2 = FUN_0056f1c0();
        param_1 = param_1 + iVar2;
      }
      else {
        iVar4 = 0x7f;
        iVar2 = FUN_0056f1e8();
        iVar3 = FUN_0056f1c0();
        iVar2 = MulDiv(*(int *)(param_4 + 0xc),iVar2 - iVar3,iVar4);
        param_1 = FUN_0056f1e8();
        param_1 = param_1 - iVar2;
      }
    }
    break;
  case 6:
    param_1 = FUN_0056f1c0();
    break;
  case 7:
    param_1 = FUN_0056f1e8();
  }
  return param_1;
}
