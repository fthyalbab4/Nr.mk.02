// rea decompile_all
// name: FUN_004050d8
// address: 0x4050d8
// body: available
// range: 0x4050d8-0x405149 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004050d8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uStack_10c;
  undefined4 local_108 [62];
  undefined4 uStack_10;

  uStack_10 = 0x4050e8;
  FUN_00406e5c(param_2);
  FUN_004050cc(param_1,&uStack_10c,0xff);
  uVar1 = FUN_004071b4(param_2,&uStack_10c,param_3);
  while ((char)local_108[0] == -1) {
    uStack_10c = 0x40511b;
    FUN_004050cc(param_1,local_108,0xff);
    uStack_10c = 0;
    FUN_004071b4(&uStack_10c,local_108,param_3);
    uStack_10c = 0x405132;
    FUN_00407254(param_2,local_108[0]);
    uStack_10c = 0x405139;
    FUN_00406e5c(local_108);
    uVar1 = local_108[0];
  }
  return uVar1;
}
