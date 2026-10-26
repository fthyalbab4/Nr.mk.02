// rea decompile_all
// name: FUN_00649be4
// address: 0x649be4
// body: available
// range: 0x649be4-0x649cdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00649be4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;

  puVar1 = PTR_DAT_00781e14;
  if (param_2 != -1) {
    if (param_2 == 1) {
      uVar2 = FUN_0070284c(*(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x704),param_5,param_4);
      *(undefined4 *)(*(int *)puVar1 + 0x719) = uVar2;
    }
    else {
      uVar2 = FUN_0070284c(*(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x704),param_5,param_4);
      *(undefined4 *)(*(int *)puVar1 + 0x715) = uVar2;
    }
    uVar3 = FUN_0070284c(*(undefined4 *)(*(int *)puVar1 + 0x704),param_5,param_4);
    FUN_00530760(*(undefined4 *)(*(int *)puVar1 + 0x65c),uVar3 >> 0x18);
    *(undefined1 *)(*(int *)puVar1 + 0x718) =
         *(undefined1 *)(*(int *)(*(int *)puVar1 + 0x65c) + 0x2a0);
    *(undefined1 *)(*(int *)puVar1 + 0x71c) =
         *(undefined1 *)(*(int *)(*(int *)puVar1 + 0x65c) + 0x2a0);
    uVar2 = FUN_005a5438(*(undefined4 *)(*(int *)puVar1 + 0x715));
    FUN_0045bc24(*(undefined4 *)(*(int *)(*(int *)puVar1 + 0x470) + 0x1b4),uVar2);
    uVar2 = FUN_005a5438(*(undefined4 *)(*(int *)puVar1 + 0x719));
    FUN_0045bc24(*(undefined4 *)(*(int *)(*(int *)puVar1 + 0x474) + 0x1b4),uVar2);
  }
  return;
}
