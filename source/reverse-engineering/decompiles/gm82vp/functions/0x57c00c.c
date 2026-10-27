// rea decompile_all
// name: FUN_0057c00c
// address: 0x57c00c
// body: available
// range: 0x57c00c-0x57c0ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x57c026 (push 0x57c0f0 followed by fs-segment stack chaining); handler 0x57c0f0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057c00c(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0057c0f0;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = &stack0xfffffffc;
  if (((-1 < param_1) && (puVar1 = &stack0xfffffffc, param_1 < DAT_00686adc)) &&
     (puVar1 = &stack0xfffffffc, *(int *)(DAT_00686ad4 + param_1 * 4) != 0)) {
    DAT_00686adc = DAT_00686adc + 1;
    FUN_00409dfc(&DAT_00686ad4,&DAT_0057bbf8,1,DAT_00686adc);
    FUN_00409dfc(&DAT_00686ad8,&DAT_0057bc20,1,DAT_00686adc);
    FUN_0041636c(DAT_00686adc + -1,&local_8);
    FUN_00408678(DAT_00686ad8 + -4 + DAT_00686adc * 4,L"__newpath",local_8);
    uVar2 = FUN_0057af4c(&DAT_0057a16c,1);
    *(undefined4 *)(DAT_00686ad4 + -4 + DAT_00686adc * 4) = uVar2;
    FUN_0057afb0(*(undefined4 *)(DAT_00686ad4 + -4 + DAT_00686adc * 4),
                 *(undefined4 *)(DAT_00686ad4 + param_1 * 4));
    puVar1 = puStack_18;
  }
  puStack_18 = puVar1;
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0057c0f7;
  puStack_1c = (undefined1 *)0x57c0ef;
  thunk_FUN_004072d8(&local_8,uStack_20,puVar1);
  return;
}
