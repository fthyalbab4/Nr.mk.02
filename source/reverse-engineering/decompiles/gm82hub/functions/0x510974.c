// rea decompile_all
// name: FUN_00510974
// address: 0x510974
// body: available
// range: 0x510974-0x510a0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00510974(int param_1,undefined4 *param_2)

{
  MCIERROR MVar1;
  byte bVar2;
  int aiStackY_1808 [1518];
  DWORD_PTR dwParam1;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined1 local_30 [4];
  undefined4 local_2c;
  undefined4 auStack_28 [4];
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;

  bVar2 = 0;
  local_40 = *param_2;
  local_3c = param_2[1];
  local_38 = param_2[2];
  local_34 = param_2[3];
  if ((*(char *)(param_1 + 0x349) != '\0') && (*(char *)(param_1 + 0x34f) != '\0')) {
    if ((local_34 == 0) && (local_38 == 0)) {
      FUN_00436ad0(local_40,local_3c,*(undefined4 *)(param_1 + 0x378),auStack_28 + 3,
                   *(undefined4 *)(param_1 + 0x37c));
    }
    else {
      auStack_28[3] = local_40;
      uStack_18 = local_3c;
      iStack_14 = local_38;
      iStack_10 = local_34;
    }
    *(undefined4 *)(param_1 + 0x350) = 0x50000;
    dwParam1 = 0x50000;
    local_2c = auStack_28[3];
    auStack_28[(uint)bVar2 * -2] = auStack_28[(uint)bVar2 * -2 + 4];
    auStack_28[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
         auStack_28[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 5];
    (auStack_28 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
         (auStack_28 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 5)[(uint)bVar2 * -2 + 1];
    MVar1 = mciSendCommandW((uint)*(ushort *)(param_1 + 0x35a),0x842,dwParam1,(DWORD_PTR)local_30);
    *(MCIERROR *)(param_1 + 0x36c) = MVar1;
  }
  return;
}
