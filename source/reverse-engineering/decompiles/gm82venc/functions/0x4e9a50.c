// rea decompile_all
// name: FUN_004e9a50
// address: 0x4e9a50
// body: available
// range: 0x4e9a50-0x4e9ca6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004e9a50(int param_1,char param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  HICON pHVar5;
  undefined2 *puVar6;
  LPWSTR lpsz;
  char extraout_DL;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 uVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_220;
  WCHAR local_206 [256];
  char local_5;

  local_5 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00406510();
    local_5 = extraout_DL;
  }
  FUN_00446094(param_1,0);
  if (*PTR_DAT_00688898 == '\0') {
    uVar2 = OleInitialize((LPVOID)0x0);
    *(bool *)(param_1 + 0x17c) = (uVar2 & 0x80000000) == 0;
  }
  puVar1 = PTR_DAT_00688f84;
  if (*(short *)(PTR_DAT_00688f84 + 2) == 0) {
    *(int *)(PTR_DAT_00688f84 + 4) = param_1;
    *(undefined1 **)puVar1 = &LAB_004ebb48;
  }
  puVar1 = PTR_DAT_006891dc;
  if (*(short *)(PTR_DAT_006891dc + 2) == 0) {
    *(int *)(PTR_DAT_006891dc + 4) = param_1;
    *(code **)puVar1 = FUN_004ebd58;
  }
  *(undefined1 *)(param_1 + 0x35) = 0;
  iVar3 = FUN_0045b5a4(&PTR_FUN_004550c0,1);
  *(int *)(param_1 + 0x3c) = iVar3;
  *(int *)(iVar3 + 0xc) = param_1;
  *(undefined1 **)(iVar3 + 8) = &LAB_004ec308;
  uVar4 = FUN_00405fac(&PTR_LAB_0042e000,1);
  *(undefined4 *)(param_1 + 0x90) = uVar4;
  uVar4 = FUN_00405fac(&PTR_LAB_0042e000,1);
  *(undefined4 *)(param_1 + 0xb0) = uVar4;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0xff000018;
  *(undefined4 *)(param_1 + 0x78) = 500;
  *(undefined1 *)(param_1 + 0x7c) = 1;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0x9c4;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0xa5) = 1;
  *(undefined1 *)(param_1 + 0xbc) = 1;
  uVar4 = FUN_00464e1c(&PTR_LAB_004597c0,1);
  *(undefined4 *)(param_1 + 0xa0) = uVar4;
  pHVar5 = LoadIconW(*(HINSTANCE *)PTR_DAT_00688ccc,L"MAINICON");
  FUN_004652b0(uVar4,pHVar5);
  iVar3 = *(int *)(param_1 + 0xa0);
  *(int *)(iVar3 + 0x14) = param_1;
  *(code **)(iVar3 + 0x10) = FUN_004ec5f0;
  uVar4 = FUN_00405fac(&PTR_LAB_0042e000,1);
  *(undefined4 *)(param_1 + 0x98) = uVar4;
  GetModuleFileNameW(*(HMODULE *)PTR_DAT_00688ccc,local_206,0x100);
  iVar3 = FUN_004179e8(local_206,CONCAT22(extraout_var,0x5c));
  uVar7 = extraout_var_00;
  if (iVar3 != 0) {
    FUN_00417680(local_206,iVar3 + 2);
    uVar7 = extraout_var_01;
  }
  puVar6 = (undefined2 *)thunk_FUN_004179d6(local_206,CONCAT22(uVar7,0x2e));
  if (puVar6 != (undefined2 *)0x0) {
    *puVar6 = 0;
  }
  lpsz = CharNextW(local_206);
  CharLowerW(lpsz);
  FUN_004083a4(param_1 + 0x8c,local_206,0x100);
  uVar4 = FUN_004df760();
  *(undefined4 *)(param_1 + 0x178) = uVar4;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  if (*PTR_DAT_00688898 == '\0') {
    FUN_004e9e1c(param_1);
  }
  *(undefined1 *)(param_1 + 0x59) = 1;
  *(undefined1 *)(param_1 + 0x5a) = 1;
  *(undefined1 *)(param_1 + 0x5b) = 1;
  *(undefined1 *)(param_1 + 0xa6) = 1;
  *(undefined1 *)(param_1 + 0xd1) = 0;
  *(undefined1 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined1 *)(param_1 + 0xd3) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  FUN_004ec81c(param_1);
  FUN_004ed450(param_1);
  if (local_5 != '\0') {
    FUN_00406568(param_1);
    *in_FS_OFFSET = uStack_220;
  }
  return param_1;
}
