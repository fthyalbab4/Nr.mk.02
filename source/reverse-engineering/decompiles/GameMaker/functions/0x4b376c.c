// rea decompile_all
// name: FUN_004b376c
// address: 0x4b376c
// body: available
// range: 0x4b376c-0x4b3828 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004b376c(int param_1,char param_2,undefined4 param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_004a890c(0x20);
  *(undefined1 *)(param_1 + 0x270) = uVar1;
  FUN_004f1a14(param_1,0,param_3);
  FUN_004edce0(param_1,0x96);
  iVar2 = GetSystemMetrics(0x14);
  FUN_004edd14(param_1,iVar2);
  *(undefined4 *)(param_1 + 0x274) = 0;
  *(undefined4 *)(param_1 + 0x278) = 100;
  *(undefined4 *)(param_1 + 0x284) = 10;
  *(undefined1 *)(param_1 + 0x288) = 0;
  *(undefined4 *)(param_1 + 0x294) = 0x20000000;
  *(undefined4 *)(param_1 + 0x298) = 0x20000000;
  *(undefined4 *)(param_1 + 0x28c) = 10;
  *(undefined1 *)(param_1 + 0x28a) = 0;
  *(undefined1 *)(param_1 + 0x29c) = 0;
  *(undefined1 *)(param_1 + 0x290) = 0;
  if (cVar3 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}
