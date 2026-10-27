// rea decompile_all
// name: FUN_004f3cf4
// address: 0x4f3cf4
// body: available
// range: 0x4f3cf4-0x4f3d77 inclusive
// range: 0x4f3d7f-0x4f3db9 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f3d42 (push 0x4f3d78 followed by fs-segment stack chaining); handler 0x4f3d78 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f3cf4(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  puStack_14 = &stack0xfffffffc;
  iVar3 = param_1;
  while (iVar1 = *(int *)(iVar3 + 0x34), iVar1 != 0) {
    iVar3 = iVar1;
    if (*(char *)(iVar1 + 0x1ea) == '\0') {
      if ((*(char *)(param_1 + 0x1ea) != '\0') && (*(char *)(param_1 + 0x1ef) == '\0')) {
        *(undefined1 *)(param_1 + 0x1ef) = 1;
        puStack_18 = &LAB_004f3d78;
        uStack_1c = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_1c;
        *(undefined1 *)(param_1 + 0x1ea) = 0;
        FUN_004efb90(param_1,0xb019,0,0);
        *in_FS_OFFSET = uStack_1c;
        *(undefined1 *)(param_1 + 0x1ef) = 0;
        return;
      }
      return;
    }
  }
  puStack_14 = (undefined1 *)0x4f3d97;
  cVar2 = FUN_00405c98(iVar3,&PTR_LAB_0050d694);
  if (cVar2 == '\0') {
    if ((*(byte *)(param_1 + 0x1c) & 8) != 0) {
      return;
    }
    if (*(int *)(iVar3 + 0x1d4) == 0) {
      return;
    }
  }
  puStack_14 = (undefined1 *)0x4f3db5;
  FUN_004f3b94(param_1);
  return;
}
