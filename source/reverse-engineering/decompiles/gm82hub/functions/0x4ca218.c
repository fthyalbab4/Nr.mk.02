// rea decompile_all
// name: FUN_004ca218
// address: 0x4ca218
// body: available
// range: 0x4ca218-0x4ca281 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ca218(int param_1,char param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  if (param_2 == '\0') {
    if (*(int *)(param_1 + 0x60) == 0) {
      local_10 = param_6;
      local_c = param_5;
      iVar3 = FUN_004c83a8(param_1,&local_10,&local_8);
      if ((iVar3 != 0) && (local_8 == 0x14)) {
        uVar1 = *(undefined4 *)(iVar3 + 4);
        cVar2 = FUN_004061f8(uVar1,&PTR_LAB_004d9848);
        if (cVar2 == '\0') {
          FUN_004bb578(uVar1,0);
        }
        else {
          FUN_004e6874(uVar1);
        }
      }
    }
    else {
      FUN_004c975c();
    }
  }
  return;
}
