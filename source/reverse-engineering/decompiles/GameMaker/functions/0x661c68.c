// rea decompile_all
// name: FUN_00661c68
// address: 0x661c68
// body: available
// range: 0x661c68-0x661d8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00661c68(int param_1,MSG *param_2)

{
  UINT UVar1;
  char cVar2;
  int iVar3;
  HWND pHVar4;
  HWND pHVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_14 [8];

  iVar3 = FUN_006618c8(param_1,param_2);
  if (iVar3 == 0) {
    UVar1 = param_2->message;
    if (UVar1 == 0x200) {
      cVar2 = FUN_004fd5ac(*(undefined4 *)PTR_DAT_007827e4);
      if (cVar2 != '\0') {
        pHVar4 = WindowFromPoint(param_2->pt);
        FUN_00660100(*(undefined4 *)(*(int *)(param_1 + 0x33c) + 900));
        pHVar5 = (HWND)FUN_004f76a8();
        if ((pHVar4 != pHVar5) && (iVar3 = FUN_00513780(param_1,1), iVar3 != 0)) {
          uVar7 = 1;
          uVar6 = 0;
          FUN_004ee1d0(param_1,&param_2->pt,local_14,0,1);
          iVar3 = FUN_004f4014(iVar3,local_14,0,uVar6,uVar7);
          if ((iVar3 != 0) &&
             ((cVar2 = FUN_00405c98(iVar3,&PTR_LAB_0066dfc0), cVar2 != '\0' ||
              (cVar2 = FUN_00405c98(iVar3,&PTR_FUN_0066ebd4), cVar2 != '\0')))) {
            (**(code **)(**(int **)(param_1 + 0x33c) + 0x1bc))();
          }
        }
      }
    }
    else if ((((UVar1 == 0x201) || (UVar1 - 0x203 < 2)) || (UVar1 - 0x206 < 2)) &&
            (((*(byte *)(param_1 + 0x1c) & 0x10) != 0 ||
             (cVar2 = FUN_00405c98(*(undefined4 *)(param_1 + 0x33c),&PTR_LAB_0065edf8),
             cVar2 != '\0')))) {
      (**(code **)(**(int **)(param_1 + 0x33c) + 0x1bc))();
    }
  }
  DispatchMessageW(param_2);
  return;
}
