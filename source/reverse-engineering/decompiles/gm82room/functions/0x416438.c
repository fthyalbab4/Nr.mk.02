// rea decompile_all
// name: FUN_00416438
// address: 0x416438
// body: available
// range: 0x416438-0x4164e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00416438(ulonglong *param_1,uint param_2,short param_3)

{
  float10 fVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  ushort *unaff_ESI;
  ushort *puVar6;
  float10 fVar7;
  float10 fVar8;

  fVar1 = (float10)1;
  if ((*param_1 & 0x8000000000000000) == 0) {
    fVar8 = (float10)(longlong)*param_1;
  }
  else {
    fVar8 = (float10)0x7fffffffffffffff + fVar1 + (float10)(*param_1 & 0x7fffffffffffffff);
  }
  fVar7 = (float10)param_3;
  puVar6 = unaff_ESI;
  do {
    puVar6 = puVar6 + -1;
    *puVar6 = (short)ROUND(fVar8 - (float10)(unkint10)(fVar8 / fVar7) * fVar7);
    fVar8 = fVar8 / fVar7;
    uVar3 = *puVar6 + 0x30;
    if (0x39 < uVar3) {
      uVar3 = *puVar6 + 0x37;
    }
    *puVar6 = uVar3;
  } while (fVar1 <= fVar8);
  ffree(fVar1);
  ffree(fVar8);
  ffree(fVar7);
  ffree(fVar8);
  uVar4 = (uint)((int)unaff_ESI - (int)puVar6) >> 1;
  if ((-1 < (int)param_2) && (iVar5 = param_2 - uVar4, uVar4 <= param_2 && iVar5 != 0)) {
    iVar2 = -iVar5;
    while (iVar5 = iVar5 + -1, iVar5 != 0) {
      (puVar6 + iVar2)[iVar5] = 0x30;
    }
    puVar6[iVar2] = 0x30;
  }
  return;
}
