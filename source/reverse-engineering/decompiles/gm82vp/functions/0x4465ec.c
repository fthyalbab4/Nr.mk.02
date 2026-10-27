// rea decompile_all
// name: FUN_004465ec
// address: 0x4465ec
// body: available
// range: 0x4465ec-0x446670 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004465ec(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 local_14;
  undefined1 local_10;
  undefined4 local_c;
  int local_8;

  local_c = param_3;
  local_8 = param_2;
  if (param_2 != 0) {
    cVar1 = FUN_00415880(param_3,param_4);
    if ((cVar1 == '\0') && (param_1 == *(int *)(local_8 + 4))) {
      iVar2 = FUN_004467a8(param_1,param_4);
      if (iVar2 != 0) {
        local_14 = param_4;
        local_10 = 0x11;
        FUN_0041bf50(&LAB_0042dae4,1,PTR_LAB_006890c8,0,&local_14);
        FUN_00406ab4();
      }
    }
  }
  if (((*(byte *)(param_1 + 0x1c) & 0x10) != 0) && (*(int *)(param_1 + 4) != 0)) {
    (**(code **)(**(int **)(param_1 + 4) + 0x20))(*(int **)(param_1 + 4),local_8,local_c,param_4);
  }
  return;
}
