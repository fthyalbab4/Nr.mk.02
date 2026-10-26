// rea decompile_all
// name: FUN_0042543c
// address: 0x42543c
// body: available
// range: 0x42543c-0x425474 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0042543c(undefined2 *param_1)

{
  undefined4 uVar1;
  VARIANTARG *pVVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  VARIANTARG local_14;

  VariantInit(&local_14);
  uVar6 = 3;
  uVar5 = 0;
  uVar4 = 0x400;
  pVVar2 = &local_14;
  puVar3 = param_1;
  uVar1 = (**(code **)PTR_DAT_00689388)();
  FUN_004246f8(uVar1,*param_1,3,pVVar2,puVar3,uVar4,uVar5,uVar6);
  return uVar4;
}
