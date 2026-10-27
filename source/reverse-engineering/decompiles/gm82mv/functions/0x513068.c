// rea decompile_all
// name: FUN_00513068
// address: 0x513068
// body: available
// range: 0x513068-0x513150 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x51307c (push 0x513151 followed by fs-segment stack chaining); handler 0x513151 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00513068(int param_1)

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
  puStack_18 = &LAB_00513151;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puVar1 = &stack0xfffffffc;
  if (DAT_0068fda8 == '\0') {
    puVar1 = &stack0xfffffffc;
    if (DAT_006840ac == 0) {
      FUN_0051162c(DAT_0068fda4,1);
      puVar1 = puStack_14;
    }
    puStack_14 = puVar1;
    puVar1 = puStack_14;
    if ((((-1 < param_1) && (param_1 < DAT_006840b4)) &&
        (*(char *)(DAT_0068fda0 + param_1 * 0x14) != '\0')) &&
       (*(int *)(DAT_0068fda0 + 4 + param_1 * 0x14) == 2)) {
      FUN_0040b268(&local_8);
      uVar2 = (**(code **)(**(int **)(DAT_0068fda0 + 0xc + param_1 * 0x14) + 0xc))();
      puVar1 = puStack_14;
      if (((uVar2 & 0x80000000) == 0) && (local_8 != (int *)0x0)) {
        (**(code **)(*local_8 + 0x50))();
        puVar1 = puStack_14;
      }
    }
  }
  puStack_14 = puVar1;
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00513158;
  puStack_18 = (undefined1 *)0x513150;
  FUN_0040b268(&local_8,uStack_1c,puVar1);
  return;
}
