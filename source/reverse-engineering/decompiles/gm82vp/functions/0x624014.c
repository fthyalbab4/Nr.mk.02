// rea decompile_all
// name: FUN_00624014
// address: 0x624014
// body: available
// range: 0x624014-0x62408f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_00624014(int param_1,int param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;

  local_14 = *param_3;
  uStack_10 = param_3[1];
  uStack_c = param_3[2];
  uStack_8 = param_3[3];
  uVar2 = 0;
  iVar1 = *(int *)(param_1 + 4);
  if (0 < iVar1) {
    param_2 = param_2 % iVar1;
    if (param_2 < 0) {
      param_2 = param_2 + iVar1;
    }
    if (*(char *)(param_1 + 0x28) == '\0') {
      param_2 = 0;
    }
    uVar2 = FUN_00519968(*(undefined4 *)(*(int *)(param_1 + 0x24) + param_2 * 4),&local_14,param_15,
                         param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,
                         param_13,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0xc),
                         param_14);
  }
  return uVar2;
}
