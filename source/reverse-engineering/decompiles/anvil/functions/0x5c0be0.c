// rea decompile_all
// name: FUN_005c0be0
// address: 0x5c0be0
// body: available
// range: 0x5c0be0-0x5c0c6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005c0be0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iStack_10;

  iStack_10 = param_3;
  if (param_1[4] != 0xcd) {
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x12;
    *(int *)(iVar1 + 0x18) = param_1[4];
    (**(code **)*param_1)();
  }
  if ((uint)param_1[0x22] < (uint)param_1[0x1c]) {
    iVar1 = param_1[2];
    if (iVar1 != 0) {
      *(int *)(iVar1 + 4) = param_1[0x22];
      *(int *)(iVar1 + 8) = param_1[0x1c];
      (**(code **)param_1[2])();
    }
    iStack_10 = 0;
    (**(code **)(*(int *)((int)param_1 + 0x19a) + 4))(param_1,param_2,&iStack_10);
    param_1[0x22] = param_1[0x22] + param_3;
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x77;
    (**(code **)(*param_1 + 4))(param_1,0xffffffff);
    param_3 = 0;
  }
  return param_3;
}
