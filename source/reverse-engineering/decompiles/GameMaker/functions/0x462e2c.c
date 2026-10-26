// rea decompile_all
// name: FUN_00462e2c
// address: 0x462e2c
// body: available
// range: 0x462e2c-0x462e70 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00462e2c(int *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;

  if (param_1[0xd] == 0x20000000) {
    cVar1 = FUN_00462b34(param_1);
    if (cVar1 == '\0') {
      iVar3 = (**(code **)(*param_1 + 0x24))();
      piVar4 = (int *)FUN_00462a64(param_1);
      uVar2 = (**(code **)(*piVar4 + 0x18))(piVar4,0,iVar3 + -1);
    }
    else {
      uVar2 = 0xffffff;
    }
  }
  else {
    uVar2 = FUN_0045aa34();
  }
  return uVar2 | 0x2000000;
}
