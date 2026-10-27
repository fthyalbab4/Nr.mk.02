// rea decompile_all
// name: FUN_00505530
// address: 0x505530
// body: available
// range: 0x505530-0x50573b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_00505530(int param_1,int param_2,int param_3,int param_4,char *param_5,int param_6,int param_7,
            int param_8)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  uint local_10;
  int local_8;

  if (((param_5 == (char *)0x0) || (*param_5 != *PTR_s_1_1_4_00681ed8)) || (param_4 != 0x38)) {
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
    local_8 = param_2;
    if (param_2 == -1) {
      local_8 = 6;
    }
    bVar4 = param_8 < 0;
    if (bVar4) {
      param_8 = -param_8;
    }
    local_10 = (uint)bVar4;
    if (((((param_7 < 1) || (9 < param_7)) || ((param_3 != 8 || ((param_8 < 9 || (0xf < param_8)))))
         ) || (local_8 < 0)) || (((9 < local_8 || (param_6 < 0)) || (2 < param_6)))) {
      uVar1 = 0xfffffffe;
    }
    else {
      piVar2 = (int *)(**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x16b8);
      if (piVar2 == (int *)0x0) {
        uVar1 = 0xfffffffc;
      }
      else {
        *(int **)(param_1 + 0x1c) = piVar2;
        *piVar2 = param_1;
        piVar2[6] = local_10;
        piVar2[10] = param_8;
        iVar3 = 1 << ((byte)param_8 & 0x1f);
        piVar2[9] = iVar3;
        piVar2[0xb] = iVar3 + -1;
        piVar2[0x12] = param_7 + 7;
        iVar3 = 1 << ((byte)(param_7 + 7) & 0x1f);
        piVar2[0x11] = iVar3;
        piVar2[0x13] = iVar3 + -1;
        piVar2[0x14] = (piVar2[0x12] + 2U) / 3;
        iVar3 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),piVar2[9],2);
        piVar2[0xc] = iVar3;
        iVar3 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),piVar2[9],2);
        piVar2[0xe] = iVar3;
        iVar3 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),piVar2[0x11],2);
        piVar2[0xf] = iVar3;
        iVar3 = 1 << ((char)param_7 + 6U & 0x1f);
        piVar2[0x5a5] = iVar3;
        iVar3 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),iVar3,4);
        piVar2[2] = iVar3;
        piVar2[3] = piVar2[0x5a5] << 2;
        if (((piVar2[0xc] == 0) || (piVar2[0xe] == 0)) || ((piVar2[0xf] == 0 || (piVar2[2] == 0))))
        {
          *(undefined **)(param_1 + 0x18) = PTR_PTR_00681e14;
          FUN_00505c70(param_1);
          uVar1 = 0xfffffffc;
        }
        else {
          piVar2[0x5a7] = iVar3 + (piVar2[0x5a5] & 0xfffffffeU);
          piVar2[0x5a4] = piVar2[0x5a5] * 3 + piVar2[2];
          piVar2[0x1f] = local_8;
          piVar2[0x20] = param_6;
          *(undefined1 *)((int)piVar2 + 0x1d) = 8;
          uVar1 = FUN_00505830(param_1);
        }
      }
    }
  }
  return uVar1;
}
