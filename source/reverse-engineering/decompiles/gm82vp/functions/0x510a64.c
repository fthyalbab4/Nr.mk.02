// rea decompile_all
// name: FUN_00510a64
// address: 0x510a64
// body: available
// range: 0x510a64-0x510bf5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00510a64(int param_1)

{
  MCIERROR MVar1;
  undefined1 auStack_3c [4];
  int local_38;
  undefined4 local_34;
  undefined1 local_30 [4];
  int local_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;

  *(undefined4 *)(param_1 + 0x350) = 0x102;
  local_34 = 8;
  mciSendCommandW((uint)*(ushort *)(param_1 + 0x35a),0x80b,0x102,(DWORD_PTR)auStack_3c);
  *(char *)(param_1 + 0x34b) = (char)local_38;
  if ((char)local_38 != '\0') {
    *(byte *)(param_1 + 0x34a) = *(byte *)(param_1 + 0x34a) | 4;
  }
  local_34 = 1;
  mciSendCommandW((uint)*(ushort *)(param_1 + 0x35a),0x80b,*(DWORD_PTR *)(param_1 + 0x350),
                  (DWORD_PTR)auStack_3c);
  *(char *)(param_1 + 0x34e) = (char)local_38;
  if ((char)local_38 != '\0') {
    *(byte *)(param_1 + 0x34a) = *(byte *)(param_1 + 0x34a) | 8;
  }
  local_34 = 7;
  mciSendCommandW((uint)*(ushort *)(param_1 + 0x35a),0x80b,*(DWORD_PTR *)(param_1 + 0x350),
                  (DWORD_PTR)auStack_3c);
  *(char *)(param_1 + 0x34d) = (char)local_38;
  if ((char)local_38 != '\0') {
    *(byte *)(param_1 + 0x34a) = *(byte *)(param_1 + 0x34a) | 2;
  }
  local_34 = 3;
  mciSendCommandW((uint)*(ushort *)(param_1 + 0x35a),0x80b,*(DWORD_PTR *)(param_1 + 0x350),
                  (DWORD_PTR)auStack_3c);
  *(char *)(param_1 + 0x34f) = (char)local_38;
  if ((char)local_38 != '\0') {
    *(byte *)(param_1 + 0x34a) = *(byte *)(param_1 + 0x34a) | 0x10;
  }
  local_34 = 4;
  mciSendCommandW((uint)*(ushort *)(param_1 + 0x35a),0x80b,*(DWORD_PTR *)(param_1 + 0x350),
                  (DWORD_PTR)auStack_3c);
  if ((((local_38 == 0x207) || (local_38 == 0x208)) || (local_38 == 0x203)) || (local_38 == 0x201))
  {
    *(undefined1 *)(param_1 + 0x34c) = 1;
  }
  if (*(char *)(param_1 + 0x34c) != '\0') {
    *(byte *)(param_1 + 0x34a) = *(byte *)(param_1 + 0x34a) | 1;
  }
  *(undefined4 *)(param_1 + 0x350) = 0x20000;
  MVar1 = mciSendCommandW((uint)*(ushort *)(param_1 + 0x35a),0x843,0x20000,(DWORD_PTR)local_30);
  *(MCIERROR *)(param_1 + 0x36c) = MVar1;
  *(int *)(param_1 + 0x378) = iStack_24 - local_2c;
  *(int *)(param_1 + 0x37c) = iStack_20 - iStack_28;
  return;
}
