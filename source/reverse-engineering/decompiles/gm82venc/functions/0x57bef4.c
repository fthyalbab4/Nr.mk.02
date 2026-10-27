// rea decompile_all
// name: FUN_0057bef4
// address: 0x57bef4
// body: available
// range: 0x57bef4-0x57bf9a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x57bf0a (push 0x57bf9b followed by fs-segment stack chaining); handler 0x57bf9b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057bef4(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;

  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_0057bf9b;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  DAT_00686adc = DAT_00686adc + 1;
  FUN_00409dfc(&DAT_00686ad4,&DAT_0057bbf8,1,DAT_00686adc);
  FUN_00409dfc(&DAT_00686ad8,&DAT_0057bc20,1,DAT_00686adc);
  FUN_0041636c(DAT_00686adc + -1,&local_8);
  FUN_00408678(DAT_00686ad8 + -4 + DAT_00686adc * 4,L"__newpath",local_8);
  uVar2 = FUN_0057af4c(&DAT_0057a16c,1);
  puVar1 = puStack_10;
  *(undefined4 *)(DAT_00686ad4 + -4 + DAT_00686adc * 4) = uVar2;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0057bfa2;
  puStack_14 = (undefined1 *)0x57bf9a;
  thunk_FUN_004072d8(&local_8,uStack_18,puVar1);
  return;
}
