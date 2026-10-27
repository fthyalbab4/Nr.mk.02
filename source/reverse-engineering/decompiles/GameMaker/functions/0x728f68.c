// rea decompile_all
// name: FUN_00728f68
// address: 0x728f68
// body: available
// range: 0x728f68-0x728fd4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00728f68(int param_1,byte param_2,undefined1 *param_3,undefined1 *param_4,
                 undefined1 *param_5,int param_6)

{
  undefined1 *puVar1;
  int iVar2;

  iVar2 = (&DAT_0077f65c)[param_2];
  puVar1 = (undefined1 *)(param_6 + iVar2);
  param_5 = (undefined1 *)((int)param_5 + iVar2);
  do {
    *param_4 = param_3[1];
    param_4 = param_4 + 1;
    *puVar1 = *param_3;
    *param_5 = param_3[2];
    param_3 = param_3 + 4;
    puVar1 = puVar1 + (&DAT_0077f694)[param_2];
    param_5 = param_5 + (&DAT_0077f694)[param_2];
    iVar2 = iVar2 + (&DAT_0077f694)[param_2];
  } while (iVar2 < *(int *)(param_1 + 0x18));
  return;
}
