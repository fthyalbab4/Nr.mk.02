// rea decompile_all
// name: FUN_004248a4
// address: 0x4248a4
// body: available
// range: 0x4248a4-0x424a1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004248a4(VARIANTARG *param_1)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  LONG *pLVar4;
  LONG *pLVar5;
  int *piVar6;
  int iVar7;
  void *local_31c;
  uint local_318;
  int local_314;
  SAFEARRAY *local_310;
  VARIANTARG *local_30c;
  int local_304;
  LONG local_300 [127];
  LONG local_104 [64];

  local_30c = param_1;
  if ((*(byte *)((int)&param_1->n1 + 1) & 0x20) == 0) {
    FUN_004246ec(0x80070057);
  }
  uVar1 = (local_30c->n1).n2.vt;
  if ((uVar1 & 0xfff) == 0xc) {
    if ((uVar1 & 0x4000) == 0) {
      local_310 = *(SAFEARRAY **)((int)&local_30c->n1 + 8);
    }
    else {
      local_310 = (SAFEARRAY *)**(int **)((int)&local_30c->n1 + 8);
    }
    uVar3 = (uint)local_310->cDims;
    local_318 = uVar3;
    if (-1 < (int)(uVar3 - 1)) {
      iVar7 = 0;
      piVar6 = &local_304;
      do {
        SafeArrayGetLBound(local_310,iVar7 + 1,piVar6 + 1);
        FUN_004246ec();
        SafeArrayGetUBound(local_310,iVar7 + 1,&local_314);
        FUN_004246ec();
        *piVar6 = (local_314 - piVar6[1]) + 1;
        iVar7 = iVar7 + 1;
        piVar6 = piVar6 + 2;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    if (-1 < (int)(local_318 - 1)) {
      pLVar4 = local_300;
      pLVar5 = local_104;
      uVar3 = local_318;
      do {
        *pLVar5 = *pLVar4;
        pLVar5 = pLVar5 + 1;
        pLVar4 = pLVar4 + 2;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    do {
      iVar7 = local_318 - 1;
      cVar2 = FUN_00424818(iVar7);
      if (cVar2 != '\0') {
        SafeArrayPtrOfIndex(local_310,local_104,&local_31c);
        FUN_004246ec();
        FUN_00424ab4(local_31c);
      }
      cVar2 = FUN_00424848(iVar7);
    } while (cVar2 != '\0');
  }
  VariantClear(local_30c);
  FUN_004246ec();
  return;
}
