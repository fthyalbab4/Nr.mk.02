// rea decompile_all
// name: FUN_005315a4
// address: 0x5315a4
// body: available
// range: 0x5315a4-0x531601 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005315a4(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uStack_114;
  undefined1 *puStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [244];
  int iStack_14;

  puStack_110 = local_108;
  uStack_10c = 0xff;
  uStack_114 = param_1;
  (*DAT_0068fde8)();
  uVar1 = FUN_004175f4(&uStack_114);
  FUN_00407c34(param_2,uVar1,0);
  uVar2 = thunk_FUN_00407af8(param_2);
  iStack_14 = *param_2;
  uVar1 = 0;
  if (iStack_14 != 0) {
    uVar1 = *(undefined4 *)(iStack_14 + -4);
  }
  FUN_00404514(&uStack_114,uVar2,uVar1);
  return;
}
