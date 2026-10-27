// rea decompile_all
// name: FUN_0047f0e0
// address: 0x47f0e0
// body: available
// range: 0x47f0e0-0x47f1d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0047f0e0(int param_1,char param_2)

{
  undefined4 uVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;

  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00405fb0();
    cVar2 = extraout_DL;
  }
  FUN_004fde88(param_1,0);
  if (*PTR_DAT_00781e70 == '\0') {
    *(undefined4 *)(param_1 + 0x50) = 0x842b2;
  }
  else {
    *(undefined4 *)(param_1 + 0x50) = 0x842a2;
  }
  FUN_004edce0(param_1,0x91);
  FUN_004edd14(param_1,0x19);
  FUN_004f7984(param_1,1);
  FUN_004ee8ac(param_1,0);
  uVar1 = FUN_0045bf68(&PTR_FUN_004e0850,1);
  *(undefined4 *)(param_1 + 0x270) = uVar1;
  FUN_004ecd38(uVar1,param_1);
  *(undefined4 *)(param_1 + 0x2a8) = 0x10;
  uVar1 = FUN_0044a4ac();
  *(undefined4 *)(param_1 + 0x2cc) = uVar1;
  uVar1 = FUN_0044a4ac();
  *(undefined4 *)(param_1 + 0x2d0) = uVar1;
  *(undefined4 *)(param_1 + 0x278) = 8;
  *(undefined4 *)(param_1 + 0x280) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c8) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x27c) = 0;
  if (cVar2 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}
