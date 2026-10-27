// rea decompile_all
// name: FUN_005ad45c
// address: 0x5ad45c
// body: available
// range: 0x5ad45c-0x5ad4ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ad45c(int param_1,undefined4 *param_2)

{
  MCIERROR MVar1;
  undefined1 auStack_20 [4];
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;

  if ((*(char *)(param_1 + 0x349) != '\0') && (*(char *)(param_1 + 0x34f) != '\0')) {
    *(undefined4 *)(param_1 + 0x350) = 0x40000;
    MVar1 = mciSendCommandW((uint)*(ushort *)(param_1 + 0x35a),0x843,0x40000,(DWORD_PTR)auStack_20);
    *(MCIERROR *)(param_1 + 0x36c) = MVar1;
    *param_2 = local_1c;
    param_2[1] = uStack_18;
    param_2[2] = uStack_14;
    param_2[3] = uStack_10;
  }
  return;
}
