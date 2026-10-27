// rea decompile_all
// name: FUN_00416518
// address: 0x416518
// body: available
// range: 0x416518-0x4165ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00416518(ulonglong *param_1,uint param_2,short param_3)

{
  float10 fVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  byte *unaff_ESI;
  byte *pbVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  char local_8;

  fVar1 = (float10)1;
  if ((*param_1 & 0x8000000000000000) == 0) {
    fVar8 = (float10)(longlong)*param_1;
  }
  else {
    fVar8 = (float10)0x7fffffffffffffff + fVar1 + (float10)(*param_1 & 0x7fffffffffffffff);
  }
  fVar6 = (float10)param_3;
  pbVar5 = unaff_ESI;
  do {
    pbVar5 = pbVar5 + -1;
    fVar7 = fVar8 - (float10)(unkint10)(fVar8 / fVar6) * fVar6;
    fVar8 = fVar8 / fVar6;
    local_8 = (char)(short)ROUND(fVar7);
    bVar3 = local_8 + 0x30;
    if (0x39 < bVar3) {
      bVar3 = local_8 + 0x37;
    }
    *pbVar5 = bVar3;
  } while (fVar1 <= fVar8);
  ffree(fVar1);
  ffree(fVar8);
  ffree(fVar6);
  ffree(fVar8);
  iVar4 = param_2 - ((int)unaff_ESI - (int)pbVar5);
  if ((uint)((int)unaff_ESI - (int)pbVar5) <= param_2 && iVar4 != 0) {
    iVar2 = -iVar4;
    while (iVar4 = iVar4 + -1, iVar4 != 0) {
      (pbVar5 + iVar2)[iVar4] = 0x30;
    }
    pbVar5[iVar2] = 0x30;
  }
  return;
}
