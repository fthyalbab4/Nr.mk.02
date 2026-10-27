// rea decompile_all
// name: FUN_006cc16c
// address: 0x6cc16c
// body: available
// range: 0x6cc16c-0x6cc227 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6cc184 (push 0x6cc228 followed by fs-segment stack chaining); handler 0x6cc228 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006cc16c(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_10;
  int local_c;
  int local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_20 = &LAB_006cc228;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  uVar3 = FUN_006cc6e4();
  FUN_006cc9c4(uVar3);
  FUN_006cc81c(uVar3,&local_8);
  if (local_8 == 0) {
    iVar4 = FUN_006cc9a8(uVar3);
    if (*(int *)(iVar4 + 0x10) == 0) {
      FUN_006cc76c(uVar3);
      goto LAB_006cc20d;
    }
  }
  FUN_006cc81c(uVar3,&local_c);
  if (local_c == 0) {
    iVar4 = FUN_006cc9a8(uVar3);
    FUN_00407eb8(iVar4 + 4,L"no_name");
  }
  FUN_006cc81c(uVar3,&local_10);
  piVar1 = *(int **)(*(int *)(param_1 + 0x390) + 0x280);
  (**(code **)(*piVar1 + 0x38))(piVar1,local_10);
  (**(code **)(**(int **)(param_1 + 0x390) + 0xf0))(*(int **)(param_1 + 0x390),uVar3);
LAB_006cc20d:
  puVar2 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_006cc22f;
  puStack_20 = (undefined1 *)0x6cc227;
  thunk_FUN_00406e80(&local_10,3,puVar2);
  return;
}
