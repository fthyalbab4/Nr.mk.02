// rea decompile_all
// name: FUN_006362c4
// address: 0x6362c4
// body: available
// range: 0x6362c4-0x636510 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006362c4(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 extraout_var;

  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x3bc),0);
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x3a8),0);
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x3f4),0);
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x408),0);
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x3e4),0);
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x44c),0);
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x434),0);
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x468),0);
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x480),0);
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x49c),0);
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x4ac),0);
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x4cc),0);
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x4ec),0);
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x514),0);
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x530),0);
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x57c),0);
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x598),0);
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x5c4),0);
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x5e4),0);
  if (param_2 == 0) {
    FUN_004edcac(*(undefined4 *)(param_1 + 0x3b0),
                 *(int *)(*(int *)(param_1 + 0x398) + 0x44) +
                 *(int *)(*(int *)(param_1 + 0x398) + 0x4c) + 8);
  }
  else {
    FUN_004ee5c0(param_2,1);
    FUN_004edc78(param_2,*(undefined4 *)(*(int *)(param_1 + 0x398) + 0x40));
    FUN_004edcac(param_2,*(int *)(*(int *)(param_1 + 0x398) + 0x44) +
                         *(int *)(*(int *)(param_1 + 0x398) + 0x4c) + 8);
    FUN_004edcac(*(undefined4 *)(param_1 + 0x3b0),
                 *(int *)(param_2 + 0x44) + *(int *)(param_2 + 0x4c) + 8);
  }
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x3b0),param_3);
  if ((char)param_3 == '\0') {
    if (param_2 == 0) {
      FUN_004edcac(*(undefined4 *)(param_1 + 0x390),
                   *(int *)(*(int *)(param_1 + 0x398) + 0x44) +
                   *(int *)(*(int *)(param_1 + 0x398) + 0x4c) + 8);
    }
    else {
      FUN_004edcac(*(undefined4 *)(param_1 + 0x390),
                   *(int *)(param_2 + 0x44) + *(int *)(param_2 + 0x4c) + 8);
    }
  }
  else {
    FUN_004edcac(*(undefined4 *)(param_1 + 0x390),
                 *(int *)(*(int *)(param_1 + 0x3b0) + 0x44) +
                 *(int *)(*(int *)(param_1 + 0x3b0) + 0x4c) + 8);
  }
  FUN_004edcac(*(undefined4 *)(param_1 + 0x394),*(undefined4 *)(*(int *)(param_1 + 0x390) + 0x44));
  FUN_00515e80(param_1,*(int *)(*(int *)(param_1 + 0x394) + 0x44) +
                       *(int *)(*(int *)(param_1 + 0x394) + 0x4c) + 0xc);
  FUN_00515e4c(param_1,*(int *)(*(int *)(param_1 + 0x388) + 0x40) +
                       *(int *)(*(int *)(param_1 + 0x388) + 0x48) + 0xc);
  FUN_004ee8f4(*(undefined4 *)(param_1 + 0x39c),0);
  iVar1 = *(int *)(param_1 + 0x660);
  if ((((iVar1 == 4) || (iVar1 == 0xc)) || (iVar1 == 0xb)) ||
     (((iVar1 == 9 || (iVar1 == 0x10)) || ((iVar1 == 0x13 || (iVar1 == 0x16)))))) {
    FUN_004ee8f4(*(undefined4 *)(param_1 + 0x39c),CONCAT22(extraout_var,7));
  }
  return;
}
