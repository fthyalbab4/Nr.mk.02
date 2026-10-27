// rea decompile_all
// name: FUN_0043c330
// address: 0x43c330
// body: available
// range: 0x43c330-0x43c3b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0043c330(int *param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 local_1c;
  uint local_18;

  local_1c = 0;
  uVar3 = 0;
  local_18 = param_1[8] - 1;
  if (local_18 < 0x80000000) {
    do {
      uVar2 = local_18 + uVar3 >> 1;
      iVar1 = (**(code **)(*param_1 + 0x34))
                        (param_1,*(undefined4 *)(param_1[7] + uVar2 * 8),param_2);
      if (iVar1 < 0) {
        uVar3 = uVar2 + 1;
      }
      else {
        local_18 = uVar2 - 1;
        if ((iVar1 == 0) && (local_1c = 1, *(char *)((int)param_1 + 0x29) != '\x01')) {
          uVar3 = uVar2;
        }
      }
    } while ((int)uVar3 <= (int)local_18);
  }
  *param_3 = uVar3;
  return local_1c;
}
