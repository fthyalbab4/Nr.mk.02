// rea decompile_all
// name: FUN_0065a890
// address: 0x65a890
// body: available
// range: 0x65a890-0x65aa04 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0065a890(int param_1,char param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  char extraout_DL;
  char cVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;

  cVar4 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00405fb0();
    cVar4 = extraout_DL;
  }
  puVar2 = PTR_DAT_00782280;
  FUN_00448e88(param_1,0);
  uVar3 = FUN_0044d8dc(&PTR_LAB_0044d2a4,1,0);
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  iVar1 = *(int *)puVar2;
  *(int *)(iVar1 + 0xe4) = param_1;
  *(undefined1 **)(iVar1 + 0xe0) = &LAB_0065ab44;
  iVar1 = *(int *)puVar2;
  *(int *)(iVar1 + 0xec) = param_1;
  *(undefined1 **)(iVar1 + 0xe8) = &LAB_0065abc0;
  iVar1 = *(int *)puVar2;
  *(int *)(iVar1 + 0x144) = param_1;
  *(undefined1 **)(iVar1 + 0x140) = &LAB_0065ac3c;
  iVar1 = *(int *)puVar2;
  *(int *)(iVar1 + 0x13c) = param_1;
  *(code **)(iVar1 + 0x138) = FUN_0065acb0;
  iVar1 = *(int *)puVar2;
  *(int *)(iVar1 + 0xf4) = param_1;
  *(code **)(iVar1 + 0xf0) = FUN_0065ad24;
  iVar1 = *(int *)puVar2;
  *(int *)(iVar1 + 0x124) = param_1;
  *(undefined1 **)(iVar1 + 0x120) = &LAB_0065ade0;
  iVar1 = *(int *)puVar2;
  *(int *)(iVar1 + 300) = param_1;
  *(undefined1 **)(iVar1 + 0x128) = &LAB_0065ae80;
  iVar1 = *(int *)puVar2;
  *(int *)(iVar1 + 0x134) = param_1;
  *(code **)(iVar1 + 0x130) = FUN_0065aef4;
  iVar1 = *(int *)puVar2;
  *(int *)(iVar1 + 0x10c) = param_1;
  *(undefined1 **)(iVar1 + 0x108) = &LAB_0065af70;
  iVar1 = *(int *)puVar2;
  *(int *)(iVar1 + 0x14c) = param_1;
  *(undefined1 **)(iVar1 + 0x148) = &LAB_0065afec;
  iVar1 = *(int *)puVar2;
  *(int *)(iVar1 + 0x154) = param_1;
  *(code **)(iVar1 + 0x150) = FUN_0065b060;
  iVar1 = *(int *)puVar2;
  *(int *)(iVar1 + 0x164) = param_1;
  *(undefined1 **)(iVar1 + 0x160) = &LAB_0065b150;
  iVar1 = *(int *)puVar2;
  *(int *)(iVar1 + 0x15c) = param_1;
  *(code **)(iVar1 + 0x158) = FUN_0065b0d4;
  iVar1 = *(int *)puVar2;
  *(int *)(iVar1 + 0x16c) = param_1;
  *(code **)(iVar1 + 0x168) = FUN_0065b1d0;
  iVar1 = *(int *)puVar2;
  *(int *)(iVar1 + 0x114) = param_1;
  *(code **)(iVar1 + 0x110) = FUN_0065b2c4;
  iVar1 = *(int *)puVar2;
  *(int *)(iVar1 + 0x11c) = param_1;
  *(code **)(iVar1 + 0x118) = FUN_0065b338;
  if (cVar4 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}
