// rea decompile_all
// name: FUN_00527e08
// address: 0x527e08
// body: available
// range: 0x527e08-0x527ea5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00527e08(int param_1,char param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;

  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00406510();
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00524bbc(param_1,0,param_3);
  uVar1 = FUN_00524d00(&PTR_FUN_0051b388,1,param_3);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = FUN_005258ec(&PTR_FUN_005257c8,1,param_1);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined1 *)(param_1 + 0x24) = 0x2c;
  *(undefined2 *)(param_1 + 0x25) = 0;
  *(undefined2 *)(param_1 + 0x27) = 0;
  *(undefined2 *)(param_1 + 0x29) = 0;
  *(undefined2 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (cVar2 != '\0') {
    FUN_00406568(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}
