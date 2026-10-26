// rea decompile_all
// name: FUN_00404514
// address: 0x404514
// body: available
// range: 0x404514-0x404549 inclusive
// range: 0x404570-0x404610 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00404514(longlong *param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;

  if (param_1 != param_2) {
    if (0x20 < param_3) {
      if (0x20 < (int)param_3) {
        if ((param_2 < param_1) ||
           (plVar11 = (longlong *)((int)param_2 - param_3),
           param_2 = (longlong *)(param_3 + (int)plVar11), param_1 <= plVar11)) {
          lVar1 = *param_1;
          param_1 = (longlong *)((param_3 - 8) + (int)param_1);
          plVar11 = (longlong *)((int)param_2 + (param_3 - 8));
          lVar2 = *param_1;
          iVar8 = (((uint)param_2 & 0xfffffff8) + 8) - (int)plVar11;
          do {
            *(longlong *)(iVar8 + (int)plVar11) =
                 (longlong)ROUND((float10)*(longlong *)(iVar8 + (int)param_1));
            bVar7 = iVar8 < -8;
            iVar8 = iVar8 + 8;
          } while (bVar7);
          *plVar11 = (longlong)ROUND((float10)lVar2);
          *param_2 = (longlong)ROUND((float10)lVar1);
          return;
        }
        iVar9 = param_3 - 8;
        lVar1 = *(longlong *)(iVar9 + (int)param_1);
        lVar2 = *param_1;
        iVar8 = (iVar9 + (int)param_2 & 0xfffffff8U) - (int)param_2;
        do {
          *(longlong *)(iVar8 + (int)param_2) =
               (longlong)ROUND((float10)*(longlong *)(iVar8 + (int)param_1));
          iVar10 = iVar8 + -8;
          bVar7 = 7 < iVar8;
          iVar8 = iVar10;
        } while (iVar10 != 0 && bVar7);
        *param_2 = (longlong)ROUND((float10)lVar2);
        *(longlong *)(iVar9 + (int)param_2) = (longlong)ROUND((float10)lVar1);
      }
      return;
    }
    iVar8 = param_3 - 8;
    if (iVar8 == 0 || (int)param_3 < 8) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(param_3) {
      case 1:
        *(char *)param_2 = (char)*param_1;
        return;
      case 2:
        *(short *)param_2 = (short)*param_1;
        return;
      case 3:
        uVar4 = *(undefined1 *)((int)param_1 + 2);
        *(short *)param_2 = (short)*param_1;
        *(undefined1 *)((int)param_2 + 2) = uVar4;
        return;
      case 4:
        *(int *)param_2 = (int)*param_1;
        return;
      case 5:
        uVar4 = *(undefined1 *)((int)param_1 + 4);
        *(int *)param_2 = (int)*param_1;
        *(undefined1 *)((int)param_2 + 4) = uVar4;
        return;
      case 6:
        uVar5 = *(undefined2 *)((int)param_1 + 4);
        *(int *)param_2 = (int)*param_1;
        *(undefined2 *)((int)param_2 + 4) = uVar5;
        return;
      case 7:
        uVar6 = *(undefined4 *)((int)param_1 + 3);
        *(int *)param_2 = (int)*param_1;
        *(undefined4 *)((int)param_2 + 3) = uVar6;
        return;
      case 8:
        *param_2 = (longlong)ROUND((float10)*param_1);
        return;
      }
    }
    else {
      lVar1 = *(longlong *)(iVar8 + (int)param_1);
      lVar2 = *param_1;
      if (8 < iVar8) {
        lVar3 = param_1[1];
        if (0x10 < iVar8) {
          param_2[2] = (longlong)ROUND((float10)param_1[2]);
        }
        param_2[1] = (longlong)ROUND((float10)lVar3);
      }
      *param_2 = (longlong)ROUND((float10)lVar2);
      *(longlong *)(iVar8 + (int)param_2) = (longlong)ROUND((float10)lVar1);
    }
  }
  return;
}
