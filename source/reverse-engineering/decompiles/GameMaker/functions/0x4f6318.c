// rea decompile_all
// name: FUN_004f6318
// address: 0x4f6318
// body: available
// range: 0x4f6318-0x4f638b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004f6318(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_14;

  local_14 = param_3;
  iVar2 = FUN_00513780(param_1,1);
  if ((((iVar2 != 0) && (param_1 != iVar2)) && (*(char *)(iVar2 + 0x29c) != '\0')) &&
     (cVar1 = FUN_004f6318(iVar2,param_2), cVar1 != '\0')) {
    return 1;
  }
  uVar3 = FUN_0051361c(*(undefined4 *)(param_2 + 8));
  if ((*(byte *)(param_1 + 0x51) & 0x10) == 0) {
    local_14 = CONCAT22(local_14._2_2_,*(undefined2 *)(param_2 + 4));
    FUN_00405d08(param_1,&local_14,uVar3);
    *(short *)(param_2 + 4) = (short)local_14;
    if ((short)local_14 == 0) {
      return 1;
    }
  }
  return 0;
}
