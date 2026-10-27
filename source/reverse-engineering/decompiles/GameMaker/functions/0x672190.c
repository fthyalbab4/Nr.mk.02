// rea decompile_all
// name: FUN_00672190
// address: 0x672190
// body: available
// range: 0x672190-0x672268 inclusive
// range: 0x672270-0x67227e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6721cc (push 0x672269 followed by fs-segment stack chaining); handler 0x672269 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00672190(int *param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  puStack_14 = (undefined1 *)0x6721a8;
  cVar2 = FUN_00405c98(param_2,&LAB_0066a37c);
  if (cVar2 != '\0') {
    if ((int *)param_1[1] != (int *)0x0) {
      puStack_14 = (undefined1 *)0x6721c1;
      (**(code **)(*(int *)param_1[1] + 0x20))();
    }
    puStack_18 = &LAB_00672269;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    puStack_14 = &stack0xfffffffc;
    (**(code **)(*param_1 + 0x28))(param_1,*(undefined4 *)(param_2 + 0x24));
    if (*(int *)(param_2 + 0x1c) != 0) {
      piVar3 = (int *)FUN_00672300(param_1);
      (**(code **)(*piVar3 + 8))(piVar3,*(undefined4 *)(param_2 + 0x1c));
    }
    cVar2 = FUN_0067240c(param_2);
    if (cVar2 != '\0') {
      uVar4 = FUN_006722e0(param_2);
      piVar3 = (int *)FUN_006722e0(param_1);
      (**(code **)(*piVar3 + 8))(piVar3,uVar4);
    }
    FUN_0067271c(param_1,*(undefined1 *)(param_2 + 0x14));
    (**(code **)(*param_1 + 0x2c))(param_1,*(undefined1 *)(param_2 + 0x30));
    if (*(int *)(param_2 + 0x2c) != 0) {
      piVar3 = (int *)FUN_0067236c(param_1);
      (**(code **)(*piVar3 + 8))(piVar3,*(undefined4 *)(param_2 + 0x2c));
    }
    FUN_00672584(param_1,*(undefined4 *)(param_2 + 0xc));
    puVar1 = puStack_14;
    *in_FS_OFFSET = uStack_1c;
    puStack_14 = (undefined1 *)0x67227a;
    piVar3 = (int *)param_1[1];
    if (piVar3 != (int *)0x0) {
      puStack_18 = (undefined1 *)0x672268;
      (**(code **)(*piVar3 + 0x24))(piVar3,*piVar3,puVar1);
    }
    return;
  }
  puStack_14 = (undefined1 *)0x67227a;
  FUN_0043c550(param_1,param_2);
  return;
}
