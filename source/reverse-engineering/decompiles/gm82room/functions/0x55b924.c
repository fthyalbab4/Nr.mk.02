// rea decompile_all
// name: FUN_0055b924
// address: 0x55b924
// body: available
// range: 0x55b924-0x55b9ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x55b946 (push 0x55b9eb followed by fs-segment stack chaining); handler 0x55b9eb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055b924(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined1 local_11;
  int local_10;
  int local_c;
  undefined4 local_8;

  puStack_28 = &stack0xfffffffc;
  local_18 = 0;
  local_8 = 0;
  puStack_2c = &LAB_0055b9eb;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_11 = 0;
  local_10 = param_2;
  local_c = param_1;
  while( true ) {
    cVar2 = FUN_0055b774();
    if (cVar2 != '\0') break;
    FUN_0055b7a8(&local_18);
    FUN_00415c04(local_18,&local_8,param_4);
    iVar4 = 0;
    for (iVar5 = 0; iVar5 <= local_10; iVar5 = iVar5 + 1) {
      iVar3 = FUN_00408d44(*(undefined4 *)(local_c + iVar5 * 4),local_8);
      if (iVar3 <= iVar4) {
        iVar4 = 0;
        break;
      }
      iVar4 = iVar3;
    }
    local_11 = iVar4 != 0;
    if ((bool)local_11) break;
    FUN_0055b748();
  }
  cVar2 = FUN_0055b774();
  if (cVar2 == '\0') {
    FUN_0055b728();
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0055b9f2;
  puStack_2c = (undefined1 *)0x55b9e2;
  thunk_FUN_004072d8(&local_18,uStack_30,puVar1);
  puStack_2c = (undefined1 *)0x55b9ea;
  thunk_FUN_004072d8(&local_8);
  return;
}
