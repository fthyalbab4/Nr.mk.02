// rea decompile_all
// name: FUN_00658bec
// address: 0x658bec
// body: available
// range: 0x658bec-0x658c95 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x658c12 (push 0x658c96 followed by fs-segment stack chaining); handler 0x658c96 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00658bec(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 local_1c [24];

  puStack_2c = (undefined1 *)0x658c07;
  FUN_00408d1c(local_1c,&DAT_00656108);
  puStack_30 = &LAB_00658c96;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  if ((-1 < param_2) && (puStack_2c = &stack0xfffffffc, param_2 < *(int *)(param_1 + 0x2f0))) {
    puStack_2c = &stack0xfffffffc;
    FUN_00409084(local_1c,*(int *)(param_1 + 0x2f4) + param_2 * 0x18,&DAT_00656108);
    if (0 < param_2) {
      do {
        FUN_00409084(*(int *)(param_1 + 0x2f4) + param_2 * 0x18,
                     *(int *)(param_1 + 0x2f4) + -0x18 + param_2 * 0x18,&DAT_00656108);
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    FUN_00409084(*(undefined4 *)(param_1 + 0x2f4),local_1c,&DAT_00656108);
  }
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_00658c9d;
  puStack_30 = (undefined1 *)0x658c95;
  FUN_00408df4(local_1c,&DAT_00656108,puVar1);
  return;
}
