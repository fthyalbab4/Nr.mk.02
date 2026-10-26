// rea decompile_all
// name: FUN_00408a24
// address: 0x408a24
// body: available
// range: 0x408a24-0x408a64 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x408a5d to 0x405944 FUN_00405944 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined2 * FUN_00408a24(int param_1)

{
  int iVar1;
  undefined2 *puVar2;
  bool bVar3;

  if (param_1 < 1) {
    return (undefined2 *)0x0;
  }
  iVar1 = param_1 * 2;
  if ((!SCARRY4(param_1,param_1)) && (bVar3 = SCARRY4(iVar1,0xe), iVar1 = iVar1 + 0xe, !bVar3)) {
    puVar2 = (undefined2 *)FUN_0040431c();
    *(undefined4 *)(puVar2 + 2) = 1;
    *(int *)(puVar2 + 4) = param_1;
    (puVar2 + 6)[param_1] = 0;
    puVar2[1] = 2;
    *puVar2 = DAT_007838d4;
    return puVar2 + 6;
  }
  puVar2 = (undefined2 *)FUN_00405944(iVar1);
  return puVar2;
}
