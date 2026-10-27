// rea decompile_all
// name: FUN_004f6c00
// address: 0x4f6c00
// body: available
// range: 0x4f6c00-0x4f6c96 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_004f6c00(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;

  iVar3 = param_1;
  if ((*(byte *)(param_1 + 0x1c) & 0x10) == 0) {
    for (; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x34)) {
      iVar2 = FUN_00405d08(iVar3);
      if (((iVar2 != 0) && (*(int *)(iVar2 + 0x3c) != 0)) &&
         (cVar1 = FUN_00405d08(iVar2,param_2), cVar1 != '\0')) {
        return true;
      }
    }
    iVar3 = FUN_00513780(param_1,1);
    if ((iVar3 != 0) && (cVar1 = FUN_00405d08(iVar3,param_2), cVar1 != '\0')) {
      return true;
    }
  }
  iVar3 = FUN_004eac28(0xb016,*(undefined2 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  return iVar3 != 0;
}
