// rea decompile_all
// name: FUN_00660898
// address: 0x660898
// body: available
// range: 0x660898-0x660961 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00660898(int param_1,char param_2)

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
  FUN_00667f50(param_1,0);
  *(undefined1 *)(param_1 + 0x30d) = 1;
  FUN_00485cfc(param_1,0);
  *(undefined4 *)(param_1 + 0x338) = 4000;
  *(undefined1 *)(param_1 + 0x340) = 1;
  *(undefined1 *)(param_1 + 0x30c) = 1;
  FUN_006607bc(param_1);
  *(undefined4 *)(param_1 + 0x350) = 0x96;
  *(undefined1 *)(param_1 + 0x368) = 1;
  *(undefined1 *)(param_1 + 0x369) = 1;
  (**(code **)(**(int **)(param_1 + 100) + 8))
            (*(int **)(param_1 + 100),*(undefined4 *)(*(int *)PTR_DAT_007828e0 + 0x84));
  uVar1 = FUN_0048e048(&PTR_FUN_0048ab50,1,0);
  *(undefined4 *)(param_1 + 0x308) = uVar1;
  FUN_0048e1e4(uVar1,0);
  FUN_0048e204(*(undefined4 *)(param_1 + 0x308));
  if (cVar2 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}
