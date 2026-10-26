// rea decompile_all
// name: FUN_00557bd4
// address: 0x557bd4
// body: available
// range: 0x557bd4-0x557c40 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_00557bd4(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 uVar5;

  if (DAT_00711860 == '\0') {
    iVar1 = FUN_0040bfac();
    *(undefined1 *)(iVar1 + 0x48) = 0;
    uVar2 = FUN_005576b8();
    pcVar4 = FUN_005579fc;
    uVar5 = uVar2;
    uVar3 = FUN_00552bac(&PTR_LAB_0054c008);
    DAT_00711860 = FUN_00552a30(&PTR_LAB_0054c008,uVar3,L"kernel32.dll",pcVar4,uVar5);
    if (DAT_00711860 != '\0') {
      DAT_00711868 = *(undefined4 *)PTR_DAT_00688d1c;
      DAT_00711864 = uVar2;
      *(code **)PTR_DAT_00688d1c = FUN_00557a54;
    }
    return DAT_00711860;
  }
  return '\x01';
}
