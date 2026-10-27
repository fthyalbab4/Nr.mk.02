// rea decompile_all
// name: FUN_004bebc8
// address: 0x4bebc8
// body: available
// range: 0x4bebc8-0x4bece1 inclusive
// range: 0x4becf3-0x4becf9 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4bec1f (push 0x4bece2 followed by fs-segment stack chaining); handler 0x4bece2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bebc8(int *param_1,int param_2)

{
  int iVar1;
  int nSavedDC;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  undefined1 *puVar5;

  puVar5 = &stack0xfffffffc;
  if (param_1[0x9e] != 0) {
    iVar1 = *(int *)(param_2 + 8);
    uVar3 = (uint)*(ushort *)(iVar1 + 0x10);
    nSavedDC = SaveDC(*(HDC *)(iVar1 + 0x18));
    FUN_0045be3c(param_1[0x9e]);
    uVar4 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffd4;
    FUN_0045ceb4(param_1[0x9e],*(undefined4 *)(iVar1 + 0x18));
    FUN_0045cd20(param_1[0x9e],param_1[0x19]);
    FUN_0045cd3c(param_1[0x9e],param_1[0x70]);
    if (*(int *)(iVar1 + 8) == -1) {
      (**(code **)(*(int *)param_1[0x9e] + 0x4c))((int *)param_1[0x9e],iVar1 + 0x1c);
    }
    else {
      uVar2 = FUN_004b9534(param_1[0xa7],*(int *)(iVar1 + 8));
      (**(code **)(*param_1 + 0x134))(param_1,uVar2,iVar1 + 0x1c,uVar3);
    }
    *in_FS_OFFSET = uVar4;
    FUN_0045ceb4(param_1[0x9e],0,puVar5);
    FUN_0045bf40(param_1[0x9e]);
    RestoreDC(*(HDC *)(iVar1 + 0x18),nSavedDC);
    return;
  }
  return;
}
