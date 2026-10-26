// rea decompile_all
// name: FUN_006e6aa0
// address: 0x6e6aa0
// body: available
// range: 0x6e6aa0-0x6e6aed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e6aa0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = FUN_00409a18(*(undefined4 *)(param_1 + 8));
  if (iVar1 == *(int *)(param_1 + 4)) {
    FUN_00409be0(param_1 + 8,&DAT_006e5644,1,*(int *)(param_1 + 4) + 5);
  }
  uVar2 = FUN_00701cf4(&DAT_00700d94,1,param_2);
  *(undefined4 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 4) = uVar2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}
