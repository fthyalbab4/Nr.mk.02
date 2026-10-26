// rea decompile_all
// name: FUN_007120dc
// address: 0x7120dc
// body: available
// range: 0x7120dc-0x7121b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x7120f0 (push 0x7121b6 followed by fs-segment stack chaining); handler 0x7121b6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_007120dc(void)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_007121b6;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  (**(code **)(**(int **)(*(int *)(DAT_00790a08 + 0x394) + 0x280) + 0x44))();
  (**(code **)(**(int **)(*(int *)(DAT_00790a08 + 0x39c) + 0x280) + 0x44))();
  iVar4 = FUN_007132f8();
  if (-1 < iVar4 + -1) {
    iVar5 = 0;
    do {
      cVar3 = FUN_007132a4(iVar5);
      if (cVar3 == '\0') {
LAB_00712169:
        cVar3 = FUN_007132cc(iVar5);
        if (cVar3 == '\0') {
          FUN_00713320(iVar5,&local_c);
          piVar1 = *(int **)(*(int *)(DAT_00790a08 + 0x39c) + 0x280);
          (**(code **)(*piVar1 + 0x38))(piVar1,local_c);
        }
      }
      else {
        cVar3 = FUN_007132cc(iVar5);
        if (cVar3 != '\0') goto LAB_00712169;
        FUN_00713320(iVar5,&local_8);
        piVar1 = *(int **)(*(int *)(DAT_00790a08 + 0x394) + 0x280);
        (**(code **)(*piVar1 + 0x38))(piVar1,local_8);
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar2 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_007121bd;
  puStack_1c = (undefined1 *)0x7121b5;
  thunk_FUN_00406e80(&local_c,2,puVar2);
  return;
}
