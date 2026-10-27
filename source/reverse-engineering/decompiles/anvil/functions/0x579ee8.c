// rea decompile_all
// name: FUN_00579ee8
// address: 0x579ee8
// body: available
// range: 0x579ee8-0x579f8e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x579efe (push 0x579f8f followed by fs-segment stack chaining); handler 0x579f8f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00579ee8(void)

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
  puStack_14 = &LAB_00579f8f;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  DAT_00686ad0 = DAT_00686ad0 + 1;
  FUN_00409dfc(&DAT_00686ac8,&DAT_0057968c,1,DAT_00686ad0);
  FUN_00409dfc(&DAT_00686acc,&DAT_005796b8,1,DAT_00686ad0);
  FUN_0041636c(DAT_00686ad0 + -1,&local_8);
  FUN_00408678(DAT_00686acc + -4 + DAT_00686ad0 * 4,L"__newsprite",local_8);
  uVar2 = FUN_00624e6c(&LAB_00622954,1);
  puVar1 = puStack_10;
  *(undefined4 *)(DAT_00686ac8 + -4 + DAT_00686ad0 * 4) = uVar2;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00579f96;
  puStack_14 = (undefined1 *)0x579f8e;
  thunk_FUN_004072d8(&local_8,uStack_18,puVar1);
  return;
}
