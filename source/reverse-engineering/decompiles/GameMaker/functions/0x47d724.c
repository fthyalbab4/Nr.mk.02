// rea decompile_all
// name: FUN_0047d724
// address: 0x47d724
// body: available
// range: 0x47d724-0x47d7f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0047d724(int param_1,char param_2)

{
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;

  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00405fb0();
    cVar1 = extraout_DL;
  }
  FUN_004f1a14(param_1,0);
  if (*PTR_DAT_00781e70 == '\0') {
    *(undefined4 *)(param_1 + 0x50) = 0x802b8;
  }
  else {
    *(undefined4 *)(param_1 + 0x50) = 0x802a8;
  }
  FUN_004edce0(param_1,0x79);
  FUN_004edd14(param_1,0x19);
  FUN_004f7984(param_1,1);
  FUN_004ee8ac(param_1,0);
  *(undefined1 *)(param_1 + 0x278) = 1;
  *(undefined1 *)(param_1 + 0x270) = 0;
  *(undefined1 *)(param_1 + 0x27d) = 1;
  *(undefined1 *)(param_1 + 0x27e) = 1;
  *(undefined1 *)(param_1 + 0x27f) = 1;
  FUN_0047e104(param_1);
  *(undefined4 *)(param_1 + 0x290) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x294) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x298) = 0;
  FUN_00407eb8(param_1 + 0x29c,0);
  *(undefined1 *)(param_1 + 0x284) = 0;
  if (cVar1 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}
