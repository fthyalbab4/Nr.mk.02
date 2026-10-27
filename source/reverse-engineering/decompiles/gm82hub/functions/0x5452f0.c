// rea decompile_all
// name: FUN_005452f0
// address: 0x5452f0
// body: available
// range: 0x5452f0-0x545371 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x545304 (push 0x545372 followed by fs-segment stack chaining); handler 0x545372 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005452f0(int param_1)

{
  undefined1 *puVar1;
  LPWSTR lpFilename;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  DWORD DVar5;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_00545372;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 8) + -1;
  puVar1 = &stack0xfffffffc;
  if (-1 < iVar4) {
    do {
      FUN_00408520(&local_8,0x400);
      DVar5 = 0x400;
      lpFilename = (LPWSTR)FUN_00408220(local_8);
      iVar2 = FUN_005452dc(param_1,iVar4);
      DVar5 = GetModuleFileNameW(*(HMODULE *)(iVar2 + 4),lpFilename,DVar5);
      if (DVar5 == 0) {
        uVar3 = FUN_005452dc(param_1,iVar4);
        FUN_00545284(param_1,uVar3);
      }
      iVar4 = iVar4 + -1;
      puVar1 = puStack_14;
    } while (iVar4 != -1);
  }
  puStack_14 = puVar1;
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00545379;
  puStack_18 = (undefined1 *)0x545371;
  thunk_FUN_004072d8(&local_8,uStack_1c,puVar1);
  return;
}
