// rea decompile_all
// name: FUN_0055d764
// address: 0x55d764
// body: available
// range: 0x55d764-0x55d90b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055d764(int param_1,int param_2,uint *param_3,uint param_4,uint *param_5,
                 undefined4 param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *local_20;
  int local_18;

  iVar1 = *(int *)(param_1 + 0x150);
  iVar2 = *(int *)(param_1 + 0xe8) * 3;
  do {
    if (param_4 <= *param_5) {
      return;
    }
    if (*param_3 < param_7) {
      uVar3 = *(int *)(iVar1 + 0x3c) - *(int *)(iVar1 + 0x34);
      uVar4 = param_7 - *param_3;
      if (uVar3 < uVar4) {
        uVar4 = uVar3;
      }
      (**(code **)(*(int *)(param_1 + 0x15c) + 4))
                (param_1,*param_3 * 4 + param_2,iVar1 + 8,uVar4,*(undefined4 *)(iVar1 + 0x34));
      if (*(int *)(param_1 + 0x20) == *(int *)(iVar1 + 0x30)) {
        local_20 = (undefined4 *)(iVar1 + 8);
        for (local_18 = 0; local_18 < *(int *)(param_1 + 0x38); local_18 = local_18 + 1) {
          for (iVar6 = 1; iVar6 <= *(int *)(param_1 + 0xe8); iVar6 = iVar6 + 1) {
            FUN_0055af24(*local_20,0,*local_20,*(undefined4 *)(param_1 + 0x1c),1,-iVar6);
          }
          local_20 = local_20 + 1;
        }
      }
      *param_3 = *param_3 + uVar4;
      *(int *)(iVar1 + 0x34) = *(int *)(iVar1 + 0x34) + uVar4;
      *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) - uVar4;
    }
    else {
      if (*(int *)(iVar1 + 0x30) != 0) {
        return;
      }
      if (*(int *)(iVar1 + 0x34) < *(int *)(iVar1 + 0x3c)) {
        puVar5 = (undefined4 *)(iVar1 + 8);
        for (local_18 = 0; local_18 < *(int *)(param_1 + 0x38); local_18 = local_18 + 1) {
          FUN_0055d5cc(*puVar5,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(iVar1 + 0x34),
                       *(undefined4 *)(iVar1 + 0x3c));
          puVar5 = puVar5 + 1;
        }
        *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x3c);
      }
    }
    if (*(int *)(iVar1 + 0x34) == *(int *)(iVar1 + 0x3c)) {
      (**(code **)(*(int *)(param_1 + 0x160) + 4))
                (param_1,iVar1 + 8,*(undefined4 *)(iVar1 + 0x38),*param_5,param_6);
      *param_5 = *param_5 + 1;
      *(int *)(iVar1 + 0x38) = *(int *)(iVar1 + 0x38) + *(int *)(param_1 + 0xe8);
      if (iVar2 <= *(int *)(iVar1 + 0x38)) {
        *(undefined4 *)(iVar1 + 0x38) = 0;
      }
      if (iVar2 <= *(int *)(iVar1 + 0x34)) {
        *(undefined4 *)(iVar1 + 0x34) = 0;
      }
      *(int *)(iVar1 + 0x3c) = *(int *)(param_1 + 0xe8) + *(int *)(iVar1 + 0x34);
    }
  } while( true );
}
