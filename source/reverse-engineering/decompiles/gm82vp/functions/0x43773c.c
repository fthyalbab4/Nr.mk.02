// rea decompile_all
// name: FUN_0043773c
// address: 0x43773c
// body: available
// range: 0x43773c-0x4377e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x437759 (push 0x4377e2 followed by fs-segment stack chaining); handler 0x4377e2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043773c(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined1 local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  puStack_24 = &LAB_004377e2;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_00405eb4(param_2,&local_8);
  iVar2 = FUN_004375e8(param_1,local_8);
  if ((iVar2 != 0) && (param_2 != iVar2)) {
    local_10 = local_8;
    local_c = 0x11;
    FUN_0041bf50(&LAB_0042d580,1,PTR_LAB_006891cc,0,&local_10);
    FUN_00406ab4();
  }
  if (*(int *)(param_1 + 4) == 0) {
    uVar3 = FUN_0043c790(&PTR_FUN_00430700,1);
    *(undefined4 *)(param_1 + 4) = uVar3;
    FUN_0043c6cc(uVar3,1);
  }
  (**(code **)(**(int **)(param_1 + 4) + 0x3c))(*(int **)(param_1 + 4),local_8,param_2);
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004377e9;
  puStack_24 = (undefined1 *)0x4377e1;
  thunk_FUN_004072d8(&local_8,uStack_28,puVar1);
  return;
}
