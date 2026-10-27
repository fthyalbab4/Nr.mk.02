// rea decompile_all
// name: FUN_005128ec
// address: 0x5128ec
// body: available
// range: 0x5128ec-0x5129ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x512906 (push 0x5129ed followed by fs-segment stack chaining); handler 0x5129ed lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005128ec(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  int *local_8;

  puStack_2c = &stack0xfffffffc;
  local_8 = (int *)0x0;
  puStack_30 = &LAB_005129ed;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puVar1 = &stack0xfffffffc;
  if (DAT_0068fda8 == '\0') {
    puVar1 = &stack0xfffffffc;
    if (DAT_006840ac == 0) {
      FUN_0051162c(DAT_0068fda4,1);
      puVar1 = puStack_2c;
    }
    puStack_2c = puVar1;
    puVar1 = puStack_2c;
    if ((((-1 < param_1) && (param_1 < DAT_006840b4)) &&
        (*(char *)(DAT_0068fda0 + param_1 * 0x14) != '\0')) &&
       (*(int *)(DAT_0068fda0 + 4 + param_1 * 0x14) != 3)) {
      FUN_0040b268(&local_8);
      uVar2 = (**(code **)(**(int **)(DAT_0068fda0 + 0xc + param_1 * 0x14) + 0xc))();
      puVar1 = puStack_2c;
      if (((uVar2 & 0x80000000) == 0) && (local_8 != (int *)0x0)) {
        (**(code **)(*local_8 + 0xc))();
        puVar1 = puStack_2c;
      }
    }
  }
  puStack_2c = puVar1;
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_005129f4;
  puStack_30 = (undefined1 *)0x5129ec;
  FUN_0040b268(&local_8,uStack_34,puVar1);
  return;
}
