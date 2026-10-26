// rea decompile_all
// name: FUN_00407e34
// address: 0x407e34
// body: available
// range: 0x407e34-0x407ecc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00407e34(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_1008 [4];
  undefined4 *puStack_1004;
  undefined4 local_8;

  puStack_1004 = param_1;
  local_8 = param_2;
  if (param_3 < 1) {
    FUN_00407dd0(param_1);
  }
  else {
    if ((param_3 + 1 < 0x7ff) &&
       (iVar1 = FUN_00407454(local_1008,0x7ff,param_2,param_4,param_3), 0 < iVar1)) {
      FUN_00407ee0(param_1,local_1008,iVar1);
      return;
    }
    iVar1 = param_3 + 1;
    FUN_004080e0(param_1,iVar1);
    uVar2 = FUN_00407fb8(*param_1);
    iVar1 = FUN_00407454(uVar2,iVar1,local_8,param_4,param_3);
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    FUN_004080e0(param_1,iVar1);
  }
  return;
}
