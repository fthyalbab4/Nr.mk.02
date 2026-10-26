// rea decompile_all
// name: FUN_00425df4
// address: 0x425df4
// body: available
// range: 0x425df4-0x425e9e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00425df4(undefined2 *param_1)

{
  int iVar1;
  VARIANTARG *pVVar2;
  undefined2 *puVar3;
  uint uVar4;
  VARIANTARG local_14;

  VariantInit(&local_14);
  uVar4 = 3;
  pVVar2 = &local_14;
  puVar3 = param_1;
  iVar1 = (**(code **)PTR_DAT_00689388)();
  if (iVar1 != 0) {
    iVar1 = (**(code **)PTR_DAT_00689388)();
    if (iVar1 == 0) {
      uVar4 = FUN_004048b8();
    }
    else if (iVar1 == -0x7ffdfffb) {
      uVar4 = FUN_00426800(param_1);
      uVar4 = uVar4 & 0x7f;
    }
    else {
      FUN_004246f8(iVar1,*param_1,0x14,pVVar2,puVar3);
      uVar4 = 0;
    }
  }
  return uVar4;
}
