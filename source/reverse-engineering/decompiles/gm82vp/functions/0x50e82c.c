// rea decompile_all
// name: FUN_0050e82c
// address: 0x50e82c
// body: available
// range: 0x50e82c-0x50e914 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0050e82c(int param_1,char param_2)

{
  byte bVar1;
  char extraout_DL;
  char cVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;

  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00406510();
    cVar2 = extraout_DL;
  }
  FUN_004c7138(param_1,0);
  *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 0x40;
  FUN_0050e994(param_1);
  *(undefined2 *)(param_1 + 0x308) = 0x1ff;
  *(undefined2 *)(param_1 + 0x30a) = 0x1ff;
  *(undefined2 *)(param_1 + 0x30c) = 0x1ff;
  bVar1 = 0;
  do {
    uVar3 = (uint)bVar1;
    *(undefined1 *)(param_1 + 0x278 + uVar3 * 0x10) = 1;
    *(undefined1 *)(param_1 + 0x279 + uVar3 * 0x10) = 1;
    *(undefined1 *)(param_1 + 0x27a + uVar3 * 0x10) = 1;
    *(undefined1 *)(param_1 + 0x27b + uVar3 * 0x10) = 0;
    bVar1 = bVar1 + 1;
  } while (bVar1 != 9);
  FUN_004bac98(param_1,0xf0);
  FUN_004baccc(param_1,0x1e);
  *(undefined1 *)(param_1 + 0x348) = 0;
  *(undefined1 *)(param_1 + 900) = 1;
  *(undefined1 *)(param_1 + 0x385) = 0;
  *(undefined1 *)(param_1 + 0x386) = 1;
  *(undefined1 *)(param_1 + 0x35c) = 0;
  FUN_004c48b8(param_1,1);
  if (cVar2 != '\0') {
    FUN_00406568(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}
