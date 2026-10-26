// rea decompile_all
// name: FUN_004c6f68
// address: 0x4c6f68
// body: available
// range: 0x4c6f68-0x4c6fe4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004c6f68(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;

  uVar2 = 0;
  cVar1 = FUN_004d3878(param_1);
  if (cVar1 != '\0') {
    if (*(char *)(param_1 + 0x7a) == '\0') {
      FUN_004c6ec8(param_1,*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x80),
                   *(undefined4 *)(param_1 + 0x84));
    }
    uVar2 = FUN_004c6fe8(param_1,param_2,param_3,param_4);
    if ((char)uVar2 != '\0') {
      *(undefined2 *)(param_1 + 0x8c) = *(undefined2 *)(*(int *)PTR_DAT_00689620 + 0x48);
      FUN_004e8ca4(*(undefined4 *)PTR_DAT_00689620,*(undefined2 *)(param_1 + 0x78));
    }
  }
  return uVar2;
}
