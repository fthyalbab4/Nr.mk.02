// rea decompile_all
// name: FUN_0046cdc0
// address: 0x46cdc0
// body: available
// range: 0x46cdc0-0x46ce5c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0046cde7) */

int FUN_0046cdc0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_8;

  local_3c = param_5;
  local_30 = *param_2;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_40 = param_3;
  local_34 = param_1;
  local_8 = param_3;
  iVar1 = FUN_00466d5c(&local_40,param_4,s_1_2_3_0067ece4,0x38);
  if (iVar1 == 0) {
    iVar1 = FUN_00467384(&local_40,4);
    if (iVar1 == 1) {
      *param_2 = local_2c;
      iVar1 = FUN_00467bf8(&local_40);
    }
    else {
      FUN_00467bf8(&local_40);
      if (iVar1 == 0) {
        iVar1 = -5;
      }
    }
  }
  return iVar1;
}
