// rea decompile_all
// name: FUN_00733db8
// address: 0x733db8
// body: available
// range: 0x733db8-0x733e64 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00733db8(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  int local_14;
  uint local_10;
  int local_c;
  undefined1 local_5;

  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  local_5 = 1;
  bVar2 = true;
  thunk_FUN_00407d2c(param_1);
  if (bVar2) {
    FUN_00406e5c(param_2);
  }
  else {
    local_10 = 0;
    if (param_1 != 0) {
      local_10 = *(uint *)(param_1 + -4) >> 1;
    }
    FUN_004078e4(param_2,local_10 * 3,0);
    local_c = 1;
    local_14 = 1;
    if (0 < (int)local_10) {
      do {
        uVar1 = FUN_00733a4c(param_1,&local_c);
        if (local_c == -1) {
          local_5 = 0;
          FUN_00406e5c(param_2);
          return local_5;
        }
        FUN_007336b4(param_2,&local_14,uVar1);
      } while (local_c <= (int)local_10);
    }
    FUN_004078e4(param_2,local_14 + -1,0);
  }
  return local_5;
}
