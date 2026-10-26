// rea decompile_all
// name: FUN_0066817c
// address: 0x66817c
// body: available
// range: 0x66817c-0x6681fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0066817c(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;

  iVar4 = DAT_00688848;
  if (-1 < DAT_00688848 + -1) {
    iVar1 = 0;
    iVar2 = DAT_00688848;
    do {
      iVar4 = iVar1;
      if (*(int *)(DAT_0088e294 + iVar1 * 4) == 0) break;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
      iVar4 = DAT_00688848;
    } while (iVar2 != 0);
  }
  if (iVar4 == DAT_00688848) {
    iVar2 = FUN_00409c34(DAT_0088e294);
    if (iVar2 <= DAT_00688848) {
      FUN_00409dfc(&DAT_0088e294,&DAT_00668150,1,DAT_00688848 + 0x10);
    }
    DAT_00688848 = DAT_00688848 + 1;
  }
  uVar3 = FUN_006674a4(&DAT_006671bc,1);
  *(undefined4 *)(DAT_0088e294 + iVar4 * 4) = uVar3;
  return iVar4;
}
