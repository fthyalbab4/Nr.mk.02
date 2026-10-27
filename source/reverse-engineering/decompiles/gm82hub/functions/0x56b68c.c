// rea decompile_all
// name: FUN_0056b68c
// address: 0x56b68c
// body: available
// range: 0x56b68c-0x56b7f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x56b6a1 (push 0x56b7f1 followed by fs-segment stack chaining); handler 0x56b7f1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056b68c(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0056b7f1;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = &stack0xfffffffc;
  if ((((*(int *)PTR_DAT_00689570 != 0) &&
       (cVar2 = FUN_0056b4d0(param_1), puVar1 = puStack_18, cVar2 != '\0')) &&
      (param_1 != DAT_006869b0)) &&
     (FUN_006212f8(*(undefined4 *)(DAT_0084527c + param_1 * 0x14),&local_8), puVar1 = puStack_18,
     local_8 != 0)) {
    if (-1 < DAT_006869b0) {
      FUN_0056b800();
    }
    FUN_0040b268(&DAT_006869a8);
    uVar3 = (**(code **)(**(int **)PTR_DAT_00689570 + 0x80))();
    puVar1 = puStack_18;
    if ((uVar3 & 0x80000000) == 0) {
      FUN_0040b268(&DAT_006869ac);
      uVar3 = (**(code **)(**(int **)PTR_DAT_00689570 + 0x84))();
      puVar1 = puStack_18;
      if (((uVar3 & 0x80000000) == 0) &&
         (uVar3 = (**(code **)(**(int **)PTR_DAT_00689570 + 0x7c))(), puVar1 = puStack_18,
         (uVar3 & 0x80000000) == 0)) {
        FUN_0061fc50(0,0,*(undefined4 *)(DAT_0084527c + 4 + param_1 * 0x14),
                     *(undefined4 *)(DAT_0084527c + 8 + param_1 * 0x14));
        FUN_0061fc94();
        DAT_006869b0 = param_1;
        puVar1 = puStack_18;
      }
    }
  }
  puStack_18 = puVar1;
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0056b7f8;
  puStack_1c = (undefined1 *)0x56b7f0;
  FUN_0040b268(&local_8,uStack_20,puVar1);
  return;
}
