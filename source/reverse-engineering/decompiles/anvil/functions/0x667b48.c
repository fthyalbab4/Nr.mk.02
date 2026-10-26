// rea decompile_all
// name: FUN_00667b48
// address: 0x667b48
// body: available
// range: 0x667b48-0x667c5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00667b48(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,
                 undefined4 param_21,undefined4 param_22,undefined4 param_23)

{
  int iVar1;
  int iVar2;

  iVar2 = FUN_00409c34(*(undefined4 *)(param_1 + 8));
  if (iVar2 <= *(int *)(param_1 + 4)) {
    FUN_00409dfc(param_1 + 8,&DAT_0066712c,1,*(int *)(param_1 + 4) + 0x20);
  }
  *(undefined4 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 0x58) = param_2;
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar1 + 8 + iVar2 * 0x58) = param_22;
  *(undefined4 *)(iVar1 + 0xc + iVar2 * 0x58) = param_23;
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar1 + 0x10 + iVar2 * 0x58) = param_20;
  *(undefined4 *)(iVar1 + 0x14 + iVar2 * 0x58) = param_21;
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar1 + 0x18 + iVar2 * 0x58) = param_18;
  *(undefined4 *)(iVar1 + 0x1c + iVar2 * 0x58) = param_19;
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar1 + 0x20 + iVar2 * 0x58) = param_16;
  *(undefined4 *)(iVar1 + 0x24 + iVar2 * 0x58) = param_17;
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar1 + 0x28 + iVar2 * 0x58) = param_14;
  *(undefined4 *)(iVar1 + 0x2c + iVar2 * 0x58) = param_15;
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar1 + 0x30 + iVar2 * 0x58) = param_12;
  *(undefined4 *)(iVar1 + 0x34 + iVar2 * 0x58) = param_13;
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar1 + 0x38 + iVar2 * 0x58) = param_10;
  *(undefined4 *)(iVar1 + 0x3c + iVar2 * 0x58) = param_11;
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar1 + 0x40 + iVar2 * 0x58) = param_8;
  *(undefined4 *)(iVar1 + 0x44 + iVar2 * 0x58) = param_9;
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar1 + 0x48 + iVar2 * 0x58) = param_6;
  *(undefined4 *)(iVar1 + 0x4c + iVar2 * 0x58) = param_7;
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar1 + 0x50 + iVar2 * 0x58) = param_4;
  *(undefined4 *)(iVar1 + 0x54 + iVar2 * 0x58) = param_5;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}
