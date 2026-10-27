// rea decompile_all
// name: FUN_004922ac
// address: 0x4922ac
// body: available
// range: 0x4922ac-0x4923be inclusive
// range: 0x4923d6-0x49241f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x492374 (push 0x4923bf followed by fs-segment stack chaining); handler 0x4923bf lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004922ac(int param_1,int param_2)

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
      puStack_18 = (undefined1 *)0x4922d8;
      FUN_004c0aa8(param_1);
    }
    puStack_18 = (undefined1 *)0x4922e1;
    FUN_00491bb8(param_1,1);
    if (*(int *)(param_1 + 0x364) != 0) {
      puStack_18 = (undefined1 *)0x4922f1;
      iVar2 = FUN_00491c34(param_1);
      iVar2 = iVar2 + -1;
      if (-1 < iVar2) {
        do {
          puStack_18 = (undefined1 *)0x492302;
          FUN_00491c1c(param_1,iVar2);
          puStack_18 = (undefined1 *)0x492307;
          FUN_00405fdc();
          iVar2 = iVar2 + -1;
        } while (iVar2 != -1);
      }
    }
    if (*(int *)(param_1 + 0x364) != 0) {
      puStack_18 = (undefined1 *)0x49231e;
      FUN_00446458(*(int *)(param_1 + 0x364),param_1);
    }
    *(int *)(param_1 + 0x364) = param_2;
    if (param_2 != 0) {
      puStack_18 = (undefined1 *)0x492335;
      FUN_00446174(param_2,param_1);
      puStack_18 = (undefined1 *)0x49233c;
      iVar2 = FUN_00491c34(param_1);
      puStack_18 = (undefined1 *)0x49234c;
      iVar3 = FUN_004a8eb8(*(undefined4 *)(*(int *)(param_1 + 0x364) + 0x38));
      if (iVar2 <= iVar3 + -1) {
        iVar3 = ((iVar3 + -1) - iVar2) + 1;
        do {
          puStack_18 = (undefined1 *)0x492366;
          piVar4 = (int *)FUN_0048f908(&PTR_LAB_00488b04,1,param_1);
          puStack_1c = &LAB_004923bf;
          uStack_20 = *in_FS_OFFSET;
          *in_FS_OFFSET = &uStack_20;
          puStack_18 = &stack0xfffffffc;
          (**(code **)(*piVar4 + 0x6c))(piVar4,1);
          FUN_004902c4(piVar4,1);
          (**(code **)(*piVar4 + 0x78))(piVar4,param_1);
          uVar5 = FUN_004a8ec8(*(undefined4 *)(*(int *)(param_1 + 0x364) + 0x38),iVar2);
          uVar6 = FUN_00491c1c(param_1,iVar2);
          FUN_004903ec(uVar6,uVar5);
          *in_FS_OFFSET = uStack_20;
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      puStack_18 = (undefined1 *)0x4923ec;
      iVar2 = FUN_004a8eb8(*(undefined4 *)(*(int *)(param_1 + 0x364) + 0x38));
      if (-1 < iVar2 + -1) {
        iVar3 = 0;
        do {
          puStack_18 = (undefined1 *)0x492406;
          puStack_18 = (undefined1 *)
                       FUN_004a8ec8(*(undefined4 *)(*(int *)(param_1 + 0x364) + 0x38),iVar3);
          puStack_1c = (undefined1 *)0x492410;
          uVar5 = FUN_00491c1c(param_1,iVar3);
          puVar1 = puStack_18;
          puStack_18 = (undefined1 *)0x492416;
          FUN_004903ec(uVar5,puVar1);
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
  }
  return;
}
