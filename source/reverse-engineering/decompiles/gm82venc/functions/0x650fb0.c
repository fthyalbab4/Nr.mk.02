// rea decompile_all
// name: FUN_00650fb0
// address: 0x650fb0
// body: available
// range: 0x650fb0-0x651013 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00650fb0(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_stack_00000004;
  undefined1 local_1c [8];
  undefined4 local_14;
  undefined4 local_10;

  *in_stack_00000004 = 0;
  in_stack_00000004[2] = 0;
  in_stack_00000004[3] = 0xbff00000;
  FUN_004048b8();
  cVar1 = FUN_0057bddc();
  if (cVar1 != '\0') {
    FUN_004048b8();
    uVar2 = FUN_0057bed8();
    uVar3 = FUN_004048b8();
    FUN_0057a8e4(uVar2,uVar3,local_1c);
    in_stack_00000004[2] = local_14;
    in_stack_00000004[3] = local_10;
  }
  return;
}
