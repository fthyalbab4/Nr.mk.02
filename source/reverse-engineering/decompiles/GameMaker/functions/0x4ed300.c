// rea decompile_all
// name: FUN_004ed300
// address: 0x4ed300
// body: available
// range: 0x4ed300-0x4ed437 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_004ed300(int *param_1,char param_2)

{
  int iVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;

  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00405fb0();
    cVar2 = extraout_DL;
  }
  FUN_00448e88(param_1,0);
  param_1[0xf] = (int)param_1;
  param_1[0xe] = *(int *)(*param_1 + 0x84);
  param_1[0x14] = 0x2000aa;
  iVar1 = FUN_0045aee4(&PTR_FUN_00454a00,1);
  param_1[0x19] = iVar1;
  *(int **)(iVar1 + 0xc) = param_1;
  *(code **)(iVar1 + 8) = FUN_004ee758;
  *(undefined1 *)((int)param_1 + 99) = 3;
  iVar1 = FUN_004ecd7c(&PTR_LAB_004e12ec,1,param_1);
  param_1[0x1c] = iVar1;
  *(int **)(iVar1 + 0x1c) = param_1;
  *(undefined1 **)(iVar1 + 0x18) = &LAB_004ef950;
  iVar1 = FUN_004fe0b8(&PTR_LAB_004e1554,1,param_1);
  param_1[0x1d] = iVar1;
  *(int **)(iVar1 + 0x1c) = param_1;
  *(undefined1 **)(iVar1 + 0x18) = &LAB_004f18b4;
  param_1[0x1b] = -0xfffffb;
  *(undefined1 *)((int)param_1 + 0x59) = 1;
  *(undefined1 *)((int)param_1 + 0x5a) = 1;
  *(undefined1 *)((int)param_1 + 0x5b) = 1;
  *(undefined1 *)(param_1 + 0x17) = 1;
  *(undefined1 *)((int)param_1 + 0x8a) = 1;
  *(undefined1 *)((int)param_1 + 0x62) = 1;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((int)param_1 + 0x7a) = 0xfff4;
  param_1[0x2a] = (int)&PTR_LAB_0050ff10;
  *(undefined1 *)(param_1 + 0x58) = 1;
  param_1[0x5d] = 0;
  param_1[0x5b] = 0;
  *(undefined1 *)(param_1 + 0x5c) = 1;
  (**(code **)(*param_1 + 0x40))();
  iVar1 = param_1[0x2b];
  *(undefined1 *)(iVar1 + 0x10) = 0x10;
  *(undefined1 *)(iVar1 + 0x11) = 0x10;
  *(undefined1 *)(iVar1 + 0x18) = 1;
  *(undefined2 *)(iVar1 + 0x1e) = 1;
  if (cVar2 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}
