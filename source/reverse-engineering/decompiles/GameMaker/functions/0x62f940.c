// rea decompile_all
// name: FUN_0062f940
// address: 0x62f940
// body: available
// range: 0x62f940-0x62f9fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062f940(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 local_1c [16];
  int local_c;
  int local_8;

  iVar3 = param_3;
  if (param_1 < param_3) {
    iVar3 = param_1;
  }
  local_8 = (iVar3 - DAT_0078a0ec) + -2;
  iVar3 = param_4;
  if (param_2 < param_4) {
    iVar3 = param_2;
  }
  local_c = (iVar3 - DAT_0078a0ec) + -2;
  if (param_1 <= param_3) {
    param_1 = param_3;
  }
  iVar3 = DAT_0078a0ec + param_1 + 2;
  if (param_4 < param_2) {
    param_4 = param_2;
  }
  iVar4 = DAT_0078a0ec + param_4 + 2;
  if (DAT_0078a0f4 != '\0') {
    local_8 = local_8 * 2;
    local_c = local_c * 2;
    iVar3 = iVar3 * 2;
    iVar4 = iVar4 * 2;
  }
  iVar1 = FUN_00462a64(DAT_0077f0e4);
  FUN_0045bc24(*(undefined4 *)(iVar1 + 0x48),0);
  FUN_00438c38(local_8,local_c,iVar3,local_1c,iVar4);
  puVar5 = local_1c;
  piVar2 = (int *)FUN_00462a64(DAT_0077f0e4);
  (**(code **)(*piVar2 + 0x4c))(piVar2,puVar5);
  return;
}
