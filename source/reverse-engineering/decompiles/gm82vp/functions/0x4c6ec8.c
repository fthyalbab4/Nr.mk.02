// rea decompile_all
// name: FUN_004c6ec8
// address: 0x4c6ec8
// body: available
// range: 0x4c6ec8-0x4c6f16 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_004c6ec8(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  HIMAGELIST himlTrack;

  cVar1 = FUN_004d3878(param_1);
  if (cVar1 != '\0') {
    *(int *)(param_1 + 0x88) = param_2;
    *(int *)(param_1 + 0x80) = param_3;
    *(int *)(param_1 + 0x84) = param_4;
    himlTrack = (HIMAGELIST)FUN_004d3a48(param_1);
    ImageList_BeginDrag(himlTrack,param_2,param_3,param_4);
    *(undefined1 *)(param_1 + 0x7a) = 1;
  }
  return cVar1 != '\0';
}
