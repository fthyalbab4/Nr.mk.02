// rea decompile_all
// name: FUN_0050be9c
// address: 0x50be9c
// body: available
// range: 0x50be9c-0x50bf01 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0050be9c(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;

  uVar1 = FUN_00405fac(&LAB_004319cc,1);
  iVar2 = FUN_0050bbe0(param_1);
  uVar3 = FUN_00405fac(&LAB_004319cc,1);
  FUN_0043caf8(uVar3,param_1,extraout_ECX,iVar2,iVar2 >> 0x1f);
  FUN_0043c854(uVar3);
  FUN_005053e8(uVar3,uVar1);
  FUN_00405fdc(uVar3);
  FUN_0043c854(uVar1);
  return uVar1;
}
