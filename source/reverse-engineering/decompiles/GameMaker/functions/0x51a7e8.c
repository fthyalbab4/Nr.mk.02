// rea decompile_all
// name: FUN_0051a7e8
// address: 0x51a7e8
// body: available
// range: 0x51a7e8-0x51a888 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051a7e8(int *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iStack_c;

  if ((*(byte *)(param_1 + 0xe1) & 8) == 0) {
    iStack_c = param_3;
    cVar1 = (**(code **)(*param_1 + 0x108))();
    if (cVar1 != '\0') {
      if (*(char *)((int)param_1 + 0x29e) == '\x01') {
        if ((*(byte *)(param_1 + 0xa6) & 2) == 0) {
          iStack_c = (uint)iStack_c._1_3_ << 8;
        }
        else {
          iStack_c = CONCAT31(iStack_c._1_3_,3);
        }
      }
      else {
        iStack_c = CONCAT31(iStack_c._1_3_,1);
      }
      FUN_00405d08(param_1,&iStack_c);
      if ((char)iStack_c != '\0') {
        if (param_1 == *(int **)(DAT_007882ec + 0x44)) {
          FUN_0051fac0(DAT_007882ec);
        }
        else if ((char)iStack_c == '\x01') {
          FUN_0051acd0(param_1);
        }
        else if ((char)iStack_c == '\x03') {
          FUN_005178c8(param_1,1);
        }
        else {
          FUN_0051adac(param_1);
        }
      }
    }
  }
  else {
    param_1[0xae] = 2;
  }
  return;
}
