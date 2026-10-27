// rea decompile_all
// name: FUN_00469474
// address: 0x469474
// body: available
// range: 0x469474-0x469545 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00469474(int param_1,uint param_2,char *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;

  if (((param_3 == (char *)0x0) || (*param_3 != s_1_2_3_00774f5e[0])) || (param_4 != 0x38)) {
    uVar1 = 0xfffffffa;
  }
  else if (param_1 == 0) {
    uVar1 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x20) == 0) {
      *(code **)(param_1 + 0x20) = FUN_004669e8;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      *(code **)(param_1 + 0x24) = FUN_004669f4;
    }
    iVar2 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x2530);
    if (iVar2 == 0) {
      uVar1 = 0xfffffffc;
    }
    else {
      *(int *)(param_1 + 0x1c) = iVar2;
      if ((int)param_2 < 0) {
        param_2 = -param_2;
        *(undefined4 *)(iVar2 + 8) = 0;
      }
      else {
        *(int *)(iVar2 + 8) = ((int)param_2 >> 4) + 1;
        if ((int)param_2 < 0x30) {
          param_2 = param_2 & 0xf;
        }
      }
      if (((int)param_2 < 8) || (0xf < (int)param_2)) {
        (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar2);
        uVar1 = 0xfffffffe;
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
      else {
        *(uint *)(iVar2 + 0x24) = param_2;
        *(undefined4 *)(iVar2 + 0x34) = 0;
        uVar1 = FUN_004693b8(param_1);
      }
    }
  }
  return uVar1;
}
