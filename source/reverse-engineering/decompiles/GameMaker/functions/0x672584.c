// rea decompile_all
// name: FUN_00672584
// address: 0x672584
// body: available
// range: 0x672584-0x67266c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6725a2 (push 0x67266d followed by fs-segment stack chaining); handler 0x67266d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00672584(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  int *local_8;

  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_0067266d;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puVar3 = &stack0xfffffffc;
  local_8 = param_2;
  if (*(int **)(param_1 + 0xc) != param_2) {
    iVar4 = FUN_00672408(param_1);
    while (iVar4 != 0) {
      iVar1 = *(int *)(iVar4 + 0x20);
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      else if (*(int *)(iVar1 + 0xc) == 0) {
        iVar4 = FUN_00672408(iVar1);
      }
      else {
        FUN_0040b75c(PTR_PTR_007819e0,&local_c);
        FUN_0041beb8(&PTR_LAB_00410b4c,1,local_c);
        FUN_00406618();
      }
    }
    piVar2 = *(int **)(param_1 + 0xc);
    if ((piVar2 != (int *)0x0) && (piVar2[0x9e] != 0)) {
      (**(code **)(*piVar2 + 0xf4))();
    }
    if (local_8 != (int *)0x0) {
      FUN_00672408(param_1);
      iVar4 = FUN_00671654();
      if ((*(byte *)(iVar4 + 0x1c) & 1) == 0) {
        FUN_00672408(param_1);
        iVar4 = FUN_00671654();
        if (*(char *)(iVar4 + 0xa8) == '\0') {
          (**(code **)(*local_8 + 0x140))(local_8,param_1);
        }
      }
    }
    *(int **)(param_1 + 0xc) = local_8;
    puVar3 = puStack_1c;
  }
  puStack_1c = puVar3;
  puVar3 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00672674;
  puStack_20 = (undefined1 *)0x67266c;
  thunk_FUN_00406e5c(&local_c,uStack_24,puVar3);
  return;
}
