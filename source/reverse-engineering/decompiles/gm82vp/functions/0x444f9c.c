// rea decompile_all
// name: FUN_00444f9c
// address: 0x444f9c
// body: available
// range: 0x444f9c-0x4450c1 inclusive
// range: 0x4450e9-0x445100 inclusive
// range: 0x44513c-0x44515e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x44500b (push 0x44517e followed by fs-segment stack chaining); handler 0x44517e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x44502a (push 0x44515f followed by fs-segment stack chaining); handler 0x44515f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x445080 (push 0x445101 followed by fs-segment stack chaining); handler 0x445101 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x44508e (push 0x4450c2 followed by fs-segment stack chaining); handler 0x4450c2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00444f9c(int param_1)

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
  if (DVar3 != *(DWORD *)PTR_DAT_00689680) {
    GetCurrentThreadId();
    puStack_2c = (undefined1 *)0x0;
    uStack_30 = 0x444fda;
    FUN_0041bf50(&LAB_00434c40,1,PTR_LAB_00689178);
    uStack_30 = 0x444fdf;
    FUN_00406ab4();
  }
  if (param_1 < 1) {
    FUN_00444f68();
  }
  else {
    FUN_00444f74(param_1);
  }
  puStack_2c = (undefined1 *)0x445000;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0068ef7c);
  puStack_2c = &LAB_0044517e;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  uStack_3c = 0x44501c;
  LVar4 = InterlockedExchange(&DAT_0067d0c4,0);
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  if ((LVar4 == 0) || (*(int *)(LVar4 + 8) < 1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((bVar2) && (0 < *(int *)(LVar4 + 8))) {
    piVar5 = (int *)FUN_00438ec4(LVar4,0);
    FUN_00438d5c(LVar4,0);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0068ef7c);
    uStackY_48 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_48;
    puStackY_50 = &LAB_004450c2;
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
    uStackY_48 = 0x445100;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0068ef7c);
    return;
  }
  *in_FS_OFFSET = uStack_3c;
  FUN_00405fdc(LVar4,uStack_3c,&stack0xfffffffc);
  return;
}
