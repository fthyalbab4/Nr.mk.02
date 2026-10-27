// rea decompile_all
// name: FUN_0047cc38
// address: 0x47cc38
// body: available
// range: 0x47cc38-0x47ccce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0047cc38(int param_1,char param_2)

{
  char cVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;

  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00405fb0();
    cVar2 = extraout_DL;
  }
  FUN_004f96ec(param_1,0);
  *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 0x800;
  FUN_004edce0(param_1,0x41);
  FUN_004edd14(param_1,0x11);
  *(undefined1 *)(param_1 + 0x1b5) = 1;
  *(undefined1 *)(param_1 + 0x1c6) = 1;
  FUN_00503a6c();
  cVar1 = FUN_00503b78();
  if (cVar1 == '\0') {
    *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 0x40;
  }
  else {
    *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) & 0xffffffbf;
  }
  FUN_0047d6e4(param_1);
  if (cVar2 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}
