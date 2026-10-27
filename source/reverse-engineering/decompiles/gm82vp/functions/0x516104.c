// rea decompile_all
// name: FUN_00516104
// address: 0x516104
// body: available
// range: 0x516104-0x516220 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00516104(int param_1,int *param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piStack_18;
  int iStack_14;

  if (param_2 != (int *)0x0) {
    FUN_00515ba8(param_1);
    iVar3 = (**(code **)(*param_2 + 0x30))();
    if ((iVar3 != 0) && (iVar3 = (**(code **)(*param_2 + 0x24))(), iVar3 != 0)) {
      cVar2 = FUN_00463224(param_2);
      piStack_18 = param_2;
      if (cVar2 != '\a') {
        piStack_18 = (int *)FUN_00462804(&PTR_FUN_00458e94,1);
        (**(code **)(*piStack_18 + 8))(piStack_18,param_2);
        FUN_00464480(piStack_18,7);
      }
      uVar4 = (**(code **)(*piStack_18 + 0x30))();
      *(undefined4 *)(param_1 + 4) = uVar4;
      iVar3 = (**(code **)(*piStack_18 + 0x24))();
      *(int *)(param_1 + 8) = iVar3;
      lVar1 = (longlong)*(int *)(param_1 + 4) * (longlong)iVar3;
      uVar4 = FUN_00404324((int)lVar1 * 4,(int)((ulonglong)lVar1 >> 0x20));
      *(undefined4 *)(param_1 + 0xc) = uVar4;
      iStack_14 = *(int *)(param_1 + 8);
      if (-1 < iStack_14 + -1) {
        iVar3 = 0;
        do {
          iVar5 = FUN_004632a8(piStack_18,iVar3);
          iVar7 = *(int *)(param_1 + 4);
          if (-1 < iVar7 + -1) {
            iVar6 = 0;
            do {
              *(undefined4 *)(*(int *)(param_1 + 0xc) + (iVar3 * *(int *)(param_1 + 4) + iVar6) * 4)
                   = *(undefined4 *)(iVar5 + iVar6 * 4);
              iVar6 = iVar6 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          iVar3 = iVar3 + 1;
          iStack_14 = iStack_14 + -1;
        } while (iStack_14 != 0);
      }
      if (param_3 != '\0') {
        FUN_00515980(param_1);
      }
      cVar2 = FUN_00463224(param_2);
      if (cVar2 != '\a') {
        FUN_00405fdc(piStack_18);
      }
    }
  }
  return;
}
