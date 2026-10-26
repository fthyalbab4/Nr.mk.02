// rea decompile_all
// name: FUN_004830f0
// address: 0x4830f0
// body: available
// range: 0x4830f0-0x4831e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004830f0(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;

  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00405fb0();
    cVar3 = extraout_DL;
  }
  FUN_004fde88(param_1,0);
  if (*PTR_DAT_00781e70 == '\0') {
    *(undefined4 *)(param_1 + 0x50) = 0x2800f0;
  }
  else {
    *(undefined4 *)(param_1 + 0x50) = 0x2800e0;
  }
  FUN_004edce0(param_1,0x79);
  FUN_004edd14(param_1,0x61);
  FUN_004f7984(param_1,1);
  FUN_004ee8ac(param_1,0);
  *(undefined1 *)(param_1 + 0x278) = 1;
  iVar1 = FUN_00405a4c(&PTR_FUN_0047c3e0,1);
  *(int *)(param_1 + 0x280) = iVar1;
  *(int *)(iVar1 + 0x1c) = param_1;
  uVar2 = FUN_0045bf68(&PTR_FUN_004e0850,1);
  *(undefined4 *)(param_1 + 0x290) = uVar2;
  FUN_004ecd38(uVar2,param_1);
  *(undefined4 *)(param_1 + 0x298) = 0x10;
  *(undefined1 *)(param_1 + 0x28c) = 1;
  *(undefined1 *)(param_1 + 0x2a3) = 1;
  *(undefined4 *)(param_1 + 0x29c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2e0) = 500;
  *(undefined1 *)(param_1 + 0x2e4) = 0;
  if (cVar3 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}
