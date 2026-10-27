// rea decompile_all
// name: FUN_0062e2e0
// address: 0x62e2e0
// body: available
// range: 0x62e2e0-0x62e37d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0062e2e0(int param_1,undefined4 param_2,char param_3)

{
  undefined4 uVar1;

  FUN_0052f12c(param_2,0x2c6);
  if (param_3 == '\0') {
    FUN_0052f240(param_2,*(undefined1 *)(param_1 + 8));
    FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0xc));
    FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x10));
    FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x14));
    FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x18));
    FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x1c));
    FUN_0052f12c(param_2,*(undefined4 *)(param_1 + 0x20));
    FUN_007025e8(*(undefined4 *)(param_1 + 4),param_2);
  }
  else {
    uVar1 = FUN_00701cf4(&DAT_00700d94,1,*(undefined4 *)(param_1 + 4));
    FUN_005b0c74(uVar1);
    FUN_007025e8(uVar1,param_2);
    FUN_00405a7c(uVar1);
  }
  return 1;
}
