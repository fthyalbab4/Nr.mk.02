// rea decompile_all
// name: FUN_006204cc
// address: 0x6204cc
// body: available
// range: 0x6204cc-0x620530 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_006204cc(undefined4 param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;

  FUN_00407f44(param_1);
  iVar1 = DAT_0077f064;
  if (DAT_0077f064 < 0) {
    iVar1 = thunk_FUN_00404478();
  }
  iVar2 = FUN_0040dcb4();
  if (iVar2 == 0) {
    uVar3 = FUN_00407f44(param_2);
    iVar4 = DAT_0077f064;
    if (DAT_0077f064 < 0) {
      iVar4 = thunk_FUN_00404478();
    }
    iVar2 = FUN_0040dcb4();
    if ((param_3 != '\0') && (iVar2 == 0)) {
      (**(code **)(*DAT_0078a0b8 + 0x38))(DAT_0078a0b8,param_1,*DAT_0078a0b8,iVar4,uVar3,iVar1);
    }
  }
  return iVar2;
}
