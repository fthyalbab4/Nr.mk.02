// rea decompile_all
// name: FUN_005684b8
// address: 0x5684b8
// body: available
// range: 0x5684b8-0x5684e2 inclusive
// range: 0x5684ff-0x568719 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005684b8(int param_1,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int local_c;

  bVar1 = false;
  switch(param_2) {
  case 1:
    iVar2 = *(int *)(param_1 + 0x24);
    FUN_005683d4(param_1 + 0x1c,param_1 + 0x20,param_1 + 0x24,param_3);
    FUN_00404514(param_4,*(int *)(param_1 + 0x1c) + iVar2 * 0x24,param_3 * 0x24);
    break;
  case 2:
    iVar2 = *(int *)(param_1 + 0x18);
    FUN_005683d4(param_1 + 0x10,param_1 + 0x14,param_1 + 0x18,param_3);
    FUN_00404514(param_4,*(int *)(param_1 + 0x10) + iVar2 * 0x24,param_3 * 0x24);
    break;
  case 3:
    iVar2 = *(int *)(param_1 + 0x18);
    FUN_005683d4(param_1 + 0x10,param_1 + 0x14,param_1 + 0x18,(param_3 + -1) * 2);
    iVar2 = *(int *)(param_1 + 0x10) + iVar2 * 0x24;
    param_3 = param_3 + -1;
    if (0 < param_3) {
      do {
        FUN_00404514(param_4,iVar2,0x48);
        iVar2 = iVar2 + 0x48;
        param_4 = param_4 + 0x24;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    break;
  case 4:
    iVar2 = *(int *)(param_1 + 0xc);
    FUN_005683d4(param_1 + 4,param_1 + 8,param_1 + 0xc,param_3);
    FUN_00404514(param_4,*(int *)(param_1 + 4) + iVar2 * 0x24,param_3 * 0x24);
    break;
  case 5:
    iVar2 = *(int *)(param_1 + 0xc);
    FUN_005683d4(param_1 + 4,param_1 + 8,param_1 + 0xc,(param_3 + -2) * 3);
    iVar2 = *(int *)(param_1 + 4) + iVar2 * 0x24;
    param_3 = param_3 + -2;
    if (0 < param_3) {
      do {
        if (bVar1) {
          FUN_00404514(param_4 + 0x48,iVar2,0x24);
          FUN_00404514(param_4 + 0x24,iVar2 + 0x24,0x24);
          FUN_00404514(param_4,iVar2 + 0x48,0x24);
        }
        else {
          FUN_00404514(param_4,iVar2,0x6c);
        }
        bVar1 = (bool)(bVar1 ^ 1);
        iVar2 = iVar2 + 0x6c;
        param_4 = param_4 + 0x24;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    break;
  case 6:
    iVar2 = *(int *)(param_1 + 0xc);
    FUN_005683d4(param_1 + 4,param_1 + 8,param_1 + 0xc,(param_3 + -2) * 3);
    iVar2 = *(int *)(param_1 + 4) + iVar2 * 0x24;
    param_3 = param_3 + -2;
    if (0 < param_3) {
      local_c = 1;
      do {
        FUN_00404514(param_4,iVar2,0x24);
        FUN_00404514(local_c * 0x24 + param_4,iVar2 + 0x24,0x24);
        FUN_00404514((local_c + 1) * 0x24 + param_4,iVar2 + 0x48,0x24);
        iVar2 = iVar2 + 0x6c;
        local_c = local_c + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  return;
}
