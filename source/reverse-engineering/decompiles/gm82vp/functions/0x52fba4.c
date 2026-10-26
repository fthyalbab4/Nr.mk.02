// rea decompile_all
// name: FUN_0052fba4
// address: 0x52fba4
// body: available
// range: 0x52fba4-0x52fccd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0052fba4(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_1c [16];

  cVar1 = (**(code **)(*param_1 + 0x20))();
  if (cVar1 == '\0') {
    iVar2 = param_1[0x14];
    if (iVar2 == 0) {
      iVar2 = FUN_00462804(&PTR_FUN_00458e94,1);
      param_1[0x14] = iVar2;
      *(int **)(iVar2 + 0x14) = param_1;
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(*param_1 + 0x10);
      iVar3 = FUN_00524d94(param_1[0xb]);
      if (0 < iVar3) {
        uVar4 = FUN_0052c584(param_1[0xb],0);
        uVar5 = FUN_005281b8(uVar4,3);
        uVar6 = (**(code **)(*param_1 + 0x30))();
        if ((uVar5 & 0xffff) == uVar6) {
          uVar4 = FUN_0052c584(param_1[0xb],0);
          uVar5 = FUN_005281b8(uVar4,4);
          uVar6 = (**(code **)(*param_1 + 0x24))();
          if ((uVar5 & 0xffff) == uVar6) {
            FUN_0052c584(param_1[0xb],0);
            uVar4 = FUN_00528bb8();
            (**(code **)(*(int *)param_1[0x14] + 8))((int *)param_1[0x14],uVar4);
            return iVar2;
          }
        }
        (**(code **)(*param_1 + 0x28))();
        uVar4 = FUN_00462594();
        (**(code **)(*(int *)param_1[0x14] + 0x3c))((int *)param_1[0x14],uVar4);
        uVar4 = (**(code **)(*param_1 + 0x24))();
        (**(code **)(*(int *)param_1[0x14] + 0x38))((int *)param_1[0x14],uVar4);
        uVar4 = (**(code **)(*param_1 + 0x30))();
        (**(code **)(*(int *)param_1[0x14] + 0x44))((int *)param_1[0x14],uVar4);
        uVar10 = 0;
        uVar9 = 0;
        piVar7 = (int *)FUN_00463124(param_1[0x14]);
        (**(code **)(*piVar7 + 0x10))(piVar7,auStack_1c,*piVar7,uVar9,uVar10);
        uVar4 = FUN_0052c584(param_1[0xb],0);
        uVar8 = FUN_00463124(param_1[0x14]);
        FUN_0052a584(uVar4,uVar8,auStack_1c,uVar9,uVar10);
      }
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}
