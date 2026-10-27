// rea decompile_all
// name: FUN_004436b0
// address: 0x4436b0
// body: available
// range: 0x4436b0-0x443713 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004436b0(void)

{
  char cVar1;
  undefined4 *puVar2;
  int in_stack_00000004;

  puVar2 = (undefined4 *)(in_stack_00000004 + -4);
  while( true ) {
    cVar1 = FUN_00441338(*puVar2);
    if (cVar1 != '\0') break;
    cVar1 = FUN_0044175c(*puVar2);
    if ((byte)(cVar1 - 2U) < 3) {
      FUN_00443714(*puVar2);
    }
    FUN_00443ec8(*puVar2,1);
    while( true ) {
      cVar1 = FUN_00441338(*puVar2);
      if (cVar1 != '\0') break;
      FUN_00443c68(*puVar2);
    }
    FUN_004411f0(*puVar2,0);
  }
  FUN_004411f0(*puVar2,0);
  return;
}
