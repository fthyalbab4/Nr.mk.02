// rea decompile_all
// name: FUN_006b1368
// address: 0x6b1368
// body: available
// range: 0x6b1368-0x6b171f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b1368(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;
  int iVar2;
  undefined1 *puVar3;
  code *pcVar4;
  int iVar5;

  uVar1 = FUN_004dee2c(&PTR_FUN_004d7824,1,param_2);
  *(undefined4 *)(param_1 + 0x29c) = uVar1;
  FUN_004de0a0(uVar1,*(undefined4 *)(*(int *)PTR_DAT_00781eb8 + 0x38c));
  iVar2 = *(int *)(param_1 + 0x29c);
  *(int *)(iVar2 + 0x7c) = param_1;
  *(undefined1 **)(iVar2 + 0x78) = &LAB_006b19c0;
  pcVar4 = FUN_006b1af4;
  iVar5 = param_1;
  uVar1 = FUN_004d7f94(CONCAT22((short)((uint)iVar2 >> 0x10),0x5a),4);
  uVar1 = FUN_006b12c4(param_1,L"Undo",4,uVar1,pcVar4,iVar5);
  *(undefined4 *)(param_1 + 700) = uVar1;
  pcVar4 = FUN_006b1afc;
  iVar2 = param_1;
  uVar1 = FUN_004d7f94(0x5a,5);
  uVar1 = FUN_006b12c4(param_1,L"Redo",0x3c,uVar1,pcVar4,iVar2);
  *(undefined4 *)(param_1 + 0x2c0) = uVar1;
  FUN_006b12c4(param_1,&DAT_006b1764,0xffffffff,0,0,0);
  pcVar4 = FUN_006b1bf8;
  iVar2 = param_1;
  uVar1 = FUN_004d7f94(CONCAT22(extraout_var,0x58),4);
  uVar1 = FUN_006b12c4(param_1,&DAT_006b1774,5,uVar1,pcVar4,iVar2);
  *(undefined4 *)(param_1 + 0x2a0) = uVar1;
  pcVar4 = FUN_006b1c00;
  iVar2 = param_1;
  uVar1 = FUN_004d7f94(0x43,4);
  uVar1 = FUN_006b12c4(param_1,L"Copy",6,uVar1,pcVar4,iVar2);
  *(undefined4 *)(param_1 + 0x2a4) = uVar1;
  pcVar4 = FUN_006b1c08;
  iVar2 = param_1;
  uVar1 = FUN_004d7f94(0x56,4);
  uVar1 = FUN_006b12c4(param_1,L"Paste",7,uVar1,pcVar4,iVar2);
  *(undefined4 *)(param_1 + 0x2a8) = uVar1;
  pcVar4 = FUN_006b1c10;
  iVar2 = param_1;
  uVar1 = FUN_004d7f94(0x44,4);
  uVar1 = FUN_006b12c4(param_1,L"Delete",0x41,uVar1,pcVar4,iVar2);
  *(undefined4 *)(param_1 + 0x2ac) = uVar1;
  pcVar4 = FUN_006b1c88;
  iVar2 = param_1;
  uVar1 = FUN_004d7f94(0x41,4);
  FUN_006b12c4(param_1,L"Select All",0xffffffff,uVar1,pcVar4,iVar2);
  FUN_006b12c4(param_1,&DAT_006b1764,0xffffffff,0,0,0);
  pcVar4 = FUN_006b1cf0;
  iVar2 = param_1;
  uVar1 = FUN_004d7f94(CONCAT22(extraout_var_00,0x49),4);
  FUN_006b12c4(param_1,L"Indent Selected Lines",0x61,uVar1,pcVar4,iVar2);
  pcVar4 = FUN_006b1e50;
  iVar2 = param_1;
  uVar1 = FUN_004d7f94(CONCAT22(extraout_var_01,0x49),5);
  FUN_006b12c4(param_1,L"Unindent Selected Lines",0x60,uVar1,pcVar4,iVar2);
  FUN_006b12c4(param_1,&DAT_006b1764,0xffffffff,0,0,0);
  puVar3 = &LAB_006b1b04;
  iVar2 = param_1;
  uVar1 = FUN_004d7f94(CONCAT22(extraout_var_02,0x71),0);
  uVar1 = FUN_006b12c4(param_1,L"Code Snippets",0xffffffff,uVar1,puVar3,iVar2);
  *(undefined4 *)(param_1 + 0x2c8) = uVar1;
  FUN_006b12c4(param_1,&DAT_006b1764,0xffffffff,0,0,0);
  pcVar4 = FUN_006b1bd4;
  iVar2 = param_1;
  uVar1 = FUN_004d7f94(CONCAT22(extraout_var_03,0x76),0);
  FUN_006b12c4(param_1,L"Decrease Font Size",0xffffffff,uVar1,pcVar4,iVar2);
  pcVar4 = FUN_006b1bb0;
  iVar2 = param_1;
  uVar1 = FUN_004d7f94(CONCAT22(extraout_var_04,0x77),0);
  FUN_006b12c4(param_1,L"Increase Font Size",0xffffffff,uVar1,pcVar4,iVar2);
  FUN_006b12c4(param_1,&DAT_006b1764,0xffffffff,0,0,0);
  pcVar4 = FUN_006b1b0c;
  iVar2 = param_1;
  uVar1 = FUN_004d7f94(CONCAT22(extraout_var_05,0x78),0);
  uVar1 = FUN_006b12c4(param_1,L"Show Line Numbers",0xffffffff,uVar1,pcVar4,iVar2);
  *(undefined4 *)(param_1 + 0x2b0) = uVar1;
  FUN_004dbce0(uVar1,*PTR_DAT_007823a4);
  pcVar4 = FUN_006b1b48;
  iVar2 = param_1;
  uVar1 = FUN_004d7f94(CONCAT22(extraout_var_06,0x79),0);
  uVar1 = FUN_006b12c4(param_1,L"Use Color Coding",0xffffffff,uVar1,pcVar4,iVar2);
  *(undefined4 *)(param_1 + 0x2b4) = uVar1;
  FUN_004dbce0(uVar1,*PTR_DAT_00782878);
  pcVar4 = FUN_006b1b84;
  iVar2 = param_1;
  uVar1 = FUN_004d7f94(CONCAT22(extraout_var_07,0x7a),0);
  uVar1 = FUN_006b12c4(param_1,L"Show Completion Options",0xffffffff,uVar1,pcVar4,iVar2);
  *(undefined4 *)(param_1 + 0x2b8) = uVar1;
  FUN_004dbce0(uVar1,*PTR_DAT_0078219c);
  FUN_006b12c4(param_1,&DAT_006b1764,0xffffffff,0,0,0);
  pcVar4 = FUN_006b2000;
  iVar2 = param_1;
  uVar1 = FUN_004d7f94(CONCAT22(extraout_var_08,0x7b),0);
  uVar1 = FUN_006b12c4(param_1,L"Show Resource...",0xffffffff,uVar1,pcVar4,iVar2);
  *(undefined4 *)(param_1 + 0x2c4) = uVar1;
  FUN_004ee67c(param_1,*(undefined4 *)(param_1 + 0x29c));
  return;
}
