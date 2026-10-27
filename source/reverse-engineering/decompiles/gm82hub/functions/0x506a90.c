// rea decompile_all
// name: FUN_00506a90
// address: 0x506a90
// body: available
// range: 0x506a90-0x506b9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00506a90(int param_1,int param_2,char *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;

  if (((param_3 == (char *)0x0) || (*param_3 != s_1_1_4_00681ee8[0])) || (param_4 != 0x38)) {
    uVar1 = 0xfffffffa;
  }
  else if (param_1 == 0) {
    uVar1 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x20) == 0) {
      *(code **)(param_1 + 0x20) = FUN_00505238;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      *(undefined1 **)(param_1 + 0x24) = &LAB_00505244;
    }
    iVar2 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x18);
    *(int *)(param_1 + 0x1c) = iVar2;
    if (iVar2 == 0) {
      uVar1 = 0xfffffffc;
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x14) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc) = 0;
      if (param_2 < 0) {
        param_2 = -param_2;
        *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc) = 1;
      }
      if ((param_2 < 8) || (0xf < param_2)) {
        FUN_00506a50(param_1);
        uVar1 = 0xfffffffe;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x1c);
        *(int *)(iVar2 + 0x10) = param_2;
        if (*(int *)(iVar2 + 0xc) == 0) {
          pcVar3 = FUN_0050b334;
        }
        else {
          pcVar3 = (code *)0x0;
        }
        iVar2 = FUN_00507140(param_1,pcVar3,1 << ((byte)param_2 & 0x1f));
        *(int *)(*(int *)(param_1 + 0x1c) + 0x14) = iVar2;
        if (iVar2 == 0) {
          FUN_00506a50(param_1);
          uVar1 = 0xfffffffc;
        }
        else {
          FUN_00506a0c(param_1);
          uVar1 = 0;
        }
      }
    }
  }
  return uVar1;
}
