// rea decompile_all
// name: FUN_006758a4
// address: 0x6758a4
// body: available
// range: 0x6758a4-0x675d53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_006758a4(int *param_1,int param_2,int *param_3,int *param_4,int *param_5,int *param_6,
                 int *param_7,int *param_8)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  int aiStackY_180c [1522];
  int *piVar8;
  int local_30;
  int local_20;
  int local_1c;
  int iStack_18;
  int iStack_14;
  int local_10;
  int *local_c;

  bVar7 = 0;
  local_20 = *param_4;
  local_1c = param_4[1];
  iStack_18 = param_4[2];
  iStack_14 = param_4[3];
  local_c = param_3;
  cVar1 = FUN_00405c98(param_2,&PTR_FUN_0066ebd4);
  if (cVar1 != '\0') {
    if (*(int *)(local_20 + 8) == 1) {
      param_1[0xb6] = *(int *)(param_2 + 0x48);
      param_1[0xb5] = *(int *)(param_2 + 0x4c);
    }
    local_10 = param_2;
    if (local_1c == 0) {
      iVar2 = FUN_004edfcc(param_1);
      iVar2 = iVar2 - param_1[0xaf];
      piVar8 = &stack0xffffffd0;
      iVar3 = (**(code **)(*param_1 + 0x114))(param_1,1,*param_1,piVar8,iVar2);
      iVar4 = FUN_004edf8c(param_1);
      iVar6 = param_1[0xaf];
      iVar5 = (**(code **)(*param_1 + 0x114))(param_1,0);
      FUN_0040c114(iVar5 + param_1[0xb0],param_1[0xaf],(iVar4 - iVar6) - iVar3,piVar8,iVar2);
      piVar8 = param_5 + (uint)bVar7 * -2 + 1;
      *param_5 = local_30;
      *piVar8 = *(int *)((int)&stack0xffffffd4 + (uint)bVar7 * 0xfffffffe * 4);
      piVar8[(uint)bVar7 * -2 + 1] =
           *(int *)(&stack0xffffffd8 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      (piVar8 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
           *(int *)((int)(&stack0xffffffd8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
                   ((uint)bVar7 * -2 + 1) * 4);
    }
    cVar1 = *(char *)((int)param_1 + 0x28f);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*param_1 + 0x60))();
      if ((((cVar1 != '\0') || (cVar1 = FUN_00677458(param_1), cVar1 != '\0')) && (local_1c != 0))
         && (param_5[2] - *param_5 < *(int *)(local_10 + 0x48) + param_1[0xb0])) {
        iVar6 = FUN_004edfcc(param_1);
        iVar2 = (iVar6 - param_5[1]) - param_1[0xaf];
        piVar8 = &stack0xffffffd0;
        iVar3 = (**(code **)(*param_1 + 0x114))(param_1,1,*param_1,piVar8,iVar2);
        iVar4 = FUN_004edf8c(param_1);
        iVar6 = param_1[0xb0];
        iVar5 = (**(code **)(*param_1 + 0x114))(param_1,0);
        FUN_0040c114(iVar5 + param_1[0xb0],
                     param_1[0xaf] * 2 +
                     *(int *)(&DAT_0077f390 + (uint)*(byte *)(param_1 + 0xb1) * 4) +
                     param_5[1] + param_1[0xb5],(iVar4 - iVar6) - iVar3,piVar8,iVar2);
        piVar8 = param_5 + (uint)bVar7 * -2 + 1;
        *param_5 = local_30;
        *piVar8 = *(int *)((int)&stack0xffffffd4 + (uint)bVar7 * 0xfffffffe * 4);
        piVar8[(uint)bVar7 * -2 + 1] =
             *(int *)(&stack0xffffffd8 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
        (piVar8 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
             *(int *)((int)(&stack0xffffffd8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
                     ((uint)bVar7 * -2 + 1) * 4);
        param_1[0xae] = param_1[0xae] + 1;
      }
      *param_8 = param_5[1];
      *local_c = *param_5;
      *param_6 = param_1[0xb5];
      *param_5 = *param_5 + *(int *)(local_10 + 0x48) + param_1[0xa4];
    }
    else if (cVar1 == '\x01') {
      cVar1 = (**(code **)(*param_1 + 0x60))();
      if (((cVar1 != '\0') || (cVar1 = FUN_00677458(param_1), cVar1 != '\0')) &&
         ((local_1c != 0 && (param_5[2] - *param_5 < *(int *)(local_10 + 0x48))))) {
        iVar6 = FUN_004edfcc(param_1);
        iVar2 = (iVar6 - param_5[1]) - param_1[0xaf];
        piVar8 = &stack0xffffffd0;
        iVar3 = (**(code **)(*param_1 + 0x114))(param_1,1,*param_1,piVar8,iVar2);
        iVar4 = FUN_004edf8c(param_1);
        iVar6 = param_1[0xb0];
        iVar5 = (**(code **)(*param_1 + 0x114))(param_1,0);
        FUN_0040c114(iVar5 + param_1[0xb0],
                     param_1[0xaf] * 2 +
                     *(int *)(&DAT_0077f390 + (uint)*(byte *)(param_1 + 0xb1) * 4) +
                     param_5[1] + param_1[0xb5],(iVar4 - iVar6) - iVar3,piVar8,iVar2);
        piVar8 = param_5 + (uint)bVar7 * -2 + 1;
        *param_5 = local_30;
        *piVar8 = *(int *)((int)&stack0xffffffd4 + (uint)bVar7 * 0xfffffffe * 4);
        piVar8[(uint)bVar7 * -2 + 1] =
             *(int *)(&stack0xffffffd8 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
        (piVar8 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
             *(int *)((int)(&stack0xffffffd8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
                     ((uint)bVar7 * -2 + 1) * 4);
        param_1[0xae] = param_1[0xae] + 1;
      }
      *param_8 = param_5[1];
      if (local_1c == 0) {
        iVar6 = *(int *)(local_10 + 0x48);
        *local_c = (param_5[2] - iVar6) - param_1[0xb0];
        param_5[2] = param_5[2] - (iVar6 + param_1[0xaf] + param_1[0xa4]);
      }
      else {
        iVar6 = *(int *)(local_10 + 0x48);
        *local_c = param_5[2] - iVar6;
        if (local_1c == *(int *)(local_20 + 8) + -1) {
          param_5[2] = param_5[2] - iVar6;
        }
        else {
          param_5[2] = param_5[2] - (iVar6 + param_1[0xa4]);
        }
      }
      *param_6 = param_1[0xb5];
    }
    else if (cVar1 == '\x02') {
      cVar1 = (**(code **)(*param_1 + 0x60))();
      if (((cVar1 != '\0') || (cVar1 = FUN_00677458(param_1), cVar1 != '\0')) &&
         ((local_1c != 0 && (param_5[3] - param_5[1] < *(int *)(local_10 + 0x4c))))) {
        iVar6 = FUN_004edfcc(param_1);
        iVar6 = iVar6 - param_1[0xaf];
        piVar8 = &stack0xffffffd0;
        iVar2 = (**(code **)(*param_1 + 0x114))(param_1,1,*param_1,piVar8,iVar6);
        iVar3 = FUN_004edf8c(param_1);
        FUN_0040c114(*param_5 + param_1[0xb6] + param_1[0xb0] * 2 +
                     *(int *)(&DAT_0077f390 + (uint)*(byte *)(param_1 + 0xb1) * 4),param_1[0xaf],
                     (iVar3 - param_1[0xb0]) - iVar2,piVar8,iVar6);
        piVar8 = param_5 + (uint)bVar7 * -2 + 1;
        *param_5 = local_30;
        *piVar8 = *(int *)((int)&stack0xffffffd4 + (uint)bVar7 * 0xfffffffe * 4);
        piVar8[(uint)bVar7 * -2 + 1] =
             *(int *)(&stack0xffffffd8 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
        (piVar8 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
             *(int *)((int)(&stack0xffffffd8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
                     ((uint)bVar7 * -2 + 1) * 4);
        param_1[0xad] = param_1[0xad] + 1;
      }
      if (local_1c == 0) {
        *param_8 = param_1[0xaf];
      }
      else {
        *param_8 = param_5[1];
      }
      iVar6 = (**(code **)(*param_1 + 0x114))(param_1,2);
      param_5[2] = iVar6 + param_1[0xb6];
      *local_c = *param_5;
      *param_7 = param_1[0xb6];
      param_5[1] = param_5[1] + *(int *)(local_10 + 0x4c) + param_1[0xa4];
    }
    else if (cVar1 == '\x03') {
      cVar1 = (**(code **)(*param_1 + 0x60))();
      if ((((cVar1 != '\0') || (cVar1 = FUN_00677458(param_1), cVar1 != '\0')) && (local_1c != 0))
         && (param_5[3] - param_5[1] < *(int *)(local_10 + 0x4c))) {
        iVar6 = FUN_004edfcc(param_1);
        iVar6 = iVar6 - param_1[0xaf];
        piVar8 = &stack0xffffffd0;
        iVar2 = (**(code **)(*param_1 + 0x114))(param_1,0,*param_1,piVar8,iVar6);
        FUN_0040c114(iVar2 + param_1[0xb0],param_1[0xaf],
                     ((param_5[2] - param_1[0xb6]) + param_1[0xb0] * -2) -
                     *(int *)(&DAT_0077f390 + (uint)*(byte *)(param_1 + 0xb1) * 4),piVar8,iVar6);
        piVar8 = param_5 + (uint)bVar7 * -2 + 1;
        *param_5 = local_30;
        *piVar8 = *(int *)((int)&stack0xffffffd4 + (uint)bVar7 * 0xfffffffe * 4);
        piVar8[(uint)bVar7 * -2 + 1] =
             *(int *)(&stack0xffffffd8 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
        (piVar8 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
             *(int *)((int)(&stack0xffffffd8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
                     ((uint)bVar7 * -2 + 1) * 4);
        param_1[0xad] = param_1[0xad] + 1;
      }
      if (local_1c == 0) {
        iVar6 = FUN_004edfcc(param_1);
        *param_8 = (iVar6 - *(int *)(param_2 + 0x4c)) - param_1[0xb0];
      }
      else {
        *param_8 = (param_5[3] - *(int *)(param_2 + 0x4c)) - param_1[0xa4];
      }
      iVar6 = param_1[0xb6];
      *local_c = param_5[2] - iVar6;
      *param_7 = iVar6;
      param_5[3] = param_5[3] - (*(int *)(local_10 + 0x4c) + param_1[0xa4]);
    }
  }
  return;
}
