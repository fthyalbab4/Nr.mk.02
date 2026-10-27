// rea decompile_all
// name: FUN_00660edc
// address: 0x660edc
// body: available
// range: 0x660edc-0x661103 inclusive
// range: 0x66115c-0x661164 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x660fad (push 0x661104 followed by fs-segment stack chaining); handler 0x661104 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00660edc(int *param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;

  if (((*(char *)((int)param_1 + 0x31a) == '\0') || (param_2 == (int *)0x0)) || (param_3 == 0)) {
    return 0;
  }
  puStack_1c = (undefined1 *)0x660f21;
  iVar4 = FUN_0044dd7c(param_1[0xe1]);
  if (iVar4 == 0) {
    return 0;
  }
  puStack_1c = (undefined1 *)0x660f37;
  iVar4 = FUN_00660100(param_1[0xe1]);
  if (*(int *)(iVar4 + 0x328) != param_3) {
    if (*(int *)(param_3 + 0x1b4) == 0) {
      return 0;
    }
    puStack_1c = (undefined1 *)0x660f64;
    FUN_0067236c(*(undefined4 *)(param_3 + 0x1b4));
    puStack_1c = (undefined1 *)0x660f69;
    iVar4 = FUN_00673010();
    if (iVar4 != 0) {
      puStack_1c = (undefined1 *)0x660f7f;
      (**(code **)(*param_1 + 0x19c))(param_1,param_3);
      param_1[0xc4] = 0;
      puStack_1c = (undefined1 *)0x660f95;
      piVar5 = (int *)(**(code **)(*param_1 + 0x1b0))();
      *(short *)(piVar5 + 0x6b) = (short)piVar5[0x6b] + 1;
      puStack_20 = &LAB_00661104;
      uStack_24 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_24;
      puStack_1c = &stack0xfffffffc;
      uVar6 = FUN_00677f54(param_1);
      (**(code **)(*piVar5 + 0x148))(piVar5,uVar6);
      iVar4 = FUN_00677f54(piVar5);
      FUN_004ee858(piVar5,*(undefined4 *)(iVar4 + 0x78));
      piVar5[0xcf] = param_1[0xcf];
      *(char *)(piVar5 + 0xa3) = (char)param_1[0xa3];
      *(int **)(*(int *)(param_3 + 0x1b4) + 0x18) = piVar5;
      (**(code **)(*(int *)piVar5[0x19] + 8))((int *)piVar5[0x19],param_1[0x19]);
      FUN_00662538(piVar5,param_2);
      *(undefined1 *)((int)piVar5 + 0x31a) = 1;
      piVar5[0xca] = param_3;
      uVar1 = *(undefined1 *)(*(int *)(param_3 + 0x1b4) + 0x30);
      (**(code **)(*piVar5 + 0x140))(piVar5,*(int *)(param_3 + 0x1b4));
      (**(code **)(**(int **)(param_3 + 0x1b4) + 0x2c))(*(int **)(param_3 + 0x1b4),uVar1);
      if (((*(char *)((int)param_1 + 0x319) == '\0') &&
          (cVar3 = (**(code **)(*param_1 + 0x120))(), cVar3 == '\0')) &&
         ((iVar4 = FUN_006762e4(piVar5), iVar4 != 0 &&
          (iVar4 = FUN_0067236c(*(undefined4 *)(param_3 + 0x1b4)), *(char *)(iVar4 + 0x2a) != '\0'))
         )) {
        cVar3 = '\0';
      }
      else {
        cVar3 = '\x01';
      }
      *(char *)((int)piVar5 + 0x319) = cVar3;
      if (cVar3 != '\0') {
        (**(code **)(*piVar5 + 0x1a4))(piVar5,0);
      }
      FUN_004f3de8(piVar5,*(undefined4 *)(*(int *)PTR_DAT_00782280 + 0x170));
      uVar6 = (**(code **)(*param_2 + 0x120))();
      (**(code **)(*piVar5 + 0x14c))(piVar5,uVar6);
      puVar2 = puStack_1c;
      *in_FS_OFFSET = uStack_24;
      puStack_1c = &DAT_0066110b;
      puStack_20 = (undefined1 *)0x661103;
      uVar6 = FUN_004f2c1c(piVar5,uStack_24,puVar2);
      return uVar6;
    }
    return 0;
  }
  return 0;
}
