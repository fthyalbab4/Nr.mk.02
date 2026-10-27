// rea decompile_all
// name: FUN_0067f98c
// address: 0x67f98c
// body: available
// range: 0x67f98c-0x67fa80 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0067f98c(int param_1,char param_2)

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
  FUN_004f9840(param_1,0);
  FUN_004ee858(param_1,0xff00000f);
  *(undefined4 *)(param_1 + 0x284) = 0;
  uVar1 = FUN_00462144(&PTR_FUN_004587d4,1);
  *(undefined4 *)(param_1 + 0x290) = uVar1;
  uVar1 = FUN_0048e048(&PTR_FUN_0048ab50,1,0);
  *(undefined4 *)(param_1 + 0x294) = uVar1;
  FUN_0048e1f4(uVar1,0xfa);
  FUN_0048e1e4(*(undefined4 *)(param_1 + 0x294),0);
  FUN_0048e204(*(undefined4 *)(param_1 + 0x294));
  uVar1 = FUN_0048e048(&PTR_FUN_0048ab50,1,0);
  *(undefined4 *)(param_1 + 0x298) = uVar1;
  FUN_0048e1f4(uVar1,20000);
  FUN_0048e1e4(*(undefined4 *)(param_1 + 0x298),0);
  FUN_0048e204(*(undefined4 *)(param_1 + 0x298));
  *(undefined1 *)(param_1 + 0x2a8) = 1;
  *(undefined4 *)(param_1 + 0x2ac) = 5;
  if (cVar2 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}
