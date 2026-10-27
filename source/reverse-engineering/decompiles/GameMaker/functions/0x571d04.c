// rea decompile_all
// name: FUN_00571d04
// address: 0x571d04
// body: available
// range: 0x571d04-0x571d71 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00571d04(void)

{
  int iVar1;
  int *piVar2;
  int in_stack_00000004;

  piVar2 = (int *)(in_stack_00000004 + -4);
  *(undefined4 *)(*piVar2 + 0x2f0) = *(undefined4 *)(*piVar2 + 0x288);
  *(undefined4 *)(*piVar2 + 0x2f4) = *(undefined4 *)(*piVar2 + 0x28c);
  (**(code **)(**(int **)(*piVar2 + 0x2ec) + 0x128))();
  iVar1 = FUN_00567af8(*(undefined4 *)(*piVar2 + 0x2ec));
  if (iVar1 == -1) {
    *(undefined1 *)(*piVar2 + 0x281) = 0;
  }
  else {
    *(undefined1 *)(*piVar2 + 0x281) = 1;
  }
  FUN_0047dc74(*(undefined4 *)(*piVar2 + 0x2ec));
  return;
}
