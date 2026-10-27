// rea decompile_all
// name: FUN_00668004
// address: 0x668004
// body: available
// range: 0x668004-0x6681a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_00668004(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 param_6,undefined4 *param_7,int *param_8)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int aiStackY_1808 [1519];
  undefined4 *puVar7;
  undefined4 local_2c;
  undefined4 local_1c;
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 *local_c;

  bVar6 = 0;
  local_1c = *param_4;
  local_18 = param_4[1];
  uStack_14 = param_4[2];
  uStack_10 = param_4[3];
  local_c = param_3;
  cVar2 = FUN_006685e8(param_1);
  if (cVar2 == '\0') {
    FUN_006758a4(param_1,param_2,local_c,&stack0xffffffe4,param_5,param_6,param_7,param_8);
  }
  else {
    cVar2 = FUN_00405c98(param_2,&PTR_FUN_0066ebd4);
    if (cVar2 != '\0') {
      if (local_18 == 0) {
        iVar3 = FUN_004edfcc(param_1);
        iVar3 = iVar3 - param_1[0xaf];
        puVar7 = &stack0xffffffd4;
        iVar4 = (**(code **)(*param_1 + 0x114))(param_1,1,*param_1,puVar7,iVar3);
        iVar5 = FUN_004edf8c(param_1);
        iVar4 = (iVar5 - param_1[0xaf]) - iVar4;
        iVar5 = (**(code **)(*param_1 + 0x114))(param_1,0);
        FUN_0040c114(iVar5 + param_1[0xb0],param_1[0xaf],iVar4,puVar7,iVar3);
        puVar7 = param_5 + (uint)bVar6 * -2 + 1;
        *param_5 = local_2c;
        *puVar7 = *(undefined4 *)((int)&stack0xffffffd8 + (uint)bVar6 * 0xfffffffe * 4);
        puVar7[(uint)bVar6 * -2 + 1] =
             *(undefined4 *)(&stack0xffffffdc + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        (puVar7 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
             *(undefined4 *)
              ((int)(&stack0xffffffdc + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
              ((uint)bVar6 * -2 + 1) * 4);
        if (0 < param_1[0xbe]) {
          param_5[1] = param_5[1] + *(int *)(param_1[0xc1] + 0x4c) + param_1[0xa4];
        }
      }
      if (local_18 < param_1[0xbe]) {
        *param_8 = -0x7fffffff;
      }
      else {
        *param_8 = param_5[1];
        iVar3 = FUN_004edfcc(param_1);
        if (iVar3 - param_1[0xaf] < *param_8 + *(int *)(param_2 + 0x4c)) {
          bVar1 = true;
        }
        else {
          iVar3 = FUN_006767e4(param_1);
          if (*(int *)(*(int *)(iVar3 + 8) + 8) + -1 == local_18) {
            bVar1 = false;
          }
          else {
            iVar3 = FUN_004edfcc(param_1);
            bVar1 = (iVar3 - param_1[0xaf]) - *(int *)(param_1[0xc0] + 0x4c) <
                    *param_8 + *(int *)(param_2 + 0x4c);
          }
        }
        if (bVar1) {
          *param_8 = -0x7fffffff;
        }
        else {
          iVar3 = FUN_006767e4(param_1);
          *(bool *)(param_1 + 0xbc) = *(int *)(*(int *)(iVar3 + 8) + 8) + -1 == local_18;
        }
        *local_c = *param_5;
        *param_7 = param_5[2];
        param_5[1] = param_5[1] + *(int *)(param_2 + 0x4c) + param_1[0xa4];
      }
    }
  }
  return;
}
