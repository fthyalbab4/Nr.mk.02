// rea decompile_all
// name: FUN_004f7628
// address: 0x4f7628
// body: available
// range: 0x4f7628-0x4f7666 inclusive
// range: 0x4f7688-0x4f76d7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004f7628(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_stack_00000004;

  iVar2 = FUN_004f6500(*(undefined4 *)(in_stack_00000004 + -4));
  cVar1 = FUN_004f7bec(*(undefined4 *)(in_stack_00000004 + -4));
  if (cVar1 != '\x02') {
    switch(*(undefined1 *)(iVar2 + 0x460)) {
    default:
      FUN_0041bd4c(&LAB_004109ac,1,0);
      uVar3 = FUN_00406ab4();
      break;
    case 1:
      uVar3 = 1;
      break;
    case 2:
    case 4:
      uVar3 = 2;
      break;
    case 8:
    case 0x10:
      cVar1 = *(char *)(iVar2 + 0x461);
      if ((cVar1 == '\0') || (cVar1 == '\x02')) {
        uVar3 = 6;
      }
      else if (cVar1 == '\x03') {
        uVar3 = 3;
      }
      else {
        FUN_0041bd4c(&LAB_004109ac,1,0);
        uVar3 = FUN_00406ab4();
      }
    }
    return uVar3;
  }
  return 6;
}
