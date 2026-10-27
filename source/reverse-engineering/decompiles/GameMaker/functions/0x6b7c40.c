// rea decompile_all
// name: FUN_006b7c40
// address: 0x6b7c40
// body: available
// range: 0x6b7c40-0x6b7cfc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6b7c64 (push 0x6b7cfd followed by fs-segment stack chaining); handler 0x6b7cfd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b7c40(int param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  undefined4 local_8;

  puStack_1c = (undefined1 *)0x6b7c59;
  local_8 = param_3;
  thunk_FUN_00407660(param_3);
  puStack_20 = &LAB_006b7cfd;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_c = param_2;
  if (param_2 < 0) {
    local_c = 0;
  }
  puStack_1c = &stack0xfffffffc;
  iVar2 = FUN_00409a18(*(undefined4 *)(param_1 + 0x2d8));
  FUN_00409be0(param_1 + 0x2d8,&DAT_006aef44,1,iVar2 + 1);
  iVar2 = FUN_00409a18(*(undefined4 *)(param_1 + 0x2d8));
  iVar2 = iVar2 + -2;
  if (local_c - iVar2 == 0 || local_c < iVar2) {
    iVar3 = (local_c - iVar2) + -1;
    do {
      FUN_00409084(*(int *)(param_1 + 0x2d8) + 0x10 + iVar2 * 0x10,
                   *(int *)(param_1 + 0x2d8) + iVar2 * 0x10,&DAT_006aed08);
      iVar2 = iVar2 + -1;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0);
  }
  FUN_006b7a68(param_1,local_c,local_8);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_006b7d04;
  puStack_20 = (undefined1 *)0x6b7cfc;
  thunk_FUN_00406e5c(&local_8,uStack_24,puVar1);
  return;
}
