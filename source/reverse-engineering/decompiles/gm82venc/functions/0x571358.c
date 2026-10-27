// rea decompile_all
// name: FUN_00571358
// address: 0x571358
// body: available
// range: 0x571358-0x5713fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x57136e (push 0x5713ff followed by fs-segment stack chaining); handler 0x5713ff lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00571358(void)

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
  puStack_14 = &LAB_005713ff;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  DAT_00686a54 = DAT_00686a54 + 1;
  FUN_00409dfc(&DAT_00686a4c,&DAT_00571034,1,DAT_00686a54);
  FUN_00409dfc(&DAT_00686a50,&DAT_0057105c,1,DAT_00686a54);
  FUN_0041636c(DAT_00686a54 + -1,&local_8);
  FUN_00408678(DAT_00686a50 + -4 + DAT_00686a54 * 4,L"__newroom",local_8);
  uVar2 = FUN_00609404(&DAT_006082a8,1);
  puVar1 = puStack_10;
  *(undefined4 *)(DAT_00686a4c + -4 + DAT_00686a54 * 4) = uVar2;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00571406;
  puStack_14 = (undefined1 *)0x5713fe;
  thunk_FUN_004072d8(&local_8,uStack_18,puVar1);
  return;
}
