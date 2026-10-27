// rea decompile_all
// name: FUN_0047b3c8
// address: 0x47b3c8
// body: available
// range: 0x47b3c8-0x47b4c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0047b3c8(int param_1,char param_2)

{
  int iVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;

  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00406510();
    cVar2 = extraout_DL;
  }
  FUN_0047b0d8(param_1,0);
  *(undefined4 *)(param_1 + 0x50) = 0xa0;
  FUN_004bac98(param_1,0x4b);
  FUN_004baccc(param_1,0x19);
  FUN_004c48b8(param_1,1);
  iVar1 = FUN_00405fac(&DAT_004d20ac,1);
  *(int *)(param_1 + 0x298) = iVar1;
  *(int *)(iVar1 + 0xc) = param_1;
  *(code **)(iVar1 + 8) = FUN_0047be98;
  iVar1 = FUN_00405fac(&PTR_FUN_00474214,1);
  *(int *)(param_1 + 0x2a0) = iVar1;
  *(int *)(iVar1 + 0x1c) = param_1;
  *(undefined1 **)(iVar1 + 0x18) = &LAB_0047beb4;
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  FUN_00408194(param_1 + 0x27c,0);
  *(undefined4 *)(param_1 + 0x284) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x28c) = 0;
  *(undefined4 *)(param_1 + 0x290) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x294) = 0;
  *(undefined4 *)(param_1 + 0x29c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2b0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2b4) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x2b8) = 0;
  if (cVar2 != '\0') {
    FUN_00406568(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}
