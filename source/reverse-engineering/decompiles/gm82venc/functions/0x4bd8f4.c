// rea decompile_all
// name: FUN_004bd8f4
// address: 0x4bd8f4
// body: available
// range: 0x4bd8f4-0x4bd96f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bd8f4(int *param_1,int param_2)

{
  char cVar1;
  short sStack_28;
  short sStack_26;
  int iStack_24;
  int iStack_20;
  undefined1 auStack_1c [16];

  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  if ((*(byte *)(param_1 + 0x14) & 2) != 0) {
    FUN_004bb8d8(param_1,0);
  }
  if ((*(byte *)(param_1 + 0x15) & 2) != 0) {
    param_1[0x15] = param_1[0x15] & 0xfffffffd;
    sStack_28 = (short)*(undefined4 *)(param_2 + 8);
    iStack_24 = (int)sStack_28;
    sStack_26 = (short)((uint)*(undefined4 *)(param_2 + 8) >> 0x10);
    iStack_20 = (int)sStack_26;
    (**(code **)(*param_1 + 0x54))(param_1,auStack_1c);
    cVar1 = FUN_0040c39c(auStack_1c,&iStack_24);
    if (cVar1 != '\0') {
      FUN_00406268(param_1);
    }
  }
  FUN_004bd8b0(param_1,param_2,0);
  return;
}
