// rea decompile_all
// name: FUN_0064f248
// address: 0x64f248
// body: available
// range: 0x64f248-0x64f2ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x64f25c (push 0x64f2ed followed by fs-segment stack chaining); handler 0x64f2ed lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064f248(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int *local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  puStack_18 = &LAB_0064f2ed;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puVar1 = &stack0xfffffffc;
  if ((((-1 < param_1) && (puVar1 = &stack0xfffffffc, param_1 < DAT_0077f2ac)) &&
      (puVar1 = &stack0xfffffffc, *(char *)(DAT_0078a1ac + param_1 * 0x14) != '\0')) &&
     (puVar1 = &stack0xfffffffc, *(int *)(DAT_0078a1ac + 4 + param_1 * 0x14) != 3)) {
    FUN_0040b140(&local_8);
    uVar2 = (**(code **)(**(int **)(DAT_0078a1ac + 0xc + param_1 * 0x14) + 0xc))();
    puVar1 = puStack_14;
    if ((uVar2 & 0x80000000) == 0) {
      FUN_00404878();
      (**(code **)(*local_8 + 0x40))();
      puVar1 = puStack_14;
    }
  }
  puStack_14 = puVar1;
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0064f2f4;
  puStack_18 = (undefined1 *)0x64f2ec;
  FUN_0040b140(&local_8,uStack_1c,puVar1);
  return;
}
