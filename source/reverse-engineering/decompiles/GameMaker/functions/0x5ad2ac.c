// rea decompile_all
// name: FUN_005ad2ac
// address: 0x5ad2ac
// body: available
// range: 0x5ad2ac-0x5ad330 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ad2ac(int param_1,int param_2)

{
  MCIERROR MVar1;
  undefined1 auStack_1c [4];
  undefined4 local_18;

  if (((param_2 == 0) || (*(char *)(param_1 + 0x349) == '\0')) ||
     (*(char *)(param_1 + 0x34f) == '\0')) {
    *(int *)(param_1 + 0x374) = param_2;
  }
  else {
    *(undefined4 *)(param_1 + 0x350) = 0x10002;
    local_18 = FUN_004f76a8(param_2);
    MVar1 = mciSendCommandW((uint)*(ushort *)(param_1 + 0x35a),0x841,*(DWORD_PTR *)(param_1 + 0x350)
                            ,(DWORD_PTR)auStack_1c);
    *(MCIERROR *)(param_1 + 0x36c) = MVar1;
    if (MVar1 == 0) {
      *(int *)(param_1 + 0x374) = param_2;
      FUN_00448f68(param_2,param_1);
    }
    else {
      *(undefined4 *)(param_1 + 0x374) = 0;
    }
  }
  return;
}
