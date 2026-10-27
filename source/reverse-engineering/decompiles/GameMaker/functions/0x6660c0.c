// rea decompile_all
// name: FUN_006660c0
// address: 0x6660c0
// body: available
// range: 0x6660c0-0x666285 inclusive
// range: 0x6662d4-0x6662ec inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x666177 (push 0x6662cd followed by fs-segment stack chaining); handler 0x6662cd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x666185 (push 0x666286 followed by fs-segment stack chaining); handler 0x666286 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006660c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_10;

  if (*(int *)(param_1 + 0x1b4) == 0) {
    uVar4 = 0;
  }
  else {
    puStack_24 = (undefined1 *)0x6660e2;
    uVar4 = FUN_0043c914();
  }
  puStack_24 = (undefined1 *)0x6660f5;
  cVar3 = FUN_00405c98(param_2,&PTR_FUN_0066d358);
  if (cVar3 != '\0') {
    puStack_24 = (undefined1 *)0x666105;
    iVar5 = FUN_00679e90(param_1);
    *(short *)(iVar5 + 0x1ac) = *(short *)(iVar5 + 0x1ac) + 1;
    puStack_24 = (undefined1 *)0x666114;
    iVar5 = FUN_00679e90(param_1);
    puStack_24 = (undefined1 *)0x66611f;
    piVar6 = (int *)FUN_0067236c(*(undefined4 *)(iVar5 + 0x278));
    puStack_24 = (undefined1 *)0x666124;
    (**(code **)(*piVar6 + 0x20))();
    puStack_24 = (undefined1 *)0x666131;
    iVar5 = FUN_00405cbc(param_2,&PTR_FUN_0066d358);
    puStack_24 = (undefined1 *)0x66613c;
    iVar7 = FUN_00679e90(param_1);
    puStack_24 = (undefined1 *)0x66614d;
    puStack_24 = (undefined1 *)FUN_00405d08(*(undefined4 *)(iVar7 + 0x27c));
    puStack_28 = (undefined1 *)0x666156;
    iVar7 = FUN_00679e90(param_1);
    puStack_28 = (undefined1 *)0x666161;
    uVar8 = FUN_0067236c(*(undefined4 *)(iVar7 + 0x278));
    puVar2 = puStack_24;
    puVar1 = (undefined4 *)((int)puStack_24 + 0x1c);
    puStack_24 = (undefined1 *)0x666169;
    piVar6 = (int *)(*(code *)*puVar1)(puVar2,1,uVar8);
    puStack_28 = &LAB_006662cd;
    uStack_2c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_2c;
    puStack_34 = &LAB_00666286;
    uStack_38 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_38;
    puStack_30 = &stack0xfffffffc;
    puStack_24 = &stack0xfffffffc;
    FUN_006747d4(piVar6,1);
    FUN_00674454(piVar6,*(undefined4 *)(iVar5 + 0x50));
    iVar7 = FUN_00679e90(param_1);
    FUN_006745e4(piVar6,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x27c) + 0x6c) + 0x28));
    (**(code **)(*piVar6 + 0x14))(piVar6,uVar4);
    piVar9 = (int *)FUN_0067236c(piVar6);
    (**(code **)(*piVar9 + 0x20))();
    iVar7 = FUN_00674d58(iVar5);
    if (-1 < iVar7 + -1) {
      local_10 = 0;
      do {
        iVar10 = FUN_00679e90(param_1);
        iVar10 = FUN_00405d08(*(undefined4 *)(iVar10 + 0x27c));
        uVar4 = FUN_0067236c(piVar6);
        uVar4 = (**(code **)(iVar10 + 0x1c))(iVar10,1,uVar4);
        uVar8 = FUN_00674d24(iVar5,local_10);
        FUN_00674340(uVar4,uVar8);
        FUN_006745e4(uVar4,piVar6[0x18]);
        local_10 = local_10 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    piVar9 = (int *)FUN_00679e90(param_1);
    (**(code **)(*piVar9 + 0x15c))(piVar9,piVar6);
    iVar5 = FUN_00674d58(iVar5);
    (**(code **)(*(int *)piVar6[0x11] + 0x74))((int *)piVar6[0x11],0 < iVar5);
    puVar2 = puStack_30;
    *in_FS_OFFSET = uStack_38;
    puStack_30 = &LAB_0066628d;
    puStack_34 = (undefined1 *)0x666280;
    piVar6 = (int *)FUN_0067236c(piVar6,uStack_38,puVar2);
    puStack_34 = (undefined1 *)0x666285;
    (**(code **)(*piVar6 + 0x24))();
    return;
  }
  puStack_24 = (undefined1 *)param_4;
  puStack_28 = (undefined1 *)0x6662e4;
  FUN_0067a0cc(param_1,param_2,param_3);
  return;
}
