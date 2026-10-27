// rea decompile_all
// name: FUN_004ed8cc
// address: 0x4ed8cc
// body: available
// range: 0x4ed8cc-0x4ed946 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ed8cc(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;

  FUN_00449268(param_1,param_2,param_3);
  if ((char)param_3 == '\x01') {
    if (param_2 == param_1[0x1f]) {
      FUN_004ee67c(param_1,0);
    }
    else {
      iVar1 = (**(code **)(*param_1 + 0x4c))();
      if (param_2 == iVar1) {
        FUN_004ed6b4(param_1,0);
      }
      else if (param_2 == param_1[0x24]) {
        param_1[0x24] = 0;
      }
      else if (param_2 == param_1[0x5b]) {
        param_1[0x5b] = 0;
      }
      else {
        iVar1 = param_1[0x2b];
        if ((iVar1 != 0) && (param_2 == *(int *)(iVar1 + 0xc))) {
          *(undefined4 *)(iVar1 + 0xc) = 0;
        }
      }
    }
  }
  return;
}
