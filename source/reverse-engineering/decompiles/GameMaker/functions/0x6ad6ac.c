// rea decompile_all
// name: FUN_006ad6ac
// address: 0x6ad6ac
// body: available
// range: 0x6ad6ac-0x6ad6ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6ad6c0 (push 0x6ad6ee followed by fs-segment stack chaining); handler 0x6ad6ee lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ad6ac(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_18 [12];

  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_18;
  iVar2 = param_3 + 1;
  while (iVar3 = iVar2, *(int *)(*(int *)(param_2 + 4) + iVar3 * 0xc) == 7) {
    iVar2 = iVar3 + 1;
    if (*(int *)(*(int *)(param_2 + 4) + (iVar3 + 1) * 0xc) == 0x6d) {
      iVar2 = iVar3 + 2;
    }
  }
  *in_FS_OFFSET = uVar1;
  return;
}
