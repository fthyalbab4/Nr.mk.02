// rea decompile_all
// name: FUN_004f6088
// address: 0x4f6088
// body: available
// range: 0x4f6088-0x4f6107 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004f6088(int param_1,char param_2)

{
  undefined4 uVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;

  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00406510();
    cVar2 = extraout_DL;
  }
  FUN_0045ea7c(param_1,0);
  uVar1 = FUN_0045c628(&LAB_00456778,1);
  *(undefined4 *)(param_1 + 0x128) = uVar1;
  *(undefined1 *)(param_1 + 300) = 2;
  *(undefined1 *)(param_1 + 0x12d) = 7;
  *(undefined1 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0xffff;
  uVar1 = FUN_004f1c50(&PTR_LAB_004eec00,1,param_1);
  *(undefined4 *)(param_1 + 0x138) = uVar1;
  if (cVar2 != '\0') {
    FUN_00406568(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}
