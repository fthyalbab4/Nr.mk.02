// rea decompile_all
// name: FUN_00447d90
// address: 0x447d90
// body: available
// range: 0x447d90-0x447eb5 inclusive
// range: 0x447edd-0x447ef4 inclusive
// range: 0x447f30-0x447f52 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x447dff (push 0x447f72 followed by fs-segment stack chaining); handler 0x447f72 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x447e1e (push 0x447f53 followed by fs-segment stack chaining); handler 0x447f53 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x447e74 (push 0x447ef5 followed by fs-segment stack chaining); handler 0x447ef5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x447e82 (push 0x447eb6 followed by fs-segment stack chaining); handler 0x447eb6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00447d90(int param_1)

{
  int iVar1;
  bool bVar2;
  DWORD DVar3;
  LONG LVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_54;
  undefined1 *puStackY_50;
  undefined1 *puStackY_4c;
  undefined4 uStackY_48;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined1 *puStack_2c;

  DVar3 = GetCurrentThreadId();
  if (DVar3 != *(DWORD *)PTR_DAT_0078296c) {
    GetCurrentThreadId();
    puStack_2c = (undefined1 *)0x0;
    uStack_30 = 0x447dce;
    FUN_0041c0bc(&PTR_LAB_00436d94,1,PTR_PTR_0078227c);
    uStack_30 = 0x447dd3;
    FUN_00406618();
  }
  if (param_1 < 1) {
    FUN_00447d5c();
  }
  else {
    FUN_00447d68(param_1);
  }
  puStack_2c = (undefined1 *)0x447df4;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00787f7c);
  puStack_2c = &LAB_00447f72;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  uStack_3c = 0x447e10;
  LVar4 = InterlockedExchange(&DAT_007740a8,0);
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  if ((LVar4 == 0) || (*(int *)(LVar4 + 8) < 1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((bVar2) && (0 < *(int *)(LVar4 + 8))) {
    piVar5 = (int *)FUN_0043b048(LVar4,0);
    FUN_0043aee0(LVar4,0);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00787f7c);
    uStackY_48 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_48;
    puStackY_50 = &LAB_00447eb6;
    uStackY_54 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_54;
    iVar1 = *piVar5;
    if (*(short *)(iVar1 + 10) == 0) {
      puStackY_4c = &stack0xfffffffc;
      if (*(int *)(iVar1 + 0x10) != 0) {
        puStackY_4c = &stack0xfffffffc;
        (**(code **)(**(int **)(*piVar5 + 0x10) + 0xc))();
      }
    }
    else {
      puStackY_4c = &stack0xfffffffc;
      (**(code **)(iVar1 + 8))(*(undefined4 *)(iVar1 + 0xc));
    }
    *in_FS_OFFSET = uStackY_54;
    *in_FS_OFFSET = uStackY_48;
    uStackY_48 = 0x447ef4;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00787f7c);
    return;
  }
  *in_FS_OFFSET = uStack_3c;
  FUN_00405a7c(LVar4,uStack_3c,&stack0xfffffffc);
  return;
}
