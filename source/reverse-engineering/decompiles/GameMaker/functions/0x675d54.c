// rea decompile_all
// name: FUN_00675d54
// address: 0x675d54
// body: available
// range: 0x675d54-0x675d93 inclusive
// range: 0x675da8-0x675ec7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00675d54(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  int iStack_30;
  int iStack_24;
  undefined1 local_20 [16];

  if ((param_1[0x9e] != 0) && (cVar1 = FUN_0067240c(param_1[0x9e]), cVar1 != '\0')) {
    iVar3 = param_1[0x9e];
    switch(*(undefined1 *)(iVar3 + 0x14)) {
    case 0:
    case 3:
      iVar3 = FUN_006722e0(iVar3);
      (**(code **)(*(int *)param_1[0xa1] + 0x3c))
                ((int *)param_1[0xa1],0,0,*(undefined4 *)(iVar3 + 0xc));
      break;
    case 1:
      (**(code **)(*param_1 + 0x54))(param_1,local_20);
      puVar8 = local_20;
      iVar3 = FUN_006722e0(param_1[0x9e]);
      (**(code **)(*(int *)param_1[0xa1] + 0x80))
                ((int *)param_1[0xa1],puVar8,*(undefined4 *)(iVar3 + 0xc));
      break;
    case 2:
      iVar3 = FUN_006722e0(iVar3);
      iVar3 = (**(code **)(**(int **)(iVar3 + 0xc) + 0x30))();
      iVar2 = FUN_006722e0(param_1[0x9e]);
      iVar2 = (**(code **)(**(int **)(iVar2 + 0xc) + 0x24))();
      iVar4 = FUN_004edf8c(param_1);
      if (-1 < iVar4 / iVar3) {
        iStack_24 = iVar4 / iVar3 + 1;
        iStack_30 = 0;
        do {
          iVar4 = FUN_004edfcc(param_1);
          if (-1 < iVar4 / iVar2) {
            iVar4 = iVar4 / iVar2 + 1;
            iVar6 = 0;
            do {
              iVar5 = FUN_006722e0(param_1[0x9e]);
              (**(code **)(*(int *)param_1[0xa1] + 0x3c))
                        ((int *)param_1[0xa1],iVar3 * iStack_30,iVar2 * iVar6,
                         *(undefined4 *)(iVar5 + 0xc));
              iVar6 = iVar6 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          iStack_30 = iStack_30 + 1;
          iStack_24 = iStack_24 + -1;
        } while (iStack_24 != 0);
      }
      break;
    case 4:
      iVar2 = FUN_006722e0(param_1[0x9e]);
      uVar7 = *(undefined4 *)(iVar2 + 0xc);
      iVar3 = FUN_006722e0(iVar3);
      iVar3 = (**(code **)(**(int **)(iVar3 + 0xc) + 0x30))();
      (**(code **)(*(int *)param_1[0xa1] + 0x3c))
                ((int *)param_1[0xa1],param_1[0x12] - iVar3,0,uVar7);
    }
  }
  return;
}
