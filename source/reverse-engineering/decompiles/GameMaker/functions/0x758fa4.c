// rea decompile_all
// name: FUN_00758fa4
// address: 0x758fa4
// body: available
// range: 0x758fa4-0x759017 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00758fa4(void)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int in_stack_00000004;

  piVar2 = (int *)(in_stack_00000004 + -4);
  iVar3 = 0;
  do {
    uVar1 = (uint)*(byte *)*piVar2;
    if (uVar1 < 0x49) {
      if (uVar1 == 0x48) {
LAB_0075900b:
        *piVar2 = *piVar2 + 1;
        return iVar3;
      }
      if (uVar1 - 0x30 < 10) {
        iVar3 = iVar3 * 0x10 + (uVar1 - 0x30);
      }
      else {
        if (5 < uVar1 - 0x41) {
          return iVar3;
        }
        iVar3 = iVar3 * 0x10 + (uVar1 - 0x37);
      }
    }
    else {
      if (5 < uVar1 - 0x61) {
        if (uVar1 - 0x61 != 7) {
          return iVar3;
        }
        goto LAB_0075900b;
      }
      iVar3 = iVar3 * 0x10 + (uVar1 - 0x57);
    }
    *piVar2 = *piVar2 + 1;
  } while( true );
}
