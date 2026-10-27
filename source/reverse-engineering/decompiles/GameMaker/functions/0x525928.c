// rea decompile_all
// name: FUN_00525928
// address: 0x525928
// body: available
// range: 0x525928-0x525a25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00525928(int *param_1,undefined1 param_2,undefined2 param_3,int param_4,int param_5)

{
  bool bVar1;
  int iVar2;

  FUN_004f08c0(param_1,param_2,param_3,param_4,param_5);
  if (*(char *)((int)param_1 + 0x1b9) != '\0') {
    *(undefined1 *)((int)param_1 + 0x1b9) = 0;
    if ((((param_5 < 0) || (iVar2 = FUN_004edf8c(param_1), iVar2 <= param_5)) || (param_4 < 0)) ||
       (iVar2 = FUN_004edfcc(param_1), iVar2 < param_4)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (param_1[0x6c] == 0) {
      *(undefined1 *)((int)param_1 + 0x1ca) = 0;
      *(undefined1 *)((int)param_1 + 0x1c9) = 0;
      if ((bVar1) && (1 < (byte)(*(char *)((int)param_1 + 0x1ca) - 2U))) {
        (**(code **)(*param_1 + 0x90))();
      }
    }
    else if (bVar1) {
      FUN_00525ba8(param_1,*(byte *)(param_1 + 0x6e) ^ 1);
      if ((char)param_1[0x6e] != '\0') {
        (**(code **)(*param_1 + 0x94))();
      }
    }
    else {
      if ((char)param_1[0x6e] != '\0') {
        *(undefined1 *)((int)param_1 + 0x1ca) = 3;
      }
      (**(code **)(*param_1 + 0x94))();
    }
    if (bVar1) {
      FUN_00405d08(param_1);
    }
    FUN_00525794(param_1);
    return;
  }
  return;
}
