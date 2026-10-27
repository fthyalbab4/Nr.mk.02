// rea decompile_all
// name: FUN_00667a40
// address: 0x667a40
// body: available
// range: 0x667a40-0x667acd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00667a40(int param_1,char param_2)

{
  undefined4 uVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;

  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00405fb0();
    cVar2 = extraout_DL;
  }
  FUN_0066733c(param_1,0);
  *(undefined1 *)(param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 2;
  *(undefined1 *)(param_1 + 0x215) = 1;
  uVar1 = FUN_0048e048(&PTR_FUN_0048ab50,1,param_1);
  *(undefined4 *)(param_1 + 0x200) = uVar1;
  FUN_0048e1e4(uVar1,0);
  FUN_0048e204(uVar1);
  FUN_0048e1f4(uVar1,0x2ee);
  if (cVar2 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}
