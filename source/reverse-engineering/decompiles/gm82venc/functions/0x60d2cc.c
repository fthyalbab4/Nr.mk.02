// rea decompile_all
// name: FUN_0060d2cc
// address: 0x60d2cc
// body: available
// range: 0x60d2cc-0x60d4de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0060d2cc(int param_1,char param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;

  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00406510();
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  FUN_0060cfb4(param_1,param_4);
  *(undefined4 *)(param_1 + 0x50) = param_7;
  *(undefined4 *)(param_1 + 0x54) = param_8;
  *(undefined4 *)(param_1 + 0x58) = param_5;
  *(undefined4 *)(param_1 + 0x5c) = param_6;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x40) = 0xffffff;
  *(undefined4 *)(param_1 + 0x60) = param_7;
  *(undefined4 *)(param_1 + 100) = param_8;
  *(undefined4 *)(param_1 + 0x68) = param_5;
  *(undefined4 *)(param_1 + 0x6c) = param_6;
  *(undefined4 *)(param_1 + 0x70) = param_7;
  *(undefined4 *)(param_1 + 0x74) = param_8;
  *(undefined4 *)(param_1 + 0x78) = param_5;
  *(undefined4 *)(param_1 + 0x7c) = param_6;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0x4070e000;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  iVar1 = 0;
  do {
    *(undefined4 *)(param_1 + 0xd4 + iVar1 * 4) = 0xffffffff;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0xc);
  uVar2 = FUN_0056d9f4(&DAT_0056d730,1);
  *(undefined4 *)(param_1 + 0x104) = uVar2;
  FUN_0060c7c8(param_1);
  *(undefined1 *)(param_1 + 0x108) = 0;
  *(undefined1 *)(param_1 + 0x109) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0x3ff00000;
  *(undefined1 *)(param_1 + 0x168) = 0;
  *(undefined1 *)(param_1 + 0x169) = 0;
  FUN_00408194(param_1 + 0x16c,0);
  if (cVar3 != '\0') {
    FUN_00406568(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}
