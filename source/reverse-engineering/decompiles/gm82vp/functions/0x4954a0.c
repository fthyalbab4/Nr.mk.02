// rea decompile_all
// name: FUN_004954a0
// address: 0x4954a0
// body: available
// range: 0x4954a0-0x49552a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004954a0(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_stack_00000004;
  WPARAM in_stack_00000008;
  undefined4 *in_stack_0000000c;

  if (in_stack_00000004 == 0) {
    if (in_stack_0000000c[1] == 0xb001) {
      FUN_00406268(DAT_0068f1a8);
    }
    else if (in_stack_0000000c[1] == 0x111) {
      FUN_00495550();
    }
    else if ((DAT_0068f1a0 == 0) &&
            ((((iVar1 = in_stack_0000000c[1], iVar1 == 0x102 || (iVar1 == 0x100)) ||
              (iVar1 == 0x101)) || ((iVar1 == 0x104 || (iVar1 == 0x105)))))) {
      uVar2 = FUN_004c45dc(DAT_0068f1a8);
      *in_stack_0000000c = uVar2;
    }
  }
  CallNextHookEx(DAT_0068f1c0,in_stack_00000004,in_stack_00000008,(LPARAM)in_stack_0000000c);
  return;
}
