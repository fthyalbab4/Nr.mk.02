// rea decompile_all
// name: FUN_00493088
// address: 0x493088
// body: available
// range: 0x493088-0x4931b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00493088(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int *local_c;

  local_28 = 0;
  local_24 = 0;
  local_10 = 0;
  local_c = param_2;
  FUN_00492e5c(0);
  FUN_00492c10(&local_20,&local_1c,param_4);
  FUN_00492e5c(0x7fffffff);
  FUN_00492c10(&local_18,&local_14,param_4);
  do {
    while( true ) {
      iVar2 = local_24;
      iVar1 = local_28;
      if (local_18 <= local_20) {
        return local_10;
      }
      local_28 = local_20 + local_18 >> 1;
      if (local_28 < 0) {
        local_28 = local_28 + (uint)((local_20 + local_18 & 1U) != 0);
      }
      local_10 = FUN_00492e5c(local_28);
      FUN_00492c10(&local_28,&local_24,param_4);
      if (local_24 <= *local_c) break;
      if ((local_20 == local_28) && (local_1c == local_24)) {
        uVar3 = FUN_00492e5c(local_18);
        return uVar3;
      }
      local_20 = local_28;
      local_1c = local_24;
    }
    if (*local_c <= local_24) {
      return local_10;
    }
    local_18 = local_28;
    local_14 = local_24;
  } while ((iVar1 != local_28) || (iVar2 != local_24));
  return local_10;
}
