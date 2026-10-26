// rea decompile_all
// name: FUN_005ed5ec
// address: 0x5ed5ec
// body: available
// range: 0x5ed5ec-0x5ed658 inclusive
// range: 0x5ed666-0x5ed887 inclusive
// range: 0x5ed89f-0x5ed8bc inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5ed606 (push 0x5ed8bd followed by fs-segment stack chaining); handler 0x5ed8bd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5ed624 (push 0x5ed888 followed by fs-segment stack chaining); handler 0x5ed888 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5ed632 (push 0x5ed659 followed by fs-segment stack chaining); handler 0x5ed659 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_005ed5ec(int *param_1)

{
  HGLOBAL hGlobal;
  undefined1 *puVar1;
  int iVar2;
  LPSTREAM *ppstm;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_c [2];

  puStack_20 = &stack0xfffffffc;
  local_c[1] = 0;
  local_c[0] = 0;
  puStack_24 = &LAB_005ed8bd;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puVar1 = &stack0xfffffffc;
  if (param_1[0xa2] == 0) {
    puStack_30 = &LAB_005ed888;
    uStack_34 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_34;
    uVar3 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffc0;
    puStack_2c = &stack0xfffffffc;
    FUN_0040b268(local_c);
    piVar5 = (int *)param_1[0xa0];
    iVar2 = (**(code **)(*piVar5 + 0x10))();
    *in_FS_OFFSET = piVar5;
    if ((iVar2 != 0) || (local_c[0] == 0)) {
      iVar2 = *(int *)param_1[0xa0];
      (**(code **)(iVar2 + 0xc))(iVar2,piVar5,uVar3,(int *)param_1[0xa0]);
      FUN_005365fc();
    }
    hGlobal = (HGLOBAL)param_1[0x9f];
    if ((hGlobal == (HGLOBAL)0x0) && (param_1[0xa1] != 0)) {
      (**(code **)(*(int *)param_1[0xa1] + 0x20))();
      FUN_005365fc();
    }
    else {
      ppstm = (LPSTREAM *)FUN_0040b268(local_c + 1);
      CreateStreamOnHGlobal(hGlobal,0,ppstm);
      FUN_005365fc();
      (**(code **)(*(int *)param_1[0xa1] + 0x14))();
      FUN_005365fc();
      FUN_005ee308(param_1);
    }
    FUN_0040b268(param_1 + 0xa2);
    (*(code *)**(undefined4 **)param_1[0xa0])();
    FUN_005365fc();
    param_1[0xb0] = 0x10;
    (**(code **)(*(int *)param_1[0xa2] + 0xc))();
    uVar3 = FUN_0040b268(param_1 + 0xa3);
    puVar9 = &DAT_005ed8dc;
    puVar8 = (undefined4 *)param_1[0xa0];
    (**(code **)*puVar8)();
    FUN_005365fc();
    uVar4 = FUN_0040b268(param_1 + 0xa4);
    puVar7 = &DAT_005ed8ec;
    puVar6 = (undefined4 *)param_1[0xa0];
    (**(code **)*puVar6)();
    piVar5 = param_1;
    if (param_1 != (int *)0x0) {
      piVar5 = param_1 + 0xb4;
    }
    FUN_005368f8(param_1[0xa0],&LAB_005ed8fc,piVar5,param_1 + 0xa7,puVar6,puVar7,uVar4,puVar8,puVar9
                 ,uVar3);
    iVar2 = param_1[0x9e];
    if (iVar2 != 0) {
      iVar2 = iVar2 + 8;
    }
    FUN_005368f8(param_1[0xa0],param_1[0x9c] + 0x10,iVar2,param_1 + 0xa8);
    if ((*(byte *)(param_1[0x9c] + 0x2c) & 1) != 0) {
      (**(code **)(*param_1 + 0x100))();
    }
    if ((*(byte *)(param_1[0x9c] + 0x2c) & 8) != 0) {
      (**(code **)(*param_1 + 0x100))();
    }
    if ((*(byte *)(param_1[0x9c] + 0x2c) & 4) != 0) {
      (**(code **)(*param_1 + 0x100))();
    }
    if ((*(byte *)(param_1[0x9c] + 0x2c) & 2) != 0) {
      (**(code **)(*param_1 + 0x100))();
    }
    (**(code **)(*(int *)param_1[0xa2] + 0x14))();
    FUN_005f03a0();
    *in_FS_OFFSET = uStack_34;
    puVar1 = puStack_20;
  }
  puStack_20 = puVar1;
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_005ed8c4;
  puStack_24 = (undefined1 *)0x5ed8b4;
  FUN_0040b268(local_c,uStack_28,puVar1);
  puStack_24 = (undefined1 *)0x5ed8bc;
  FUN_0040b268(local_c + 1);
  return;
}
