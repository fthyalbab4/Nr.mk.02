// rea decompile_all
// name: FUN_00623dc0
// address: 0x623dc0
// body: available
// range: 0x623dc0-0x623ea4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_00623dc0(int param_1,int param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 *param_12,int param_13,int param_14,
            undefined4 param_15,undefined4 param_16,undefined4 param_17,undefined4 param_18,
            undefined4 param_19,undefined4 param_20,undefined4 param_21,undefined4 param_22)

{
  undefined4 uVar1;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;

  local_24 = *param_12;
  uStack_20 = param_12[1];
  uStack_1c = param_12[2];
  uStack_18 = param_12[3];
  local_14 = *param_3;
  uStack_10 = param_3[1];
  uStack_c = param_3[2];
  uStack_8 = param_3[3];
  uVar1 = 0;
  if (((param_14 != 0) && (0 < *(int *)(param_1 + 4))) && (0 < *(int *)(param_14 + 4))) {
    param_2 = param_2 % *(int *)(param_1 + 4);
    if (param_2 < 0) {
      param_2 = param_2 + *(int *)(param_1 + 4);
    }
    if (*(char *)(param_1 + 0x28) == '\0') {
      param_2 = 0;
    }
    param_13 = param_13 % *(int *)(param_14 + 4);
    if (param_13 < 0) {
      param_13 = param_13 + *(int *)(param_14 + 4);
    }
    if (*(char *)(param_14 + 0x28) == '\0') {
      param_13 = 0;
    }
    uVar1 = FUN_00518d84(*(undefined4 *)(*(int *)(param_1 + 0x24) + param_2 * 4),&local_14,param_22,
                         param_4,param_5,param_6,param_7,param_8,param_9,
                         *(undefined4 *)(param_14 + 0x10),*(undefined4 *)(param_14 + 0xc),param_10,
                         param_11,&local_24,
                         *(undefined4 *)(*(int *)(param_14 + 0x24) + param_13 * 4),param_15,param_16
                         ,param_17,param_18,param_19,param_20,*(undefined4 *)(param_1 + 0x10),
                         *(undefined4 *)(param_1 + 0xc),param_21);
  }
  return uVar1;
}
