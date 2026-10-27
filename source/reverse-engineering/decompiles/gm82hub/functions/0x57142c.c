// rea decompile_all
// name: FUN_0057142c
// address: 0x57142c
// body: available
// range: 0x57142c-0x57150f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x571446 (push 0x571510 followed by fs-segment stack chaining); handler 0x571510 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057142c(int param_1)

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
  puStack_1c = &LAB_00571510;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = &stack0xfffffffc;
  if (((-1 < param_1) && (puVar1 = &stack0xfffffffc, param_1 < DAT_00686a54)) &&
     (puVar1 = &stack0xfffffffc, *(int *)(DAT_00686a4c + param_1 * 4) != 0)) {
    DAT_00686a54 = DAT_00686a54 + 1;
    FUN_00409dfc(&DAT_00686a4c,&DAT_00571034,1,DAT_00686a54);
    FUN_00409dfc(&DAT_00686a50,&DAT_0057105c,1,DAT_00686a54);
    FUN_0041636c(DAT_00686a54 + -1,&local_8);
    FUN_00408678(DAT_00686a50 + -4 + DAT_00686a54 * 4,L"__newroom",local_8);
    uVar2 = FUN_00609404(&DAT_006082a8,1);
    *(undefined4 *)(DAT_00686a4c + -4 + DAT_00686a54 * 4) = uVar2;
    FUN_00609654(*(undefined4 *)(DAT_00686a4c + -4 + DAT_00686a54 * 4),
                 *(undefined4 *)(DAT_00686a4c + param_1 * 4));
    puVar1 = puStack_18;
  }
  puStack_18 = puVar1;
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00571517;
  puStack_1c = (undefined1 *)0x57150f;
  thunk_FUN_004072d8(&local_8,uStack_20,puVar1);
  return;
}
