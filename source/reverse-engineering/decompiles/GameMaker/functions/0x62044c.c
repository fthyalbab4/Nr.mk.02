// rea decompile_all
// name: FUN_0062044c
// address: 0x62044c
// body: available
// range: 0x62044c-0x62048a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0062044c(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  uVar1 = FUN_00407f44(param_1);
  iVar2 = DAT_0077f060;
  if (DAT_0077f060 < 0) {
    iVar2 = thunk_FUN_00404478();
  }
  iVar3 = FUN_0040dcb4();
  if ((param_2 != '\0') && (iVar3 == 0)) {
    (**(code **)(*DAT_0078a0b8 + 0x38))(DAT_0078a0b8,param_1,*DAT_0078a0b8,iVar2,uVar1);
  }
  return iVar3;
}
