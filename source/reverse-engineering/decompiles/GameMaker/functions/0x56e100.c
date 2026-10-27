// rea decompile_all
// name: FUN_0056e100
// address: 0x56e100
// body: available
// range: 0x56e100-0x56e1c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056e100(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 *param_7,undefined1 *param_8)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;

  *param_8 = 0;
  *param_7 = 0xffffffff;
  uVar2 = *(uint *)(param_1 + 0x2b4);
  if ((*(byte *)(param_1 + 0x1c) & 0x10) != 0) {
    uVar2 = *(uint *)(param_1 + 0x31a) | uVar2;
  }
  if ((uVar2 & 0xc0) != 0) {
    uVar3 = FUN_004edfcc(param_1);
    *(undefined4 *)(param_4 + 0x3c) = uVar3;
    uVar3 = FUN_004edf8c(param_1);
    *(undefined4 *)(param_4 + 0xc) = uVar3;
    cVar1 = FUN_0056e068();
    if ((cVar1 == '\0') || ((uVar2 & 0x80) == 0)) {
      if ((*(int *)(param_4 + 0x34) < param_3) && ((uVar2 & 0x40) != 0)) {
        cVar1 = FUN_0056e0b4();
        if (cVar1 == '\0') {
          FUN_0056df50(param_4 + 0x30,param_3,2,&stack0xfffffffc);
        }
      }
    }
    else if (param_3 < *(int *)(param_4 + 0x34)) {
      FUN_0056df50(param_4,param_2,3,&stack0xfffffffc);
    }
  }
  return;
}
