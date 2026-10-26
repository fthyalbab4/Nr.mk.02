// rea decompile_all
// name: FUN_004c2298
// address: 0x4c2298
// body: available
// range: 0x4c2298-0x4c23aa inclusive
// range: 0x4c23c2-0x4c240b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c2360 (push 0x4c23ab followed by fs-segment stack chaining); handler 0x4c23ab lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c2298(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;

  if (param_2 != *(int *)(param_1 + 0x364)) {
    if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
      *(undefined4 *)(param_1 + 0x50) = 0x2100aa;
      puStack_18 = (undefined1 *)0x4c22c4;
      FUN_004f3af0(param_1);
    }
    puStack_18 = (undefined1 *)0x4c22cd;
    FUN_004c1ba4(param_1,1);
    if (*(int *)(param_1 + 0x364) != 0) {
      puStack_18 = (undefined1 *)0x4c22dd;
      iVar2 = FUN_004c1c20(param_1);
      iVar2 = iVar2 + -1;
      if (-1 < iVar2) {
        do {
          puStack_18 = (undefined1 *)0x4c22ee;
          FUN_004c1c08(param_1,iVar2);
          puStack_18 = (undefined1 *)0x4c22f3;
          FUN_00405a7c();
          iVar2 = iVar2 + -1;
        } while (iVar2 != -1);
      }
    }
    if (*(int *)(param_1 + 0x364) != 0) {
      puStack_18 = (undefined1 *)0x4c230a;
      FUN_0044924c(*(int *)(param_1 + 0x364),param_1);
    }
    *(int *)(param_1 + 0x364) = param_2;
    if (param_2 != 0) {
      puStack_18 = (undefined1 *)0x4c2321;
      FUN_00448f68(param_2,param_1);
      puStack_18 = (undefined1 *)0x4c2328;
      iVar2 = FUN_004c1c20(param_1);
      puStack_18 = (undefined1 *)0x4c2338;
      iVar3 = FUN_004dbe08(*(undefined4 *)(*(int *)(param_1 + 0x364) + 0x38));
      if (iVar2 <= iVar3 + -1) {
        iVar3 = ((iVar3 + -1) - iVar2) + 1;
        do {
          puStack_18 = (undefined1 *)0x4c2352;
          piVar4 = (int *)FUN_004bf8f4(&PTR_LAB_004a4a78,1,param_1);
          puStack_1c = &LAB_004c23ab;
          uStack_20 = *in_FS_OFFSET;
          *in_FS_OFFSET = &uStack_20;
          puStack_18 = &stack0xfffffffc;
          (**(code **)(*piVar4 + 0x6c))(piVar4,1);
          FUN_004c02b0(piVar4,1);
          (**(code **)(*piVar4 + 0x78))(piVar4,param_1);
          uVar5 = FUN_004dbe18(*(undefined4 *)(*(int *)(param_1 + 0x364) + 0x38),iVar2);
          uVar6 = FUN_004c1c08(param_1,iVar2);
          FUN_004c03d8(uVar6,uVar5);
          *in_FS_OFFSET = uStack_20;
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      puStack_18 = (undefined1 *)0x4c23d8;
      iVar2 = FUN_004dbe08(*(undefined4 *)(*(int *)(param_1 + 0x364) + 0x38));
      if (-1 < iVar2 + -1) {
        iVar3 = 0;
        do {
          puStack_18 = (undefined1 *)0x4c23f2;
          puStack_18 = (undefined1 *)
                       FUN_004dbe18(*(undefined4 *)(*(int *)(param_1 + 0x364) + 0x38),iVar3);
          puStack_1c = (undefined1 *)0x4c23fc;
          uVar5 = FUN_004c1c08(param_1,iVar3);
          puVar1 = puStack_18;
          puStack_18 = (undefined1 *)0x4c2402;
          FUN_004c03d8(uVar5,puVar1);
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
  }
  return;
}
