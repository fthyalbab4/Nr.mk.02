// rea decompile_all
// name: FUN_0067a0cc
// address: 0x67a0cc
// body: available
// range: 0x67a0cc-0x67a22e inclusive
// range: 0x67a236-0x67a333 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x67a189 (push 0x67a22f followed by fs-segment stack chaining); handler 0x67a22f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0067a0cc(int param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;

  local_10 = 0;
  iVar3 = local_10;
  local_c = param_2;
  local_8 = param_1;
  if (*(int *)(param_1 + 0x1b4) != 0) {
    puStack_34 = (undefined1 *)0x67a0f2;
    iVar3 = FUN_00673fc4();
    iVar8 = *(int *)(*(int *)(iVar3 + 8) + 8);
    iVar3 = local_10;
    if (-1 < iVar8 + -1) {
      iVar7 = 0;
      do {
        puStack_34 = (undefined1 *)0x67a110;
        uVar4 = FUN_00673fc4(*(undefined4 *)(local_8 + 0x1b4));
        puStack_34 = (undefined1 *)0x67a117;
        iVar3 = FUN_00672cc0(uVar4,iVar7);
        if (*(int *)(iVar3 + 0x44) != 0) {
          puStack_34 = (undefined1 *)0x67a12b;
          uVar4 = FUN_00673fc4(*(undefined4 *)(local_8 + 0x1b4));
          puStack_34 = (undefined1 *)0x67a132;
          iVar5 = FUN_00672cc0(uVar4,iVar7);
          iVar3 = iVar7;
          if (*(char *)(*(int *)(iVar5 + 0x44) + 0x1b8) != '\0') break;
        }
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + -1;
        iVar3 = local_10;
      } while (iVar8 != 0);
    }
  }
  local_10 = iVar3;
  puStack_34 = (undefined1 *)0x67a155;
  cVar2 = FUN_00405c98(local_c,&PTR_FUN_0066d144);
  if (cVar2 == '\0') {
    puStack_34 = (undefined1 *)0x67a244;
    cVar2 = FUN_00405c98(local_c,&LAB_0066d4b8);
    if (cVar2 != '\0') {
      puStack_34 = (undefined1 *)0x67a25a;
      iVar8 = FUN_00673fc4(*(undefined4 *)(local_8 + 0x1b4));
      iVar3 = local_c;
      if (iVar8 == *(int *)(*(int *)(local_c + 0x48) + 4)) {
        puStack_34 = (undefined1 *)0x67a2ae;
        iVar8 = FUN_0043c914(*(undefined4 *)(local_c + 0x48));
        puStack_34 = (undefined1 *)0x67a2be;
        iVar7 = FUN_0043c914(*(undefined4 *)(local_8 + 0x1b4));
        if (iVar8 < iVar7) {
          local_10 = local_10 + -1;
        }
        puStack_34 = (undefined1 *)0x67a2d0;
        (**(code **)(**(int **)(iVar3 + 0x48) + 0x14))(*(int **)(iVar3 + 0x48),local_10);
        puStack_34 = (undefined1 *)0x67a2d8;
        iVar3 = FUN_00679e90(local_8);
        if ((*(char *)(iVar3 + 0x28c) != '\0') && (DAT_0077f38c != (int *)0x0)) {
          puStack_34 = (undefined1 *)0x67a2fa;
          (**(code **)(*DAT_0077f38c + 0x20))(DAT_0077f38c,*(undefined4 *)(local_c + 0x48));
        }
      }
      else {
        puStack_34 = (undefined1 *)0x67a273;
        uVar4 = FUN_00673fc4(*(undefined4 *)(local_8 + 0x1b4));
        puStack_34 = (undefined1 *)0x67a27d;
        (**(code **)(**(int **)(iVar3 + 0x48) + 0x10))(*(int **)(iVar3 + 0x48),uVar4);
        puStack_34 = (undefined1 *)0x67a288;
        (**(code **)(**(int **)(iVar3 + 0x48) + 0x14))(*(int **)(iVar3 + 0x48),local_10);
        puStack_34 = (undefined1 *)0x67a290;
        iVar8 = FUN_00679e90(local_8);
        puStack_34 = (undefined1 *)0x67a2a4;
        FUN_006745e4(*(undefined4 *)(iVar3 + 0x48),
                     *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x27c) + 0x6c) + 0x28));
      }
    }
    puStack_34 = (undefined1 *)0x67a302;
    FUN_00679e90(local_8);
    puStack_34 = (undefined1 *)0x67a307;
    FUN_0066f614();
    local_24 = 0xb411;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    puStack_34 = (undefined1 *)0x67a32b;
    FUN_004f3144(*(undefined4 *)(local_8 + 0x34),&local_24);
    return;
  }
  puStack_34 = (undefined1 *)0x67a165;
  iVar3 = FUN_00679e90(local_8);
  *(short *)(iVar3 + 0x1ac) = *(short *)(iVar3 + 0x1ac) + 1;
  puStack_34 = (undefined1 *)0x67a174;
  FUN_00679e90(local_8);
  puStack_34 = (undefined1 *)0x67a179;
  piVar6 = (int *)FUN_006767e4();
  puStack_34 = (undefined1 *)0x67a17e;
  (**(code **)(*piVar6 + 0x20))();
  puStack_38 = &LAB_0067a22f;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  local_14 = FUN_00405cbc(local_c,&PTR_FUN_0066d144);
  iVar3 = FUN_00674d58(local_14);
  if (-1 < iVar3 + -1) {
    iVar8 = 0;
    do {
      FUN_00679e90(local_8);
      uVar4 = FUN_006767e4();
      piVar6 = (int *)FUN_0043cf44(uVar4,local_10);
      iVar7 = FUN_00679e90(local_8);
      FUN_006745e4(piVar6,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x27c) + 0x6c) + 0x28));
      uVar4 = FUN_00674d24(local_14,iVar8);
      FUN_00674340(piVar6,uVar4);
      (**(code **)(*piVar6 + 0x14))(piVar6,local_10);
      iVar8 = iVar8 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = (undefined1 *)0x67a2fa;
  puStack_38 = (undefined1 *)0x67a217;
  FUN_00679e90(local_8,uStack_3c,puVar1);
  puStack_38 = (undefined1 *)0x67a21c;
  piVar6 = (int *)FUN_006767e4();
  puStack_38 = (undefined1 *)0x67a221;
  (**(code **)(*piVar6 + 0x24))();
  puStack_38 = (undefined1 *)0x67a229;
  FUN_00679e90(local_8);
  puStack_38 = (undefined1 *)0x67a22e;
  FUN_004f2c1c();
  return;
}
