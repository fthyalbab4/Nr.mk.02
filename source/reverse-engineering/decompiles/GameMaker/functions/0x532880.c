// rea decompile_all
// name: FUN_00532880
// address: 0x532880
// body: available
// range: 0x532880-0x5328f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00532880(void)

{
  int *piVar1;
  undefined4 uVar2;

  uVar2 = FUN_00405a4c(&LAB_00433630,1);
  *(undefined4 *)(DAT_00788958 + 0x4a0) = uVar2;
  piVar1 = *(int **)(*(int *)(DAT_00788958 + 0x388) + 0x2c0);
  (**(code **)(*piVar1 + 0x84))(piVar1,uVar2);
  FUN_0043f254(*(undefined4 *)(DAT_00788958 + 0x4a0));
  *(undefined4 *)(DAT_00788958 + 0x4a4) = *(undefined4 *)(*(int *)(DAT_00788958 + 0x388) + 0x6c);
  *(undefined1 *)(DAT_00788958 + 0x4a8) = 0;
  *(undefined4 *)(DAT_00788958 + 0x2b8) = 2;
  FUN_0051acd8(DAT_00788958);
  return;
}
