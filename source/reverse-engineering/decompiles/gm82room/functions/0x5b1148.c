// rea decompile_all
// name: FUN_005b1148
// address: 0x5b1148
// body: available
// range: 0x5b1148-0x5b12a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b1148(int param_1,int param_2,uint *param_3,uint param_4,uint *param_5,
                 undefined4 *param_6,uint param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *local_18;
  undefined4 *local_14;

  iVar3 = *(int *)(param_1 + 0x150);
  while( true ) {
    if (param_7 <= *param_3) {
      return;
    }
    if (param_4 <= *param_5) break;
    uVar1 = *(int *)(param_1 + 0xe8) - *(int *)(iVar3 + 0x34);
    uVar2 = param_7 - *param_3;
    if (uVar1 < uVar2) {
      uVar2 = uVar1;
    }
    (**(code **)(*(int *)(param_1 + 0x15c) + 4))
              (param_1,*param_3 * 4 + param_2,iVar3 + 8,uVar2,*(undefined4 *)(iVar3 + 0x34));
    *param_3 = *param_3 + uVar2;
    *(int *)(iVar3 + 0x34) = *(int *)(iVar3 + 0x34) + uVar2;
    *(int *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) - uVar2;
    if ((*(int *)(iVar3 + 0x30) == 0) && (*(int *)(iVar3 + 0x34) < *(int *)(param_1 + 0xe8))) {
      local_14 = (undefined4 *)(iVar3 + 8);
      for (iVar4 = 0; iVar4 < *(int *)(param_1 + 0x38); iVar4 = iVar4 + 1) {
        FUN_005b1110(*local_14,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(iVar3 + 0x34),
                     *(undefined4 *)(param_1 + 0xe8));
        local_14 = local_14 + 1;
      }
      *(undefined4 *)(iVar3 + 0x34) = *(undefined4 *)(param_1 + 0xe8);
    }
    if (*(int *)(iVar3 + 0x34) == *(int *)(param_1 + 0xe8)) {
      (**(code **)(*(int *)(param_1 + 0x160) + 4))(param_1,iVar3 + 8,0,*param_5,param_6);
      *(undefined4 *)(iVar3 + 0x34) = 0;
      *param_5 = *param_5 + 1;
    }
    if ((*(int *)(iVar3 + 0x30) == 0) && (*param_5 < param_4)) {
      iVar3 = *(int *)(param_1 + 0x40);
      local_18 = param_6;
      for (iVar4 = 0; iVar4 < *(int *)(param_1 + 0x38); iVar4 = iVar4 + 1) {
        FUN_005b1110(*local_18,*(int *)(iVar3 + 0x1c) << 3,*param_5 * *(int *)(iVar3 + 0xc),
                     *(int *)(iVar3 + 0xc) * param_4);
        local_18 = local_18 + 1;
        iVar3 = iVar3 + 0x54;
      }
      *param_5 = param_4;
      return;
    }
  }
  return;
}
