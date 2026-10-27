// rea decompile_all
// name: FUN_00407388
// address: 0x407388
// body: available
// range: 0x407388-0x4073d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4073ca to 0x405ea4 FUN_00405ea4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * FUN_00407388(int param_1,int param_2)

{
  undefined2 *puVar1;

  if (param_1 < 1) {
    return (undefined2 *)0x0;
  }
  if (!SCARRY4(param_1,0xe)) {
    puVar1 = (undefined2 *)FUN_00404324();
    *(undefined2 *)(((param_1 + 0xeU & 0xfffffffe) - 2) + (int)puVar1) = 0;
    *(int *)(puVar1 + 4) = param_1;
    *(undefined4 *)(puVar1 + 2) = 1;
    if (param_2 == 0) {
      param_2 = _DAT_0068a8d0;
    }
    *puVar1 = (short)param_2;
    puVar1[1] = 1;
    return puVar1 + 6;
  }
  puVar1 = (undefined2 *)FUN_00405ea4();
  return puVar1;
}
