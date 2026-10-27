// rea decompile_all
// name: FUN_006c5ec0
// address: 0x6c5ec0
// body: available
// range: 0x6c5ec0-0x6c5f88 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6c5ed5 (push 0x6c5f89 followed by fs-segment stack chaining); handler 0x6c5f89 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c5ec0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  char cVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_006c5f89;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  *(undefined1 *)(param_1 + 0x8188) = 1;
  iVar5 = FUN_0071c7c4(1,L"<no parent>");
  *(undefined1 *)(param_1 + 0x8188) = 0;
  if (-2 < iVar5) {
    iVar1 = *(int *)(param_1 + 0x45c);
    iVar2 = *(int *)(iVar1 + 0x14);
    if (iVar5 != iVar2) {
      *(int *)(iVar1 + 0x14) = iVar5;
      cVar4 = FUN_00704ec4(iVar1);
      if (cVar4 != '\0') {
        FUN_004d43f8(L"This will create a loop in parents.");
        *(int *)(*(int *)(param_1 + 0x45c) + 0x14) = iVar2;
      }
      iVar5 = *(int *)(*(int *)(param_1 + 0x45c) + 0x14);
      if (iVar5 < 0) {
        FUN_004ee6d8(*(undefined4 *)(param_1 + 0x420),L"<no parent>");
      }
      else {
        FUN_0062cabc(iVar5,&local_8);
        FUN_004ee6d8(*(undefined4 *)(param_1 + 0x420),local_8);
      }
      FUN_0062cd2c(*(undefined4 *)(param_1 + 0x46c));
      *(undefined1 *)(param_1 + 0x468) = 1;
    }
  }
  puVar3 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_006c5f90;
  puStack_1c = (undefined1 *)0x6c5f88;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar3);
  return;
}
