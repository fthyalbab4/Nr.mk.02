// rea decompile_all
// name: FUN_006675bc
// address: 0x6675bc
// body: available
// range: 0x6675bc-0x667662 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006675bc(int *param_1,undefined2 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined1 local_7;

  FUN_004f0804(param_1,param_2,param_3,param_4);
  if (*(char *)((int)param_1 + 0x1f2) == '\0') {
    if (*(char *)((int)param_1 + 499) == '\0') {
      FUN_00667938(param_1);
    }
  }
  else {
    if (*(char *)((int)param_1 + 0x1f1) == '\0') {
      local_7 = '\0';
    }
    else {
      local_7 = '\x03';
    }
    if (-1 < param_3) {
      iVar1 = FUN_004edf8c(param_1);
      if ((param_3 < iVar1) && (-1 < param_4)) {
        iVar1 = FUN_004edfcc(param_1);
        if (param_4 <= iVar1) {
          if (*(char *)((int)param_1 + 0x1f1) == '\0') {
            local_7 = '\x02';
          }
          else {
            local_7 = '\x03';
          }
        }
      }
    }
    if (local_7 != *(char *)((int)param_1 + 0x1f6)) {
      *(char *)((int)param_1 + 0x1f6) = local_7;
      (**(code **)(*param_1 + 0x90))();
    }
  }
  return;
}
