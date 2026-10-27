// rea decompile_all
// name: FUN_005af828
// address: 0x5af828
// body: available
// range: 0x5af828-0x5af908 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005af828(int param_1,int param_2,int param_3,byte param_4,byte param_5,undefined4 param_6)

{
  undefined4 uVar1;

  if (param_1 != 0) {
    uVar1 = FUN_00701cf4(&DAT_00700d94,1,param_1);
    FUN_00702dfc(param_1,param_6,0);
    if ((param_5 != 0) && (param_2 = param_2 % *(int *)(param_1 + 4), param_2 < 0)) {
      param_2 = param_2 + *(int *)(param_1 + 4);
    }
    if ((param_4 != 0) && (param_3 = param_3 % *(int *)(param_1 + 8), param_3 < 0)) {
      param_3 = param_3 + *(int *)(param_1 + 8);
    }
    FUN_007034e0(param_1,param_2,param_3,0,uVar1);
    if (param_5 != 0) {
      FUN_007034e0(param_1,param_2 - *(int *)(param_1 + 4),param_3,0,uVar1);
    }
    if (param_4 != 0) {
      FUN_007034e0(param_1,param_2,param_3 - *(int *)(param_1 + 8),0,uVar1);
    }
    if ((param_5 & param_4) != 0) {
      FUN_007034e0(param_1,param_2 - *(int *)(param_1 + 4),param_3 - *(int *)(param_1 + 8),0,uVar1);
    }
    FUN_00405a7c(uVar1);
  }
  return;
}
