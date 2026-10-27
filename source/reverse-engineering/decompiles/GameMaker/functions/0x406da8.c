// rea decompile_all
// name: FUN_00406da8
// address: 0x406da8
// body: available
// range: 0x406da8-0x406ddd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00406da8(void)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_00000004;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;

  puStack_8 = (undefined1 *)0x406db0;
  FUN_00405930();
  puStack_c = &LAB_004067c4;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  uVar1 = in_stack_00000004[1];
  pcVar2 = (code *)*in_stack_00000004;
  puStack_8 = &stack0xfffffffc;
  FUN_00404338();
  (*pcVar2)(uVar1);
  *in_FS_OFFSET = uStack_10;
  return;
}
