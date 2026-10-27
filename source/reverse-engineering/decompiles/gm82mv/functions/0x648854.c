// rea decompile_all
// name: FUN_00648854
// address: 0x648854
// body: available
// range: 0x648854-0x6488a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00648854(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;

  cVar2 = FUN_00571eb0(*(undefined4 *)PTR_DAT_00689034);
  if (cVar2 != '\0') {
    iVar3 = FUN_00571fac(*(undefined4 *)PTR_DAT_00689034);
    uVar1 = *(undefined4 *)(iVar3 + 0x14);
    cVar2 = FUN_00571eb0(uVar1);
    if (cVar2 != '\0') {
      FUN_0058a684(param_1,param_2,uVar1,*(undefined4 *)PTR_DAT_00688bb0,
                   *(undefined4 *)PTR_DAT_006894f4);
    }
  }
  return;
}
