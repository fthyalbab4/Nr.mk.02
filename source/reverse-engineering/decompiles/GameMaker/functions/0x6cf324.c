// rea decompile_all
// name: FUN_006cf324
// address: 0x6cf324
// body: available
// range: 0x6cf324-0x6cf3fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6cf33e (push 0x6cf3fe followed by fs-segment stack chaining); handler 0x6cf3fe lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006cf324(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_10;
  undefined4 local_c;
  int local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_006cf3fe;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  uVar2 = FUN_00409a18(*(undefined4 *)(param_1 + 4));
  if (param_2 != uVar2) {
    if ((int)param_2 < 0) {
      FUN_0041beac();
    }
    FUN_00409d1c(&local_8,*(undefined4 *)(param_1 + 4),&DAT_005cc42c);
    FUN_00409be0(&local_c,&DAT_005cc42c,1,param_2);
    FUN_00409d1c(param_1 + 4,local_c,&DAT_005cc42c);
    *(uint *)(param_1 + 0x10) = (param_2 >> 1) + (param_2 >> 2);
    local_10 = FUN_00409a18(local_8);
    if (-1 < local_10 + -1) {
      iVar3 = 0;
      do {
        iVar1 = *(int *)(local_8 + iVar3 * 0xc);
        if (iVar1 != 0) {
          FUN_006cf4cc(param_1,iVar1,*(undefined4 *)(local_8 + 4 + iVar3 * 0xc),
                       *(undefined4 *)(local_8 + 8 + iVar3 * 0xc));
        }
        iVar3 = iVar3 + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_006cf405;
  puStack_20 = (undefined1 *)0x6cf3fd;
  FUN_00408e44(&local_c,&DAT_005cc42c,2);
  return;
}
