// rea decompile_all
// name: FUN_00424b5c
// address: 0x424b5c
// body: available
// range: 0x424b5c-0x424d25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00424b5c(VARIANTARG *param_1,VARIANTARG *param_2,code *param_3)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  SAFEARRAY *psa;
  LONG *pLVar4;
  LONG *pLVar5;
  SAFEARRAYBOUND *pSVar6;
  int iVar7;
  void *local_324;
  void *local_320;
  SAFEARRAY *local_31c;
  uint local_318;
  int local_314;
  code *local_310;
  VARIANTARG *local_30c;
  SAFEARRAYBOUND local_304 [64];
  LONG local_104 [64];

  local_310 = param_3;
  local_30c = param_1;
  if ((*(byte *)((int)&param_2->n1 + 1) & 0x20) == 0) {
    FUN_004246ec(0x80070057);
  }
  uVar1 = (param_2->n1).n2.vt;
  if ((uVar1 & 0xfff) == 0xc) {
    if ((uVar1 & 0x4000) == 0) {
      local_31c = *(SAFEARRAY **)((int)&param_2->n1 + 8);
    }
    else {
      local_31c = (SAFEARRAY *)**(int **)((int)&param_2->n1 + 8);
    }
    uVar3 = (uint)local_31c->cDims;
    local_318 = uVar3;
    if (-1 < (int)(uVar3 - 1)) {
      iVar7 = 0;
      pSVar6 = local_304;
      do {
        SafeArrayGetLBound(local_31c,iVar7 + 1,&pSVar6->lLbound);
        FUN_004246ec();
        SafeArrayGetUBound(local_31c,iVar7 + 1,&local_314);
        FUN_004246ec();
        pSVar6->cElements = (local_314 - pSVar6->lLbound) + 1;
        iVar7 = iVar7 + 1;
        pSVar6 = pSVar6 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    psa = SafeArrayCreate(0xc,local_318,local_304);
    if (psa == (SAFEARRAY *)0x0) {
      FUN_00424444();
    }
    FUN_00424ab4(local_30c);
    (local_30c->n1).n2.vt = 0x200c;
    *(SAFEARRAY **)((int)&local_30c->n1 + 8) = psa;
    if (-1 < (int)(local_318 - 1)) {
      pLVar4 = &local_304[0].lLbound;
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
      cVar2 = FUN_00424ad0(iVar7);
      if (cVar2 != '\0') {
        SafeArrayPtrOfIndex(local_31c,local_104,&local_320);
        FUN_004246ec();
        SafeArrayPtrOfIndex(psa,local_104,&local_324);
        FUN_004246ec();
        (*local_310)(local_324,local_320);
      }
      cVar2 = FUN_00424b00(iVar7);
    } while (cVar2 != '\0');
  }
  else {
    VariantCopy(local_30c,param_2);
    FUN_004246ec();
  }
  return;
}
