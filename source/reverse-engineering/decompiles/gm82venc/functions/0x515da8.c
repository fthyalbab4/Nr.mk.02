// rea decompile_all
// name: FUN_00515da8
// address: 0x515da8
// body: available
// range: 0x515da8-0x515e34 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00515da8(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;

  FUN_005179dc(param_1,0,&local_20);
  iVar3 = (local_18 - local_20) + 1 + param_2 * 2;
  iVar2 = (local_14 - local_1c) + 1 + param_2 * 2;
  if ((0 < iVar3) && (0 < iVar2)) {
    uVar1 = FUN_00515ac8(&DAT_00514cd4,1,param_1,1);
    FUN_00515c44(param_1,iVar3,iVar2,*(undefined4 *)PTR_DAT_00688b48);
    FUN_00516b98(param_1,param_2,param_2,0,iVar2,iVar3,local_1c,local_20,uVar1);
    FUN_00405fdc(uVar1);
  }
  return;
}
