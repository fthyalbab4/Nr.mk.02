// rea decompile_all
// name: FUN_00671f24
// address: 0x671f24
// body: available
// range: 0x671f24-0x672044 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00671f24(undefined4 param_1,int param_2,undefined4 param_3,code *param_4,undefined4 param_5
                 )

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 local_c;

  if ((param_2 != 0) && (local_c = *(int *)(*(int *)(param_2 + 8) + 8), -1 < local_c + -1)) {
    iVar5 = 0;
    do {
      FUN_00671640(param_2,iVar5);
      cVar1 = FUN_00672334();
      if (cVar1 == '\0') {
        iVar4 = FUN_00671640(param_2,iVar5);
        if (*(int *)(iVar4 + 0xc) == 0) {
          if (param_4._2_2_ == 0) {
            piVar3 = (int *)FUN_00671640(param_2,iVar5);
            (**(code **)(*piVar3 + 0x30))();
          }
          else {
            uVar2 = FUN_00671640(param_2,iVar5);
            (*param_4)(param_5,uVar2);
          }
          FUN_00671640(param_2,iVar5);
          FUN_00671eec();
        }
        else {
          if (param_4._2_2_ == 0) {
            piVar3 = (int *)FUN_00671640(param_2,iVar5);
            (**(code **)(*piVar3 + 0x30))();
          }
          else {
            uVar2 = FUN_00671640(param_2,iVar5);
            (*param_4)(param_5,uVar2);
          }
          FUN_00671640(param_2,iVar5);
          FUN_00671eec();
        }
      }
      else {
        if (param_4._2_2_ == 0) {
          piVar3 = (int *)FUN_00671640(param_2,iVar5);
          (**(code **)(*piVar3 + 0x30))();
        }
        else {
          uVar2 = FUN_00671640(param_2,iVar5);
          (*param_4)(param_5,uVar2);
        }
        FUN_00671640(param_2,iVar5);
        uVar2 = FUN_0067236c();
        FUN_00671f24(param_1,uVar2);
        FUN_00671640(param_2,iVar5);
        FUN_00671eec();
      }
      iVar5 = iVar5 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}
