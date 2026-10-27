// rea decompile_all
// name: FUN_0057745c
// address: 0x57745c
// body: available
// range: 0x57745c-0x5774eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0057745c(int *param_1,int param_2,byte param_3)

{
  int iVar1;
  bool bVar2;
  int iStack_14;
  undefined1 uStack_10;

  bVar2 = true;
  iVar1 = FUN_00408a68(&LAB_005774f8,param_2);
  if (iVar1 != 0) {
    FUN_0041bfec(&PTR_LAB_00410b4c,1,PTR_PTR_0078203c);
    FUN_00406618();
  }
  if (((param_1[0x13] != 0) && ((*(byte *)(param_1[0x13] + 0x380) & 8) != 0)) && (param_2 != 0)) {
    iVar1 = (**(code **)(*param_1 + 0x58))(param_1,param_2);
    bVar2 = iVar1 == -1;
    if ((!bVar2 & param_3) != 0) {
      uStack_10 = 0x11;
      iStack_14 = param_2;
      FUN_0041c0bc(&PTR_LAB_00410b4c,1,PTR_PTR_0078202c,0,&iStack_14);
      FUN_00406618();
    }
  }
  return bVar2;
}
