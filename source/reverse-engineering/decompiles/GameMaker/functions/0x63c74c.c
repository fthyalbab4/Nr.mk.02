// rea decompile_all
// name: FUN_0063c74c
// address: 0x63c74c
// body: available
// range: 0x63c74c-0x63c7df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0063c74c(int param_1,char param_2)

{
  undefined4 uVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;

  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00405fb0();
    cVar2 = extraout_DL;
  }
  uVar1 = FUN_00701bf8(&DAT_00700d94,1);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  uVar1 = FUN_00701bf8(&DAT_00700d94,1);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  uVar1 = FUN_00701bf8(&DAT_00700d94,1);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  uVar1 = FUN_0048e048(&PTR_FUN_0048ab50,1,0);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  FUN_0048e1f4(uVar1,200);
  FUN_0048e204(*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 1;
  if (cVar2 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}
