// rea decompile_all
// name: FUN_005efcec
// address: 0x5efcec
// body: available
// range: 0x5efcec-0x5efdbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005efcec(undefined4 param_1,undefined4 param_2,int param_3,char param_4)

{
  undefined4 uVar1;
  undefined2 local_24;
  undefined2 local_22;
  undefined1 local_20 [4];
  undefined1 local_1c [20];
  undefined4 local_8;

  local_8 = param_2;
  FUN_00404f08(&local_24,0x1c,0);
  if (param_4 == '\0') {
    local_24 = 2;
    if (param_3 != 0) {
      FUN_005ee298(param_1,param_3,local_20,0);
    }
    local_22 = (**(code **)PTR_DAT_00781c94)();
    uVar1 = (**(code **)PTR_DAT_00781bd0)();
    FUN_005f4444(param_1,uVar1);
  }
  else if (param_4 == '\x01') {
    local_24 = 0x17;
    if (param_3 != 0) {
      FUN_005ee298(param_1,param_3,local_1c,1);
    }
    local_22 = (**(code **)PTR_DAT_00781c94)();
    uVar1 = (**(code **)PTR_DAT_00781bd0)();
    FUN_005f4444(param_1,uVar1);
  }
  else {
    FUN_005f3db8(param_1);
  }
  return;
}
