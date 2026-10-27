// rea decompile_all
// name: FUN_00755354
// address: 0x755354
// body: available
// range: 0x755354-0x7553c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_00755354(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 uVar5;

  if (DAT_0082646c == '\0') {
    iVar1 = FUN_0040bd38();
    *(undefined1 *)(iVar1 + 0x48) = 0;
    uVar2 = FUN_00754e38();
    pcVar4 = FUN_0075517c;
    uVar5 = uVar2;
    uVar3 = FUN_0075032c(&PTR_LAB_00749788);
    DAT_0082646c = FUN_007501b0(&PTR_LAB_00749788,uVar3,L"kernel32.dll",pcVar4,uVar5);
    if (DAT_0082646c != '\0') {
      DAT_00826474 = *(undefined4 *)PTR_DAT_00781c6c;
      DAT_00826470 = uVar2;
      *(code **)PTR_DAT_00781c6c = FUN_007551d4;
    }
    return DAT_0082646c;
  }
  return '\x01';
}
