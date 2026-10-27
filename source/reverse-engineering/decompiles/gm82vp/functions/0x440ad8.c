// rea decompile_all
// name: FUN_00440ad8
// address: 0x440ad8
// body: available
// range: 0x440ad8-0x440b64 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00440ad8(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  undefined1 local_4004 [12280];
  undefined4 uStack_100c;

  iVar1 = 4;
  do {
    iVar2 = iVar1;
    iVar1 = iVar2 + -1;
  } while (iVar2 + -1 != 0);
  for (; 0x4000 < iVar2; iVar2 = iVar2 + -0x4000) {
    uStack_100c = 0x440b12;
    FUN_0043e8c0(*(undefined4 *)(in_stack_00000004 + -8),local_4004,0x4000);
    uStack_100c = 0x440b28;
    FUN_00441578(*(undefined4 *)(in_stack_00000004 + -4),local_4004,0x4000);
  }
  if (0 < iVar2) {
    uStack_100c = 0x440b4d;
    FUN_0043e8c0(*(undefined4 *)(in_stack_00000004 + -8),local_4004,iVar2);
    uStack_100c = 0x440b60;
    FUN_00441578(*(undefined4 *)(in_stack_00000004 + -4),local_4004,iVar2);
  }
  return;
}
